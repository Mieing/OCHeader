@class IESLiveKTVOrderPanelSearchSectionModel, UICollectionView, IESLiveKTVSearchSectionItem, NSString, NSMutableArray;

@interface IESLiveKTVHistoryAndHotView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) IESLiveKTVOrderPanelSearchSectionModel *model;
@property (retain, nonatomic) IESLiveKTVSearchSectionItem *historySection;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long scaleRatio;
@property (copy, nonatomic) id /* block */ selectedActionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_loadData;
- (id)savedHistoryKey;
- (id)createHistorySection;
- (id)p_historyData;
- (void)removeHistory:(id)a0;
- (void)tr_ClickedHotSearchEventWith:(id)a0 isHistory:(BOOL)a1;
- (void)refreshHistoryList;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)addHistory:(id)a0;

@end
