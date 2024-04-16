#import <UIKit/UIKit.h>

#import "JSQMessagesCollectionView.h"
#import "JSQMessagesCollectionViewFlowLayout.h"
#import "X509MessagesCollectionViewFlowLayout.h"
#import "JSQMessagesInputToolbar.h"

NS_ASSUME_NONNULL_BEGIN

@interface JSQMessagesViewController
         : UIViewController <JSQMessagesCollectionViewDataSource,
                             JSQMessagesCollectionViewDelegateFlowLayout,
                             UITextViewDelegate>

@property (weak, nonatomic, readonly, nullable) JSQMessagesCollectionView *collectionView;
@property (strong, nonatomic, readonly) JSQMessagesInputToolbar *inputToolbar;
@property (assign, nonatomic) BOOL automaticallyScrollsToMostRecentMessage;
@property (copy, nonatomic) NSString *outgoingCellIdentifier;
@property (copy, nonatomic) NSString *outgoingMediaCellIdentifier;
@property (copy, nonatomic) NSString *incomingCellIdentifier;
@property (copy, nonatomic) NSString *incomingMediaCellIdentifier;
@property (assign, nonatomic) BOOL showTypingIndicator;
@property (assign, nonatomic) BOOL showLoadEarlierMessagesHeader;
@property (assign, nonatomic) UIEdgeInsets additionalContentInset;

+ (UINib *)nib;
+ (instancetype)messagesViewController;

- (void)didPressSendButton:(UIButton *)button
           withMessageText:(NSString *)text
                  senderId:(NSString *)senderId
         senderDisplayName:(NSString *)senderDisplayName
                      date:(NSDate *)date;

- (void)didPressAccessoryButton:(UIButton *)sender;
- (void)finishSendingMessage;
- (void)finishSendingMessageAnimated:(BOOL)animated;
- (void)finishReceivingMessage;
- (void)finishReceivingMessageAnimated:(BOOL)animated;
- (void)scrollToBottomAnimated:(BOOL)animated;
- (BOOL)isOutgoingMessage:(id<JSQMessageData>)messageItem;
- (void)scrollToIndexPath:(NSIndexPath *)indexPath animated:(BOOL)animated;
- (void)viewDidLoad NS_REQUIRES_SUPER;
- (void)viewWillAppear:(BOOL)animated NS_REQUIRES_SUPER;
- (void)viewDidAppear:(BOOL)animated NS_REQUIRES_SUPER;
- (void)viewWillDisappear:(BOOL)animated NS_REQUIRES_SUPER;
- (void)viewDidDisappear:(BOOL)animated NS_REQUIRES_SUPER;
- (void)didReceiveMenuWillShowNotification:(NSNotification *)notification;
- (void)didReceiveMenuWillHideNotification:(NSNotification *)notification;

@end

NS_ASSUME_NONNULL_END
