@class NSString, NSMutableArray, AWEMVChannelDataController;

@interface AWEMVChannelLandscapeInnerCacheManager : NSObject <AWEMVChannelInnerCacheManagerProtocol>

@property (retain, nonatomic) NSMutableArray *landscapeAwemeCache;
@property (retain, nonatomic) AWEMVChannelDataController *landscapePreloadDataController;
@property (nonatomic) BOOL isLandscapePreloading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)updateAwemeListWhenExitLandscape;
- (void)removeLandscapeAweme:(id)a0;
- (id)awemeListForLandscape;
- (void)appendLandscapeAwemeList:(id)a0;
- (void)removeLandscapeAll;
- (void)preloadDataBeforeEnterLandscapeInflowIfNeededWithModel:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end
