@class BDPCustomLoadingErrorModal_HG, UIImageView, BDPCustomLoadingModel_HG, UIView, BDPUniqueID, UILabel;

@interface BDPCustomLoadingView_HG : UIView

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPCustomLoadingModel_HG *config;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *bgView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIView *progressBgView;
@property (retain, nonatomic) UIView *progressView;
@property (retain, nonatomic) UILabel *showText;
@property (retain, nonatomic) BDPCustomLoadingErrorModal_HG *errModal;
@property (nonatomic) float designHeight;
@property (nonatomic) float designWidth;

- (void)layoutLoadingWithConfig:(id)a0;
- (void)p_setupImageView:(id)a0 materialPath:(id)a1 completion:(id /* block */)a2;
- (id)p_transformColorWithStr:(id)a0 defaultColor:(id)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })p_getTransformFromScaleMode:(id)a0;
- (void)layoutLoadingFailed:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1 uniqueID:(id)a2;
- (void)updateWithProgress:(double)a0 hintText:(id)a1;
- (void)updateWhenLoadingFailure:(id)a0;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;

@end
