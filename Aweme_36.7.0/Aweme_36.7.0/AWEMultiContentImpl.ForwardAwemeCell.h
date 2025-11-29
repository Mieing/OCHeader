@interface AWEMultiContentImpl.ForwardAwemeCell : UICollectionViewCell <AFDStory25CellProtocol, HunterContainerLifeCycleProtocol, AWEFeedShareInfoContainerViewDelegate, AFDForwardAwemeCellProtocol> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ startTimestamp;
    void /* unknown type, empty encoding */ didUpdated;
    void /* unknown type, empty encoding */ dynamicPatchModel;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ showingPopoverView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_errorView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_playerContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_nativeBGView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_nativeBGGradientLayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lynxView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentContainer;
}

- (id)currentAweme;
- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)containerDidUpdate:(id)a0;
- (void)viewDidUpdate:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)waterFallTargetView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
