@class UIImageView, UIView;

@interface ACCTextTypeFaceCategoryViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *imageSelectedView;
@property (nonatomic) BOOL modernUI;

- (void)configWithItemModel:(id)a0;
- (void)setupBasicAccessibility;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
