@class WCFinderMsgSessionBadgeGroupView, WCFinderAuthInfoIconView, MMUILabel;

@interface WCFinderMsgSessionTitleView : UIView

@property (retain, nonatomic) WCFinderMsgSessionBadgeGroupView *badgeGroupView;
@property (retain, nonatomic) WCFinderAuthInfoIconView *iconView;
@property (retain, nonatomic) MMUILabel *titleLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViewsWithTitle:(id)a0 titleColor:(id)a1 authInfo:(id)a2 sessionId:(id)a3;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
