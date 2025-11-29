@class AWEIMShareContactListTrackInfo, AWEIMShareContactListConfig;

@interface AWEIMShareImpl.ShareContactListView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, AWEIMShareContactListProtocol> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ additionTextView;
}

@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly) AWEIMShareContactListTrackInfo *trackInfo;
@property (nonatomic, readonly) AWEIMShareContactListConfig *config;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)updateAdditionTextPreviewImage;
- (void)handleTapOutsideOfPanel;
- (void)openMorePanelWithPosition:(unsigned long long)a0 directShowKeyboard:(BOOL)a1;
- (BOOL)isInFirstScreenForIndex:(long long)a0;
- (id)interactingGestures;
- (void)updateSelectState:(BOOL)a0 withShareModel:(id)a1;
- (id)verticalScrollView;
- (double)height;
- (id)listView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;

@end
