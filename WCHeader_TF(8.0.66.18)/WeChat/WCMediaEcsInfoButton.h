@class NSString, UIImageView, UILabel, UIView;

@interface WCMediaEcsInfoButton : MMUIButton

@property (retain, nonatomic) UIImageView *leftImageView;
@property (retain, nonatomic) UIImageView *rightImageView;
@property (retain, nonatomic) UILabel *centerLabel;
@property (retain, nonatomic) UIView *hightLightMaskView;
@property (retain, nonatomic) NSString *wording;

- (id)init;
- (void)initView;
- (void)layoutSubviews;
- (void)updateWording:(id)a0;
- (void)setupShadow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;

@end
