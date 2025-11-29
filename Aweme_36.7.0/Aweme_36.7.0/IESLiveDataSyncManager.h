@class NSString, NSMutableDictionary;
@protocol IESLiveIMMessageReciever;

@interface IESLiveDataSyncManager : NSObject <IESLiveWRDSMessageSubscriber, IESLiveDataSyncService>

@property (retain, nonatomic) NSMutableDictionary *roomDataDic;
@property (retain, nonatomic) NSMutableDictionary *subscriberDic;
@property (retain, nonatomic) NSMutableDictionary *allowList;
@property (retain, nonatomic) id<IESLiveIMMessageReciever> receiver;
@property (nonatomic) double waitTimeMS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) Class syncDataClass;
@property (copy, nonatomic) id /* block */ dataSyncModelCreateBlock;

- (void)addSubscriber:(id)a0 withSyncData:(Class)a1;
- (void)addSubscriber:(id)a0 withSyncDatas:(id)a1;
- (void)getValueWithSyncData:(Class)a0 completion:(id /* block */)a1;
- (void)getValueWithSyncData:(Class)a0 expectedMinVersion:(long long)a1 completion:(id /* block */)a2;
- (void)getMessage:(Class)a0 withSubkey:(id)a1 completion:(id /* block */)a2;
- (void)getMessage:(Class)a0 withRoomId:(id)a1 subkey:(id)a2 completion:(id /* block */)a3;
- (id)heartbeatPacket;
- (void)cleanCaches;
- (void)setupLiveDataSyncInfo;
- (id)storedKey:(id)a0;
- (void)logWith:(id)a0 params:(id)a1;
- (void)runOnMainQueue:(id /* block */)a0;
- (id)createRoomDataSyncModelWith:(id)a0;
- (void)handleWRDSMessage:(id)a0;
- (id)parseMessageData:(id)a0 forKey:(id)a1;
- (void)subscribedKeyUpdated:(id)a0 value:(id)a1 old:(long long)a2 new:(long long)a3;
- (id)parseSyncKeyFromStoreKey:(id)a0;
- (Class)messageClassFromSyncKey:(id)a0;
- (void)handleUpdateSubscriberCallbackWithClass:(Class)a0 subscriber:(id)a1 storeKey:(id)a2 value:(id)a3 oldVersion:(long long)a4 newVersion:(long long)a5;
- (id)getAllowListSyncDataKeyIfNeed:(id)a0;
- (id)getAllowListMessageStr:(id)a0;
- (void)handleAddSubscriberCallbackWithClass:(Class)a0 subscriber:(id)a1 syncKey:(id)a2 storeKey:(id)a3 cacheModel:(id)a4;
- (id)getSyncDataKeyFromClass:(Class)a0;
- (void)addSubscriber:(id)a0 withKey:(id)a1;
- (void)getValueWithKey:(id)a0 expectedMinVersion:(long long)a1 completion:(id /* block */)a2;
- (id)storedKeyWith:(Class)a0 subkey:(id)a1;
- (id)p_createHeartbeatItemWithKey:(id)a0;
- (BOOL)shouldReceiveMessage:(id)a0;
- (void)addRoomPreloadData:(id)a0 withRoom:(id)a1;
- (void)removeRoomPreloadDataNotInArray:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setup;
- (void)messageReceived:(id)a0;

@end
