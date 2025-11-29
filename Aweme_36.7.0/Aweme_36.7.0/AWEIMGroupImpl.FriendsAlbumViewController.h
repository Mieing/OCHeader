@interface AWEIMGroupImpl.FriendsAlbumViewController : UIViewController <AWEIMInAppPushProtocol, AWEIMGroupImpl.CollectionViewWaterfallLayoutDelegate, IESIMGroupEssenceChildViewControllerProtocol, AWEIMMediaDetailTransitionOuterContextProvider, AWEZoomTransitionOuterContextProvider> {
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ lastSelectView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_emptyView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_errorView;
    void /* unknown type, empty encoding */ wrapperedInContainer;
    void /* unknown type, empty encoding */ loadingView;
    void /* unknown type, empty encoding */ showedAssetIds;
    void /* unknown type, empty encoding */ enterFrom;
    void /* unknown type, empty encoding */ enterMethod;
    void /* unknown type, empty encoding */ _groupTrackUtil;
    void /* unknown type, empty encoding */ _trackService;
}

- (BOOL)canShowInnerPush;
- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (double)zoomTransitionTargetViewCornerRadius;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })focusViewFixedFrame;
- (id)mediaDetailTransitionStartView;
- (void)updateEnterFrom:(id)a0 enterMethod:(id)a1;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
