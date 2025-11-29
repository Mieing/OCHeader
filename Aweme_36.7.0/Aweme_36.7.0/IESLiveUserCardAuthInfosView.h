@class IESLiveCollectionViewLeftAlignedLayout, NSString, UICollectionView, IESLiveUserCardStore, NSMutableArray;

@interface IESLiveUserCardAuthInfosView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) IESLiveUserCardStore *store;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IESLiveCollectionViewLeftAlignedLayout *flowLayout;
@property (retain, nonatomic) NSMutableArray *profileTagContentArray;
@property (nonatomic) double contentHeight;
@property (retain, nonatomic) NSMutableArray *subTagViews;
@property (retain, nonatomic) NSMutableArray *itemList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadSubTags;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithStore:(id)a0;

@end
