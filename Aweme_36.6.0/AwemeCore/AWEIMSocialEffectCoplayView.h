@class UILabel, UIImageView, UIView;

@interface AWEIMSocialEffectCoplayView : UIControl

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) UIView *subCoplayContainer;
@property (retain, nonatomic) UILabel *coplayLabel;
@property (retain, nonatomic) UIImageView *coplayIcon;

- (void)setCoplayIconHidden:(BOOL)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;

@end
