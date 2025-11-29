@class NSString, FinderSideBarRelatedLivePrepareInfo, UICollectionView, MMLiveTaskId, FinderJumpInfo, NSMutableArray, NSData;
@protocol MMLivePreviewRelatedViewModelDelegate;

@interface MMLivePreviewRelatedViewModel : NSObject <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (nonatomic) unsigned long long maxPreviewPlayConcurrency;
@property (retain, nonatomic) NSMutableArray *visiblePreviewCellIndices;
@property (weak, nonatomic) id<MMLivePreviewRelatedViewModelDelegate> vmDelegate;
@property (nonatomic) long long viewModelId;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSMutableArray *specialLiveContentVMList;
@property (retain, nonatomic) NSMutableArray *relatedItemControllers;
@property (retain, nonatomic) NSMutableArray *displayPRContentVMs;
@property (retain, nonatomic) FinderSideBarRelatedLivePrepareInfo *sideBarPrepareInfo;
@property (nonatomic) long long normalStateIndex;
@property (nonatomic) unsigned long long currentPlayingIndex;
@property (retain, nonatomic) FinderJumpInfo *bannerInfo;
@property (retain, nonatomic) NSData *preivewRelatedLastBuffer;
@property (nonatomic) unsigned int activityId;
@property (nonatomic) unsigned long long enterTime;
@property (nonatomic) unsigned long long initialLiveId;
@property (nonatomic) BOOL isFetchingNextPage;
@property (nonatomic) BOOL isStarted;
@property (nonatomic) BOOL isPreviewRelatedLiveState;
@property (nonatomic) BOOL isInClickScrollingAnimation;
@property (nonatomic) BOOL needChangeIndexOnUpdate;
@property (nonatomic) BOOL nextEnterLiveReportWithClick;
@property (nonatomic) BOOL nextScrollLiveWithClick;
@property (nonatomic) BOOL needReportOnDisplay;
@property (nonatomic) BOOL isDataItemsRemoving;
@property (nonatomic) BOOL isDataItemsAppending;
@property (nonatomic) BOOL isDataItemsPrepending;
@property (nonatomic) BOOL isDataItemsPrependSettingOffset;
@property (nonatomic) BOOL isDataItemsReplacing;
@property (retain, nonatomic) NSData *initialFetchLastBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)OnReloadData;
- (void)cleanBannerInfos;
- (void)updateEnterTime;
- (void)adjustCollectionViewContentOffsetWithIndex:(long long)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (void)reportOnDisplayWithType:(unsigned long long)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (unsigned long long)addVisiblePreviewCellIndex:(long long)a0;
- (void)updatePlayingPreviewCellsForCollectionView:(id)a0;
- (void).cxx_destruct;

@end
