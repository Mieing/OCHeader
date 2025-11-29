@class UIView;

@interface AWESearchLayoutDelegateContainerView : UIView

@property (weak, nonatomic) UIView *layoutDelegate;

- (void).cxx_destruct;
- (void)layoutIfNeeded;
- (void)setNeedsLayout;
- (void)layoutSubviews;

@end
