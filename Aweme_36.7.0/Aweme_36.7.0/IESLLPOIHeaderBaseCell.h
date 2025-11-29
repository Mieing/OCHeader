@class CAGradientLayer, UIImage, IESLLTripHeaderTitleLabelView, UIViewController;

@interface IESLLPOIHeaderBaseCell : UICollectionViewCell

@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) CAGradientLayer *bottomGradientLayer;
@property (retain, nonatomic) IESLLTripHeaderTitleLabelView *labelView;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (weak, nonatomic) UIViewController *vc;

- (void)didEndDisplayingCell;
- (void)setupBaseViews;
- (void)updateHeight:(double)a0 isMaxUnfold:(BOOL)a1 duration:(double)a2;
- (void)updateLayoutForLayerAndLabel;
- (void)updateHeight:(double)a0 isMaxUnfold:(BOOL)a1;
- (void).cxx_destruct;
- (void)updateData:(id)a0 completion:(id /* block */)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateStyle:(unsigned long long)a0;
- (void)willDisplayCell;

@end
