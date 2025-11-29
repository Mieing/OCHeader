@class UIImageView, UIButton;

@interface AWEmusicCollectionPlayListFooterView : UICollectionReusableView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIButton *moreButton;
@property (copy, nonatomic) id /* block */ moreButtonClickBlock;

- (void)awe_themeReload;
- (void)configSubviews;
- (void)buttonClick:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
