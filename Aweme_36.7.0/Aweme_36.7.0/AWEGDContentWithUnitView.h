@class AWEGDContentWithUnitModel, UILabel, AWEGradientView, UIView;

@interface AWEGDContentWithUnitView : UIView

@property (weak, nonatomic) AWEGDContentWithUnitModel *model;
@property (retain, nonatomic) AWEGradientView *dotView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIView *descView;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *unitLabel;

- (void)configWithContentWithUnitModel:(id)a0;
- (id)subContentLabel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
