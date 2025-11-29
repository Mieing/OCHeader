@class UITapGestureRecognizer, DUXBadge, UIView;

@interface AWEIMFansAndInteractMergeViewControllerNaviBarItemView : UIView

@property (copy, nonatomic) id /* block */ onTapAction;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *innerContainerView;
@property (retain, nonatomic) DUXBadge *unreadBadge;

- (void)showBadgeNumber:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setActivated:(BOOL)a0;
- (void)addConstraints;
- (void)onTap:(id)a0;

@end
