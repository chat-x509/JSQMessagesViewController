import UIKit

public let cellLabelHeightDefault: CGFloat = 20
public let avatarSizeDefault: CGFloat = 30

open class X509MessagesCollectionViewFlowLayout: UICollectionViewFlowLayout {
  public override init() { super.init(); setupView(); setupObserver() }
  required public init?(coder decoder: NSCoder) { super.init(coder: decoder); setupView(); setupObserver() }
  deinit { NotificationCenter.default.removeObserver(self) }
  private func setupView() { sectionInset = UIEdgeInsets(top: 4, left: 8, bottom: 4, right: 8) }
  @objc private func handleOrientationChange(_: Notification) { invalidateLayout() }
  private func setupObserver() {
     NotificationCenter.default.addObserver(self,
         selector: #selector(X509MessagesCollectionViewFlowLayout.handleOrientationChange(_:)),
         name: UIDevice.orientationDidChangeNotification,
         object: nil)
     }
}
