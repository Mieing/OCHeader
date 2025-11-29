@class NSRecursiveLock, NSString, BDUGLuckyActivitySettingsConfig, NSMutableArray;

@interface BDUGLuckyActivityCommonSettingsHandler : NSObject <BDUGLuckySettingsObserver>

@property (retain, nonatomic) NSMutableArray *settingsInfoCompletionBlocks;
@property (retain, nonatomic) NSMutableArray *settingsObjectCompletionBlocks;
@property (retain, nonatomic) NSRecursiveLock *settingsInfoLock;
@property (retain, nonatomic) NSRecursiveLock *settingsObjectLock;
@property (nonatomic) BOOL settingsHasRequestBack;
@property (nonatomic) unsigned long long settingsType;
@property (nonatomic) BOOL isRequesting;
@property (retain, nonatomic) BDUGLuckyActivitySettingsConfig *config;
@property (nonatomic) double backToFrontTimeInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startWithConfig:(id)a0;
- (void)clearSettingsCache;
- (void)clearSettingsCacheInDisk;
- (void)notifySettingsInfoIfNeeded;
- (void)updateSettingsFromScene:(unsigned long long)a0 isForced:(BOOL)a1;
- (id)currentSettingsInfo;
- (id)__fetchSettingObjectsWithKeyPaths:(id)a0 settingsInfo:(id)a1;
- (BOOL)firstSettingsHasRequestBack;
- (void)fetchSettingsInfoWithCompletion:(id /* block */)a0;
- (id)currentSettingsRawData;
- (id)fetchSettingsObjectWithKeyPathString:(id)a0;
- (void)fetchSettingsObjectWithKeyPaths:(id)a0 completion:(id /* block */)a1;
- (void)updateSettingsWithVersion:(long long)a0;
- (long long)currentSettingsVersion;
- (void)recoverCacheSettingsInfo;
- (void)onReceiveScheduledSettingsUpdateEventWithSettingsType:(unsigned long long)a0;
- (void)onReceiveScheduledSettingsUpdateEventWithSettingsType:(unsigned long long)a0 scene:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (id)init;
- (void)stop;

@end
