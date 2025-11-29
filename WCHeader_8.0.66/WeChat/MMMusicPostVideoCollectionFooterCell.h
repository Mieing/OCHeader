@class UIImageView, MMUIActivityIndicatorView;

@interface MMMusicPostVideoCollectionFooterCell : UICollectionReusableView {
    MMUIActivityIndicatorView *m_loadingView;
    UIImageView *m_pageEndImageView;
}

+ (id)reuseKeyStr;
+ (struct CGSize { double x0; double x1; })getFooterViewSize:(double)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (void)layoutSubviews;
- (void)setLoadingVisible:(BOOL)a0;
- (void)setVisible:(BOOL)a0;
- (void).cxx_destruct;

@end
