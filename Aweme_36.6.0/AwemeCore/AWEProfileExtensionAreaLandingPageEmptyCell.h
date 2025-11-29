@class CAShapeLayer, UILabel, UIView;

@interface AWEProfileExtensionAreaLandingPageEmptyCell : UICollectionViewCell

@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) CAShapeLayer *borderLayer;
@property (retain, nonatomic) UILabel *mainLabel;

- (void)addBorderLayerWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)refreshWithType:(unsigned long long)a0 isEditing:(BOOL)a1 borderSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
