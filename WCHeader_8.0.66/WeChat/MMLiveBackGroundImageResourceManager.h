@class NSMutableDictionary, MMTimer, NSMutableSet, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MMLiveBackGroundImageResourceManager : MMUserService <MMLiveStorageCleanupExt, MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *backgroundImageCaches;
@property (retain, nonatomic) NSMutableSet *loadingSet;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue;
@property (retain, nonatomic) MMTimer *memoryCacheManagementTimer;
@property BOOL isLoadToDisk;
@property (retain, nonatomic) NSString *unarchivePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)cleanResourcesCaches;
- (id)getPixelBuffWithType:(unsigned long long)a0;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceMemoryWarning;
- (void)dealloc;
- (id)getBackgroundImagePath;
- (void)performRecurrentMemoryCacheManagement;
- (void)updateCachesWith:(id)a0 imageIdentifier:(id)a1;
- (void)loadBackgroundToDisk;
- (void)loadBackgroundToCache:(id)a0;
- (id)getImageIdentifier:(unsigned long long)a0;
- (void)willBeginStorageCleanupInScenario:(unsigned long long)a0 withContext:(id)a1;
- (void).cxx_destruct;

@end
