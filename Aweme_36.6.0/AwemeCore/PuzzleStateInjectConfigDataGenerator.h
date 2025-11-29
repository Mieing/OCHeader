@class NSCache;

@interface PuzzleStateInjectConfigDataGenerator : NSObject

@property (retain, nonatomic) NSCache *configCache;
@property (retain, nonatomic) NSCache *templateDataCache;

+ (id)stateGlobalPropWith:(id)a0 routerParams:(id)a1 context:(id)a2 stateCenter:(id)a3;
+ (id)sharedManager;

- (id)stateGlobalPropWith:(id)a0 routerParams:(id)a1 context:(id)a2 stateCenter:(id)a3;
- (void)appDidReceiveMemoryWarningNotification;
- (id)channelWith:(id)a0 routerParams:(id)a1;
- (BOOL)hasInjectConfigWith:(id)a0 routerParams:(id)a1;
- (void)reportSlardarWith:(id)a0 context:(id)a1 url:(id)a2;
- (void)logMessage:(id)a0 context:(id)a1;
- (id)findCurrentPrefetchDataWith:(id)a0;
- (id)isDisablePrefetch:(id)a0 routerParams:(id)a1;
- (id)isDisableStorage:(id)a0 routerParams:(id)a1;
- (id)findCurrentStorageDataWithConfig:(id)a0 url:(id)a1 routerParams:(id)a2 stateCenter:(id)a3;
- (id)findPuzzleStateDataWith:(id)a0 routerParams:(id)a1 stateCenter:(id)a2;
- (void)configTemplateDataIfNeed:(id)a0 channel:(id)a1 context:(id)a2;
- (id)findStorageKeysWithConfig:(id)a0 url:(id)a1 routerParams:(id)a2;
- (id)findPuzzleStateKeysWith:(id)a0 routerParams:(id)a1;
- (id)findInjectConfigWith:(id)a0 routerParams:(id)a1;
- (id)parseDynamicStorageKey:(id)a0 url:(id)a1 routerParams:(id)a2;
- (id)scenceWith:(id)a0 routerParams:(id)a1;
- (id)injectFullConfigWith:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
