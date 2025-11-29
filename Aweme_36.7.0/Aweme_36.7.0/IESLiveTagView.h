@class IESLiveTagConfiguration, UILabel, UIImageView;

@interface IESLiveTagView : UIView

@property (retain, nonatomic) IESLiveTagConfiguration *configuration;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *icon;

- (void)configureLabel;
- (void)layoutOnlyText;
- (void)configureIcon;
- (void)layoutTextIcon;
- (void)updateConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)applyConfiguration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1;
- (void)configureAppearance;

@end
