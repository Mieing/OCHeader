@class NSString, NSDictionary, AWEAwemeModel, UICollectionView;

@interface AWESearchAdImagesSliderView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, AWESearchAdNewAlbumViewProtocol>

@property (retain, nonatomic) NSDictionary *sensitivityConfig;
@property (nonatomic) BOOL triggerDraggingEnable;
@property (nonatomic) double triggerOffset;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) struct CGSize { double width; double height; } footViewSize;
@property (nonatomic) BOOL isLoadMore;
@property (nonatomic) BOOL horizontalPreloadEnable;
@property (copy, nonatomic) id /* block */ albumTappedWithIndex;
@property (copy, nonatomic) id /* block */ albumSliderCheckMore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithAwemeModel:(id)a0;
- (void)sliderCheckMore;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)setupSubviews;

@end
