@class NSObject, NSString, NSMutableDictionary, NSNumber, IESLiveLinkmicSettingApi;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface IESLiveLinkmicSettingServiceImpl : NSObject <HTSLiveMessageSubscriber, IESLiveLinkmicSettingService>

@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSString *secUserID;
@property (retain, nonatomic) IESLiveLinkmicSettingApi *api;
@property (retain, nonatomic) NSMutableDictionary *settingMap;
@property (nonatomic) BOOL settingMapFetched;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem;
@property (retain, nonatomic) NSMutableDictionary *listenerMap;
@property (nonatomic) BOOL enableWrds;
@property (nonatomic) long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)getBoolValueWithKey:(int)a0 callback:(id /* block */)a1;
- (void)getIntValueWithKey:(int)a0 callback:(id /* block */)a1;
- (void)getAllKeyWithCallback:(id /* block */)a0;
- (void)getAllKeyWithCallback:(id /* block */)a0 end:(id /* block */)a1;
- (void)fetchSettingIfNeed:(id /* block */)a0;
- (BOOL)getLocalBool:(int)a0;
- (int)getLocalInt:(int)a0;
- (id)getLocalValue:(int)a0;
- (void)addListener:(id)a0 keys:(id)a1 callback:(id /* block */)a2;
- (void)addListenerForAllKeys:(id)a0 callback:(id /* block */)a1;
- (void)addListenerForAllKeys:(id)a0 callback:(id /* block */)a1 onceMessage:(id /* block */)a2;
- (void)updateSetting:(id)a0 extParams:(id)a1 callback:(id /* block */)a2;
- (void)fetchAudienceSettings:(id)a0 callback:(id /* block */)a1;
- (void)updateAudienceSettings:(int)a0 status:(int)a1 callback:(id /* block */)a2;
- (void)fetchSettingIgnoreCache:(id /* block */)a0;
- (void)setNeedUpdateCache;
- (void)addCacheWithKey:(int)a0 value:(BOOL)a1;
- (void)removeCacheWithKey:(int)a0;
- (void)fetchSettingByWrds:(id /* block */)a0;
- (void)fetchSettingByApi:(id /* block */)a0;
- (void)getLatestSettingsWithVersion:(long long)a0 completion:(id /* block */)a1;
- (void)fixFetchSettingResponse:(id)a0;
- (id)genSetting:(int)a0 value:(BOOL)a1;
- (void)fetchSettingsSyncIfNeed:(id /* block */)a0;
- (void)removeListener:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)messageReceived:(id)a0;
- (id)ownerID;
- (void)sendNotify:(id)a0;

@end
