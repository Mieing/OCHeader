@interface AWEImageTextCalculatedColorController : BDMultiContentContainer.BaseContentListController <AWEImageTextCalculatedColorControllerProtocol, AWEViewControllerLifeCycle, BDMultiContentContainer.BaseContentListScrollViewProtocol, BDMultiContentContainer.BaseContentListDataUpdateProtocol, BDMultiContentContainer.BaseContentListImageCellProtocol> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_gradientView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_calculateColorManager;
}

- (void)onScrollViewDidScroll:(id)a0;
- (void)onListDidReset;
- (void)onModelDidUpdateWithModel:(id)a0;
- (void)onImageCellDidEndLoadPreviewImage:(id)a0 image:(id)a1 url:(id)a2 error:(id)a3;
- (void)onImageCellDidEndLoadImage:(id)a0 image:(id)a1 url:(id)a2 error:(id)a3;
- (id)getGradientView;
- (BOOL)judgeEnable;
- (id)getGradientColors;
- (id)getGradientLocations;
- (id)getColorArrayAtIndex:(long long)a0;
- (void)calculateColorWithImage:(id)a0 imageModel:(id)a1 completion:(id /* block */)a2;
- (void)onShrinkStateDidUpdate:(BOOL)a0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 animated:(BOOL)a2;
- (void)onImageContentInsetsDidUpdate:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 animated:(BOOL)a1 duration:(double)a2;
- (void)onImageTextSectionDidEndPreloadWithCurrentIndex:(long long)a0 image:(id)a1 url:(id)a2 error:(id)a3;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)viewDidLoad;

@end
