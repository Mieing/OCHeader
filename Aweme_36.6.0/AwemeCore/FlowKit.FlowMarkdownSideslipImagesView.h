@interface FlowKit.FlowMarkdownSideslipImagesView : UIView <FSPagerView.FSPagerViewDataSource, FSPagerView.FSPagerViewDelegate> {
    void /* unknown type, empty encoding */ tapBlock;
    void /* unknown type, empty encoding */ linkButtonClickBlock;
    void /* unknown type, empty encoding */ isImageSetted;
    void /* unknown type, empty encoding */ enableRetry;
    void /* unknown type, empty encoding */ showCaption;
    void /* unknown type, empty encoding */ images;
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ captionCollectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pagerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_captionPagerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pageControl;
}

- (long long)numberOfItemsInPagerView:(id)a0;
- (id)pagerView:(id)a0 cellForItemAtIndex:(long long)a1;
- (void)pagerView:(id)a0 didSelectItemAtIndex:(long long)a1;
- (void)pagerViewWillBeginDragging:(id)a0;
- (void)pagerViewWillEndDragging:(id)a0 targetIndex:(long long)a1;
- (void)pagerViewDidEndScrollAnimation:(id)a0;
- (void)pagerView:(id)a0 willDisplayCell:(id)a1 forItemAtIndex:(long long)a2;
- (void)pagerViewDidScroll:(id)a0;
- (void)pageChanged;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
