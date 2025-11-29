@class UIImageView, UIVisualEffectView, UIView, UILabel, AWEGradientView;

@interface AWEPOIHeaderContentImageCell : AWEPOIHeaderContentBaseCell

@property (retain, nonatomic) UIImageView *cellImageView;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIVisualEffectView *bgMaskView;
@property (retain, nonatomic) UIView *infoView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) AWEGradientView *infoBgGradientView;
@property (nonatomic) BOOL showInfoView;

- (void)updateData:(id)a0 originHeight:(double)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (void)setupInfoView;

@end
