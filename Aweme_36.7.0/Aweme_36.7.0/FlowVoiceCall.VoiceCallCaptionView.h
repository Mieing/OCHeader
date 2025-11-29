@interface FlowVoiceCall.VoiceCallCaptionView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ throttler;
    void /* unknown type, empty encoding */ selectText;
    void /* unknown type, empty encoding */ menu;
    void /* unknown type, empty encoding */ lastPositionY;
    void /* unknown type, empty encoding */ clickFrom;
    void /* unknown type, empty encoding */ _imageTrackMap;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topMaskLayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topMaskView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomMaskLayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomMaskView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ dataSouce;
}

@property (nonatomic) double alpha;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;

@end
