@class AWESearchHomeDCFeedRouterService, AWESearchHomeDCFeedTransitionService, AWEDCFeedConfig, AWEDCFeedPageContext, NSPointerArray, NSString, AWESearchHomeDCFeedTrackController;
@protocol AWEDCFeedEventDispatcherProtocol, AWEDCFeedTidyModelOuterDataControllerProtocol, AWEDCFeedEventDispatcherRegisterProtocol;

@interface AWESearchHomeDCFeedCellHandler : NSObject

@property (retain, nonatomic) AWEDCFeedPageContext *feedContext;
@property (retain, nonatomic) AWEDCFeedConfig *feedConfig;
@property (retain, nonatomic) id<AWEDCFeedEventDispatcherProtocol, AWEDCFeedEventDispatcherRegisterProtocol> eventDispatcher;
@property (retain, nonatomic) AWESearchHomeDCFeedRouterService *routerService;
@property (retain, nonatomic) AWESearchHomeDCFeedTransitionService *transitionService;
@property (retain, nonatomic) id<AWEDCFeedTidyModelOuterDataControllerProtocol> tidyOuterDataController;
@property (retain, nonatomic) NSPointerArray *delegateList;
@property (copy, nonatomic) NSString *placeholderImageCacheKey;
@property (weak, nonatomic) AWESearchHomeDCFeedTrackController *feedTrackerController;

+ (id)getCurrentImageCacheKeyWithBusinessID:(id)a0 distinguishUser:(BOOL)a1;
+ (void)registerPlaceholderImageCacheWithBusinessID:(id)a0 distinguishUser:(BOOL)a1 cacheCount:(long long)a2 diskSizeLimit:(long long)a3;
+ (void)storePlaceholderImageToDiskForModels:(id)a0;
+ (id)getPlaceholderImageCacheConfigWithCacheCount:(long long)a0 diskSizeLimit:(long long)a1;
+ (id)generateCacheKeyWithPrefix:(id)a0 businessID:(id)a1 distinguishUser:(BOOL)a2;
+ (id)getCurrentUserID;
+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (Class)aAWEFeedModuleServiceDOUYINSSAdapterClass;
+ (Class)aAWEStudioDOUYINSSAdapterClass;
+ (void)savePlaceholderImagesWithAwemes:(id)a0;
+ (id)shareInstance;

- (id)referString;
- (void)registerEventObservers:(id)a0;
- (BOOL)enableTextIcon;
- (void)configBasicManager;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (id)aAWEFeedModuleServiceDOUYINSSAdapter;
- (id)aAWEStudioDOUYINSSAdapter;
- (void)longPressDislikeCell:(id)a0 viewModel:(id)a1 location:(struct CGPoint { double x0; double x1; })a2 containerVC:(id)a3;
- (void)setServerClientExtra:(id)a0;
- (void)clickCell:(id)a0 viewModel:(id)a1 containerVC:(id)a2 placeholderImage:(id)a3;
- (BOOL)enableNewRefreshTipsModules;
- (long long)defaultImageGenreResourceType;
- (BOOL)enableLivePhotoRightTopIconFix;
- (BOOL)enableTextRightTopIconFix;
- (id)indexPathOfAwemeModel:(id)a0;
- (long long)clientRankOfAwemeModel:(id)a0;
- (id)createFeedConfig;
- (void)removeCard:(id)a0;
- (void)callDelegateClickCell:(id)a0 viewModel:(id)a1 containerVC:(id)a2;
- (void)callDelegateClickCellAfter:(id)a0 viewModel:(id)a1 containerVC:(id)a2;
- (void)cellDidClickCellAfter:(id)a0 viewModel:(id)a1 containerVC:(id)a2;
- (void)setTodayColdLaunchTimes:(long long)a0;
- (void)setNewUserStage:(long long)a0;
- (id)getHotItemIds;
- (void)clearHottedItemIds;
- (void)createDCFeedContext;
- (void)setSearchSessionIdV2:(id)a0;
- (void)addDelegate:(id)a0;
- (void).cxx_destruct;

@end
