@class UIImageView, IESLivePSFloatSheetGradientLabel;

@interface IESLivePSFloatSheetItemCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) IESLivePSFloatSheetGradientLabel *textLabel;

- (void)refreshWithItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
