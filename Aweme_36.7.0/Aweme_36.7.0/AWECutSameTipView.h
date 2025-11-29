@class UILabel, ACCButton;

@interface AWECutSameTipView : UIView

@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) ACCButton *clickButton;
@property (retain, nonatomic) ACCButton *closeButton;
@property (copy, nonatomic) id /* block */ tapBlock;

- (void)updateCutSameTitlte:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (void)didTap;

@end
