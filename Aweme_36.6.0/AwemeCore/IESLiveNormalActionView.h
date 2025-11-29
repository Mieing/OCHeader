@class IESLiveNormalActionViewConfig, UILabel;

@interface IESLiveNormalActionView : UIView

@property (retain, nonatomic) IESLiveNormalActionViewConfig *config;
@property (retain, nonatomic) UILabel *label;

+ (id)ctreateButtonWithConfig:(id)a0;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithConfig:(id)a0;
- (void)onTap;
- (void)setupUI;

@end
