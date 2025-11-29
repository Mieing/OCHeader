@class WCFinderLiveHomePageReportSession, MMFinderLiveFeedExtraInfoFetchLogic, NSArray, WCFinderLiveHomePageViewController, WCFinderLiveStreamContainerModel, NSMutableArray, WCFinderLiveHomePageCtx;
@protocol WCFinderLiveHomePageSectionViewModelDelegate;

@interface WCFinderLiveHomePageSectionViewModel : NSObject

@property (nonatomic) int scene;
@property (retain, nonatomic) NSMutableArray *feedVMs;
@property (retain, nonatomic) WCFinderLiveHomePageCtx *ctx;
@property (nonatomic) BOOL isSkeleton;
@property (nonatomic) BOOL isFold;
@property (weak, nonatomic) id<WCFinderLiveHomePageSectionViewModelDelegate> delegate;
@property (weak, nonatomic) WCFinderLiveHomePageViewController *homePageVC;
@property (retain, nonatomic) WCFinderLiveStreamContainerModel *containerModel;
@property (retain, nonatomic) WCFinderLiveHomePageReportSession *reportSession;
@property (retain, nonatomic) MMFinderLiveFeedExtraInfoFetchLogic *extraFetchLogic;
@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) id /* block */ onFooterStateDidChange;
@property (nonatomic) BOOL skipAsyncLoadLiveInfo;
@property (nonatomic) unsigned long long sectionIndex;
@property (readonly, nonatomic) NSArray *collectionDataModels;
@property (readonly, nonatomic) NSArray *autoPlayingFeedVMs;
@property (readonly, nonatomic) unsigned long long curTabId;
@property (readonly, nonatomic) unsigned long long curSubTabId;
@property (readonly, nonatomic) unsigned long long totalUnFoldCount;

- (id)initWithContainerModel:(id)a0 scene:(int)a1 ctx:(id)a2 isSkeleton:(BOOL)a3;
- (id)createFeedVMWithModel:(id)a0 isSkeleton:(BOOL)a1;
- (void)appendElementModels:(id)a0;
- (void)insertElementModels:(id)a0 atIndex:(unsigned long long)a1;
- (id)containerReadIds;
- (id)containerContext:(unsigned long long)a0 tabInfo:(id)a1;
- (BOOL)isSectionCustomHeaderView;
- (BOOL)isSectionCustomHeaderShowIcon;
- (BOOL)isSectionSupportAutoPlay;
- (void)cancelSectionCgi;
- (void)removeDataWithTid:(id)a0;
- (BOOL)removeDataWithFeed:(id)a0;
- (unsigned long long)indexOfTid:(id)a0;
- (unsigned long long)indexOfFeed:(id)a0;
- (void)reportSectionOnDisAppear;
- (void)resetExposeSession;
- (void)preloadCoversIfNeeded:(id)a0;
- (id)calculateNavRespShouldPreloadCoverItems:(id)a0;
- (void)reportHeaderExpose;
- (void)onHomePageContainerSectionRefreshAllData:(id)a0;
- (void)onHomePageContainerSectionFetchFailWithErroCode:(long long)a0;
- (void)onHomePageContainerSectionNoMoreData;
- (void)onHomePageContainerSectionFetchNextPageData:(id)a0;
- (void)onHomePageResetState;
- (void)onHomePageContainerSectionDeleteTid:(id)a0;
- (void)makeBottomSkeletonData;
- (unsigned long long)numberOfSkeletonItems;
- (id)removeSkeletonDatas;
- (void)updateFold:(BOOL)a0;
- (void)toggleFold;
- (void)expandAction;
- (void).cxx_destruct;

@end
