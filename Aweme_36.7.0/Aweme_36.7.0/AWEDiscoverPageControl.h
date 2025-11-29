@class UIColor, NSMutableArray;

@interface AWEDiscoverPageControl : UIView

@property (retain, nonatomic) NSMutableArray *dotArray;
@property (nonatomic) unsigned long long currentPage;
@property (nonatomic) unsigned long long numberOfPages;
@property (retain, nonatomic) UIColor *selectedColor;
@property (retain, nonatomic) UIColor *unSelectedColor;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)_setupUI;

@end
