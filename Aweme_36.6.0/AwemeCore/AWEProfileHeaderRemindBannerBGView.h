@class AWEProfileHeaderRemindBannerView, AWEProfileHeaderContext, UIView;

@interface AWEProfileHeaderRemindBannerBGView : UIView

@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (nonatomic) double maskHeight;
@property (retain, nonatomic) UIView *colorView;
@property (retain, nonatomic) AWEProfileHeaderRemindBannerView *bannerView;

- (void)configWithContext:(id)a0;
- (void)refreshAlphaForHeaderView:(double)a0;
- (void)p_addMaskWithHeight:(double)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateUI;

@end
