@class NSString, IESLiveBeautyCommonDetailViewConfig, UICollectionView;
@protocol IESLiveBeautyCommonDetailViewDelegate, IESLiveBeautyDetailCommonViewDataSource;

@interface IESLiveBeautyCommonDetailViewV2 : UIView <UICollectionViewDelegate, UICollectionViewDataSource, IESLiveBeautyCommonDetailViewProtocol>

@property (retain, nonatomic) UICollectionView *itemCollectionView;
@property (retain, nonatomic) IESLiveBeautyCommonDetailViewConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLiveBeautyDetailCommonViewDataSource> dataSource;
@property (weak, nonatomic) id<IESLiveBeautyCommonDetailViewDelegate> delegate;

- (void)updateIndex:(long long)a0 subIndex:(long long)a1 item:(id)a2;
- (void)startDownloadAnimation:(long long)a0 subIndex:(long long)a1;
- (void)updateDownloadingProgress:(double)a0 index:(long long)a1 subIndex:(long long)a2;
- (void)endDownloadAnimation:(long long)a0 subIndex:(long long)a1;
- (void)scrollToIndex:(long long)a0 subIndex:(long long)a1;
- (void)configContentCollectionView;
- (BOOL)checkValidIndex:(long long)a0 subIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)reload;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithConfig:(id)a0;
- (void)performBatchUpdates:(id /* block */)a0 completion:(id /* block */)a1;
- (void)reloadSection:(long long)a0;

@end
