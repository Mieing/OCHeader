@class UITapGestureRecognizer, DUXBadge, DUXBaseImageView;

@interface AWESearchHomePageMessageEntranceView : UIView

@property (retain, nonatomic) DUXBadge *dotBadge;
@property (retain, nonatomic) DUXBaseImageView *iconView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;

- (void)showLeftSideBarRedDot;
- (void)hideLeftSideBarRedDot;
- (void)trackShow;
- (void)trackClick;
- (void)p_addTapGesture;
- (void)p_actionClick;
- (void)p_layoutDotBadge;
- (id)p_commonTrackParams;
- (void)updateRedDotCount:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setupUI;

@end
