@class UILabel, UIFont;

@interface AWEImageTemplateListTabTitleControl : UICollectionViewCell

@property (retain, nonatomic) UILabel *tabLabel;
@property (nonatomic) BOOL isSelect;
@property (retain, nonatomic) UIFont *selectedFont;
@property (retain, nonatomic) UIFont *unselectedFont;

- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
