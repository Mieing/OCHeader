@class NSString, FlutterEngineGroup, FlutterHostEvent, NSArray, EngineGroupMemReporter, MMFlutterEngine, NSObject, NSMutableArray, FlutterMemoryPlugin, NSMapTable;
@protocol OS_dispatch_queue;

@interface MMFlutterEngineGroup : NSObject <IMMLanguageMgrExt> {
    NSString *_engineGroupId;
}

@property (retain, nonatomic) EngineGroupMemReporter *memReporter;
@property (retain, nonatomic) NSString *plugin;
@property (retain, nonatomic) FlutterEngineGroup *flutterEngineGroup;
@property (retain, nonatomic) MMFlutterEngine *rootEngine;
@property (nonatomic) BOOL needReportRootEngineInfo;
@property (nonatomic) int allEngineCount;
@property (nonatomic) long long createTime;
@property (nonatomic) BOOL isInUse;
@property (retain, nonatomic) FlutterHostEvent *hostEvent;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *engineDestroyQueue;
@property (retain, nonatomic) NSMapTable *cachedEngines;
@property (retain, nonatomic) NSMutableArray *externalEngines;
@property (nonatomic) unsigned long long groupUserCount;
@property (retain, nonatomic) NSString *subEngineKey;
@property (retain, nonatomic) FlutterMemoryPlugin *memoryPlugin;
@property (readonly, nonatomic) NSString *engineGroupId;
@property (readonly, nonatomic) int liveEngineCount;
@property (copy, nonatomic) id /* block */ engineCountChangeCallback;
@property (readonly, nonatomic) NSArray *liveEngineRoute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultGroup;
+ (int)createdEngineGroupCount;
+ (int)createdEngineCount;
+ (int)createdExternalEngineCount;

- (id)initWithPlugin:(id)a0 sharedIsolateMode:(BOOL)a1;
- (id)initWithPlugin:(id)a0 rootEngineRoute:(id)a1 rootEngineParams:(id)a2 sharedIsolateMode:(BOOL)a3 rootEnginePlugins:(id)a4;
- (void)releaseEngineGroupImpl;
- (void)dealloc;
- (void)releaseEngineGroup;
- (void)increaseGroupUserCount;
- (void)decreaseGroupUserCount;
- (void)updateFlutterUIContext;
- (void)onAccountLogout;
- (void)reportRootEngineInfo;
- (id)createEngine:(id)a0;
- (id)makeEngineWithEntrypoint:(id)a0 libraryURI:(id)a1 initialRoute:(id)a2 entrypointArgs:(id)a3;
- (id)makeEngineWithEntrypoint:(id)a0 libraryURI:(id)a1 initialRoute:(id)a2 entrypointArgs:(id)a3 sharedIsolateMode:(BOOL)a4;
- (id)makeEngineWithOptions:(id)a0;
- (void)onLanguageChange;
- (void)applyDarkMode:(id)a0;
- (void)setupFlutterEngine:(id)a0 route:(id)a1;
- (void)setupRootEngine:(id)a0;
- (void)registerBasicPlugins:(id)a0;
- (void)registerLiteAppPlugins:(id)a0;
- (void)onEngineDestroy:(id)a0;
- (void)onExternalEngineDestroy:(id)a0;
- (void)sendCountCallback;
- (void)freeResourcesAggressive;
- (void)afterFreeMem;
- (void).cxx_destruct;

@end
