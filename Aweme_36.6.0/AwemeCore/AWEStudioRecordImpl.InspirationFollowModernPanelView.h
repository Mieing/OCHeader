@interface AWEStudioRecordImpl.InspirationFollowModernPanelView : AWEStudioRecordImpl.CameraPassThroughView <ACCFullScreenPanelViewProtocol, UICollectionViewDelegate, UICollectionViewDataSource> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentGradientView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_actionView;
    void /* unknown type, empty encoding */ cache;
    void /* unknown type, empty encoding */ trackTimer;
    void /* unknown type, empty encoding */ userScrollInSession;
    void /* unknown type, empty encoding */ needImageLoadedCount;
    void /* unknown type, empty encoding */ didReportImageLoaded;
    void /* unknown type, empty encoding */ imageLoadedCount;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shootButtonView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_recordButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shootButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_panelCollectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scanClickView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_aiAssistClickView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_filterClickView;
    void /* unknown type, empty encoding */ filterPanel;
    void /* unknown type, empty encoding */ actionType;
    void /* unknown type, empty encoding */ didDragBeforeEndScroll;
    void /* unknown type, empty encoding */ aiSelected;
    void /* unknown type, empty encoding */ hasManualSelectedCell;
    void /* unknown type, empty encoding */ recommandPanelDraggingCount;
    void /* unknown type, empty encoding */ didShowUpSwipeGudie;
    void /* unknown type, empty encoding */ panelHeight;
    void /* unknown type, empty encoding */ collectionConfig;
    void /* unknown type, empty encoding */ panelAdapteConfig;
}

- (double)panelViewHeight;
- (double)panelContentViewHeight;
- (void *)identifier;
- (id)panelName;
- (void)reportInspirationShow:(id)a0;
- (void)actionTapGesture:(id)a0;
- (void)handlePinchGesture:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)shootButtonClicked;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
