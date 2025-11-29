@interface AWERelatedRecommendImpl.RelatedRecommendTopChapterElement : AWERelatedRecommendTopBaseElement <AWEChapterCatalogPanelDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UICollectionViewDataSource> {
    void /* unknown type, empty encoding */ selectedIndex;
    void /* unknown type, empty encoding */ enterTime;
    void /* unknown type, empty encoding */ isDragging;
    void /* unknown type, empty encoding */ seekingToTime;
    void /* unknown type, empty encoding */ $__lazy_storage_$_chapterList;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_allButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_gradientView;
}

@property (class, nonatomic, readonly) long long type;

@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) double bottomSpacing;

- (id)getCurrentPlayedTime;
- (void)jumpToSelectedChapter:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)horizontalGestureRecognizers;
- (void)handleClickedChapterAllButton;
- (void).cxx_destruct;
- (BOOL)validate;
- (id)init;
- (id)initWithDataModel:(id)a0;

@end
