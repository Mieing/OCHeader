@class NSArray, NSString;
@protocol ACCSideslipPropPanelDownloadService, ACCSideslipPropPanelService, ACCSideslipPropService, IESServiceProvider;

@interface ACCSideslipPropPanelPrefetchServiceImpl : NSObject <ACCSideslipPropPanelPrefetchService>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (weak, nonatomic) id<ACCSideslipPropPanelDownloadService> sideslipDownloadService;
@property (nonatomic) long long prefetchFocusIndex;
@property (retain, nonatomic) NSArray *prefetchDataList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prefetchIconsWithIndexesIfNeeded:(id)a0;
- (void)prefetchFocusIndex:(long long)a0 secondaryIndexes:(id)a1;
- (BOOL)collectionPrefetchDataWithFocusIndex:(long long)a0 secondaryIndexes:(id)a1;
- (void)startPrefetch;
- (void)prefetchStrategyConfig;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;

@end
