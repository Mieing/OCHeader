@class UIScrollView, UIView;

@interface IESECBuyNowTextFieldController : NSObject

@property (weak, nonatomic) UIView *containerView;
@property (weak, nonatomic) UIScrollView *mainCollectionView;

- (id)initWithContainerView:(id)a0 mainScrollView:(id)a1;
- (void).cxx_destruct;
- (void)registerNotifications;
- (void)keyboardWillShow:(id)a0;
- (void)removeNotifications;
- (id)findFirstResponder:(id)a0;

@end
