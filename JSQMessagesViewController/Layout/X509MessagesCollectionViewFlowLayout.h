#import <UIKit/UIKit.h>
#import "JSQMessagesBubbleSizeCalculating.h"

@class JSQMessagesCollectionView;

FOUNDATION_EXPORT const CGFloat cellLabelHeightDefault;
FOUNDATION_EXPORT const CGFloat avatarSizeDefault;

NS_ASSUME_NONNULL_BEGIN

@interface X509MessagesCollectionViewFlowLayout : UICollectionViewFlowLayout
@property (readonly, nonatomic) JSQMessagesCollectionView *collectionView;
@property (strong, nonatomic) id<JSQMessagesBubbleSizeCalculating> bubbleSizeCalculator;
@property (assign, nonatomic) BOOL springinessEnabled;
@property (assign, nonatomic) NSUInteger springResistanceFactor;
@property (readonly, nonatomic) CGFloat itemWidth;
@property (strong, nonatomic) UIFont *messageBubbleFont;
@property (assign, nonatomic) CGFloat messageBubbleLeftRightMargin;
@property (assign, nonatomic) UIEdgeInsets messageBubbleTextViewFrameInsets;
@property (assign, nonatomic) UIEdgeInsets messageBubbleTextViewTextContainerInsets;
@property (assign, nonatomic) CGSize incomingAvatarViewSize;
@property (assign, nonatomic) CGSize outgoingAvatarViewSize;
@property (assign, nonatomic) NSUInteger cacheLimit;

@end

NS_ASSUME_NONNULL_END
