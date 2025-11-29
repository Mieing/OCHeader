@interface IESLivePinGuideView : UIView

@property (copy, nonatomic) id /* block */ didClickPin;
@property (copy, nonatomic) id /* block */ didClickClose;

- (void)clickCloseBtn:(id)a0;
- (void)clickPinBtn:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
