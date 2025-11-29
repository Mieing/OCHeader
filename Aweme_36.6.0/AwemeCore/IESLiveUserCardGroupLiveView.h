@class NSString, UICollectionView, IESLiveUserCardStore, IESLiveGroupLiveBanner;

@interface IESLiveUserCardGroupLiveView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, IESLiveUserCardHonorWallViewProtocol>

@property (retain, nonatomic) IESLiveGroupLiveBanner *groupData;
@property (retain, nonatomic) UICollectionView *list;
@property (retain, nonatomic) IESLiveUserCardStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)gradientColors;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithStore:(id)a0;
- (void)setupUI;

@end
