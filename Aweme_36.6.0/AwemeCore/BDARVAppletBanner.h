@class UIImageView, UILabel, UIView, UIButton;

@interface BDARVAppletBanner : BDARVBanner

@property (retain, nonatomic) UIImageView *avatar;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UILabel *sourceLabel;
@property (retain, nonatomic) UILabel *adLabel;
@property (retain, nonatomic) UILabel *avatarLabel;
@property (retain, nonatomic) UIView *topBorder;
@property (retain, nonatomic) UIView *bottomBorder;
@property (nonatomic) BOOL is4dy;

- (void)actionBtnClick:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 source:(id)a1;
- (void)useCustomAdLabel;
- (id)getDefaultAvatarImage;
- (void)sendBannerEventWithLabel:(id)a0 refer:(id)a1;
- (void)clickTimeMonitor;
- (id)referString:(id)a0;
- (void)layoutComponents4DY;
- (void)tapAction:(id)a0 forEvent:(id)a1;
- (void)resizeLayout;
- (void)sendBannerEventWithLabel:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)updateUI:(id)a0;

@end
