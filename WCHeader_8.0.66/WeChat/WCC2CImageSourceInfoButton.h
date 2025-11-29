@class UIImageView, UILabel, UIView, CommonMessageSourceInfoHandler;

@interface WCC2CImageSourceInfoButton : MMUIButton

@property (retain, nonatomic) UIImageView *rightImageView;
@property (retain, nonatomic) UILabel *centerLabel;
@property (retain, nonatomic) UIView *hightLightMaskView;
@property (retain, nonatomic) CommonMessageSourceInfoHandler *handler;

- (id)initWithSourceInfoHandler:(id)a0;
- (void)initView;
- (void)layoutSubviews;
- (void)setupShadow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;

@end
