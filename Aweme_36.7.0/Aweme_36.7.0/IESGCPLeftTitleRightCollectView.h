@class UIStackView, UILabel, NSMutableArray, UITapGestureRecognizer;

@interface IESGCPLeftTitleRightCollectView : UIView

@property (retain, nonatomic) UILabel *leftTitle;
@property (retain, nonatomic) UIStackView *collectView;
@property (retain, nonatomic) NSMutableArray *collectViewArrays;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (copy, nonatomic) id /* block */ actionBlock;

- (void)configLeftTitle:(id)a0;
- (void)confitRightCollectWithSpacing:(double)a0 rightViews:(id)a1;
- (void)configLeftTitle:(id)a0 rightViews:(id)a1 horizonalSpacing:(double)a2;
- (void)layoutViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (void)tapAction:(id)a0;

@end
