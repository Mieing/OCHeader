@class NSString, NSMutableDictionary, AWEIronManLandingPageDataController, NSDictionary, NSArray, UIViewController;

@interface AWEIronManLandingPageRecentlyUsedViewModel : MTLModel <MTLJSONSerializing, AWEIronManLandingPagePreloadProtocol, AWEIronManLandingPageViewModelProtocol, AWEIronManLandingPageInteractiveProtocol, AWEIronManLandingPageDetailPageViewModelProtocol, AWEIronManLandingPageTrackerViewModelProtocol, AWEIronManLandingPageCloudGameViewModelProtocol>

@property (retain, nonatomic) NSMutableDictionary *trackStatus;
@property (retain, nonatomic) AWEIronManLandingPageDataController *dataVc;
@property (nonatomic) BOOL firstFetchFinshed;
@property (nonatomic) long long refreshCount;
@property (nonatomic) long long vmLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long maxPreloadLimit;
@property (nonatomic) unsigned long long uiVersion;
@property (nonatomic) unsigned long long enterFrom;
@property (copy, nonatomic) NSDictionary *bdpExtra;
@property (copy, nonatomic) NSDictionary *commonRequestParamDict;
@property (nonatomic) unsigned long long section;
@property (retain, nonatomic) NSArray *modelList;
@property (weak, nonatomic) UIViewController *containerVC;
@property BOOL isFetching;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) unsigned long long originalOffset;
@property (copy, nonatomic) NSDictionary *commonTrackDict;
@property (nonatomic) BOOL cloudGameHasMore;
@property (nonatomic) unsigned long long originalCloudGameOffset;

+ (id)modelListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)didReceivedUserAction:(unsigned long long)a0 itemModel:(id)a1;
- (void)preloadItemIfNeed:(id)a0 index:(long long)a1;
- (void)trackEvent:(id)a0 atIndex:(unsigned long long)a1 params:(id)a2;
- (void)removeCollectionNoti:(id)a0;
- (void)fetchMore:(unsigned long long)a0;
- (void)refreshDataWithCount:(unsigned long long)a0;
- (id)eventStatusKeyAtIndex:(unsigned long long)a0 event:(id)a1;
- (void)deleteRecentlyUsedNoti:(id)a0;
- (void)deleteRecentlyUseActionWithItemModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addObserver;
- (void)dealloc;

@end
