@class UILabel;

@interface AWEVideoHintView : UIView

@property (retain, nonatomic) UILabel *topLabel;
@property (retain, nonatomic) UILabel *bottomLabel;

- (void)updateTopText:(id)a0 bottomText:(id)a1;
- (void)uniformSettingForLabel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
