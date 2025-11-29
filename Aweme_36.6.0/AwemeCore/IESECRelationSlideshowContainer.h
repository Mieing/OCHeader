@class UIImageView, UIScrollView, UIView, NSMutableArray;

@interface IESECRelationSlideshowContainer : UIView {
    UIImageView *_mainImageView;
    UIScrollView *_contentView;
    long long _numberOfItems;
    NSMutableArray *_items;
    NSMutableArray *_configurations;
}

@property (readonly, nonatomic) long long numberOfItems;
@property (nonatomic) long long currentIndex;
@property (readonly, nonatomic) UIView *currentItem;
@property (nonatomic) BOOL enablePreloadImg;

- (void)appendImageLoadConfiguration:(id)a0;
- (void)backToMainImageWithAnimation;
- (void)updateImageAtIndexIfNeeded:(long long)a0;
- (void)preloadImageAtIndex:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)scrollToIndex:(long long)a0 animated:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectAtIndex:(long long)a0;
- (void)removeAllImages;

@end
