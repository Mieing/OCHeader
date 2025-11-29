@class NSString;
@protocol IESLiveIMMessageReciever;

@interface IESLiveChannelDataSyncManager : IESLiveDataSyncManager <IESLiveChannelDataSyncService>

@property (readonly, nonatomic) id<IESLiveIMMessageReciever> receiver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)heartbeatPacket;
- (void)addSubscriber:(id)a0 withSyncData:(Class)a1 forChannel:(id)a2;
- (void)addSubscriber:(id)a0 withSyncDatas:(id)a1 forChannel:(id)a2;
- (void)getValueWithSyncData:(Class)a0 forChannel:(id)a1 completion:(id /* block */)a2;
- (void)getValueWithSyncData:(Class)a0 forChannel:(id)a1 expectedMinVersion:(long long)a2 completion:(id /* block */)a3;
- (id)storedKey:(id)a0;
- (id)createRoomDataSyncModelWith:(id)a0;
- (id)parseSyncKeyFromStoreKey:(id)a0;
- (void)handleUpdateSubscriberCallbackWithClass:(Class)a0 subscriber:(id)a1 storeKey:(id)a2 value:(id)a3 oldVersion:(long long)a4 newVersion:(long long)a5;
- (void)handleAddSubscriberCallbackWithClass:(Class)a0 subscriber:(id)a1 syncKey:(id)a2 storeKey:(id)a3 cacheModel:(id)a4;
- (id)channelStoreKey:(id)a0 channelID:(id)a1;
- (id)parseChannelIDFromStoreKey:(id)a0;

@end
