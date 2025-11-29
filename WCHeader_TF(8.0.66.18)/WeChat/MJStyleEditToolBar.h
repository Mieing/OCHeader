@class MMUILabel, MMUIButton;

@interface MJStyleEditToolBar : UIView

@property (readonly, nonatomic) MMUILabel *titleLabel;
@property (readonly, nonatomic) MMUIButton *doneButton;
@property (readonly, nonatomic) MMUIButton *cancelButton;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ doneBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;
- (void).cxx_destruct;

@end
