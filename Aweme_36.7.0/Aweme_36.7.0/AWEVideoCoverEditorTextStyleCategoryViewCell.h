@class UIImageView, UIView;

@interface AWEVideoCoverEditorTextStyleCategoryViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *imageSelectedView;
@property (retain, nonatomic) UIView *colorView;
@property (retain, nonatomic) UIView *colorSelectedView;

- (void)configWithItemModel:(id)a0;
- (id)colorNameDict;
- (id)alignmentNameList;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
