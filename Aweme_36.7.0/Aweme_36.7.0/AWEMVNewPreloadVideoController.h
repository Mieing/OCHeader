@class AWEMVNewPreloadVideoManager, AWEMVChannelPageContext, NSString, NSMutableArray;

@interface AWEMVNewPreloadVideoController : AWEDCFeedBaseController <AWEMVDataPluginProtocol, AWEMVPreloadVideoControllerProtocol>

@property (retain, nonatomic) AWEMVNewPreloadVideoManager *preloadManager;
@property (nonatomic) BOOL alreadyCancelPreloadOnClick;
@property (nonatomic) BOOL isViewDisappeared;
@property (nonatomic) BOOL isResignActive;
@property (retain, nonatomic) NSMutableArray *largeCardModelList;
@property (nonatomic) BOOL firstInstallStrategy;
@property (weak, nonatomic) AWEMVChannelPageContext *bizContext;
@property (weak, nonatomic) AWEMVChannelPageContext *mvContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;

- (void)sectionControllerWillEnterWorkingRange:(id)a0;
- (void)detailTableViewControllerDidDisappear:(id)a0 currentAwemeModel:(id)a1;
- (void)containerScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)containerScrollViewDidEndDecelerating:(id)a0;
- (void)containerScrollViewDidEndScrollingAnimation:(id)a0;
- (void)containerScrollViewWillBeginDragging:(id)a0;
- (void)containerViewWillAppear:(BOOL)a0;
- (void)containerViewWillDisappear:(BOOL)a0;
- (void)containerViewDidDisappear:(BOOL)a0;
- (void)containerCollectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)containerCollectionView:(id)a0 startDidSelectItemAtIndexPath:(id)a1;
- (void)onFetchListDataStartWithReason:(unsigned long long)a0;
- (void)onFetchListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void)onGeneralActionTriggeredWithType:(unsigned long long)a0 sender:(id)a1 params:(id)a2 sectionViewModel:(id)a3;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (void)preloadVideos:(id)a0;
- (void)tidyDidUpdateToFullModel:(id)a0 context:(id)a1 error:(id)a2;
- (void)channelVideoViewController:(id)a0 awemeModel:(id)a1 didChangePlaybackToAction:(long long)a2;
- (double)calculateJointPercentFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)tryPrefetchVideos:(id)a0;
- (id)preloadConfigs;
- (void)preloadLargeCardVideos;
- (void)preloadSmallCardVideos;
- (void)cancelSmallCardVideoPreloadIfNeed;
- (void)clearLargeCardPreloadSet;
- (void)addLargeCard:(id)a0;
- (void)executePreloadSmallCardVideo;
- (void)removeLargeCard:(id)a0;
- (long long)preloadLargeCardMaxCount;
- (long long)preloadListMaxCount;
- (double)smallCardDelaySecond;
- (double)smallCardVisibleRatio;
- (BOOL)needImageLoadDone;
- (BOOL)filterVisibleCell:(id)a0 visibleRatio:(double)a1;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)containerViewDidLoad;

@end
