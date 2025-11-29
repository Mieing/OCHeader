@class AWEProfileHeaderRemindBannerBGView, AWEProfileHeaderContext, UIView;

@interface AWEProfileHeaderContainerView : UIView

@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (retain, nonatomic) UIView *bgCornerView;
@property (retain, nonatomic) AWEProfileHeaderRemindBannerBGView *remindBannerBGView;

- (void)configWithContext:(id)a0;
- (void)refreshAlphaForHeaderView:(double)a0;
- (BOOL)enableBgCornerView;
- (void)p_trackRemindBannerShow;
- (void)refreshHeaderFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 bgCornerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)updateRemindBannerAlpha:(double)a0;
- (void)updateRemindBannerHidden:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
