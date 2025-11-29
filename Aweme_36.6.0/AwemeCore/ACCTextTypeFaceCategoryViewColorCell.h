@class UIImageView, UIView;

@interface ACCTextTypeFaceCategoryViewColorCell : ACCTextTypeFaceCategoryViewCell

@property (retain, nonatomic) UIView *colorView;
@property (retain, nonatomic) UIView *colorSelectedView;
@property (retain, nonatomic) UIImageView *defaultImageView;

- (void)configWithItemModel:(id)a0;
- (id)colorNameDict;
- (void).cxx_destruct;
- (void)setupUI;

@end
