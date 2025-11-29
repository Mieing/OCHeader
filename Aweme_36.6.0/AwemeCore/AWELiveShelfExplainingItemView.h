@class UIImageView, UILabel, AWEGradientView, UIView;

@interface AWELiveShelfExplainingItemView : UIView

@property (retain, nonatomic) UIView *viewContainerView;
@property (retain, nonatomic) AWEGradientView *numberContainerView;
@property (retain, nonatomic) UILabel *numberLabel;
@property (retain, nonatomic) UILabel *explainingLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (copy, nonatomic) id /* block */ cardClickedBlock;

+ (double)cardHeight;

- (void)cardClicked:(id)a0;
- (void)configWithNumberStr:(id)a0 title:(id)a1;
- (void)configBackgroundColor:(id)a0;
- (void)configInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
