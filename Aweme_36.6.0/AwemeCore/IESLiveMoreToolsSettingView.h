@class IESLiveMoreToolsSettingHeadConfig, UILabel;

@interface IESLiveMoreToolsSettingView : UIView

@property (retain, nonatomic) IESLiveMoreToolsSettingHeadConfig *headConfig;
@property (retain, nonatomic) UILabel *title;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void)buildViewWithSettingItems:(id)a0;
- (void).cxx_destruct;
- (void)updateTitle:(id)a0;

@end
