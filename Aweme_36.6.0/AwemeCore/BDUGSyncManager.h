@class NSMutableDictionary, NSString, NSMutableSet, NSObject, BDUGSyncConfig;
@protocol BDUGSyncPatchProtocol, BDUGSyncImplProtocol, BDUGSyncHistoryLogProtocol, OS_dispatch_queue;

@interface BDUGSyncManager : NSObject <BDUGAccountEventProtocol>

@property (retain, nonatomic) id<BDUGSyncImplProtocol> implManager;
@property (retain, nonatomic) BDUGSyncConfig *config;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSMutableDictionary *observers;
@property (retain, nonatomic) NSMutableDictionary *interceptors;
@property (nonatomic) BOOL isSync;
@property (nonatomic) BOOL isDBUpgradeSuccess;
@property (nonatomic) BOOL previousSyncByHttp;
@property (readonly, nonatomic) NSMutableSet *historyFileStorage;
@property (nonatomic) BOOL pollByFrontier;
@property (nonatomic) BOOL pollServerReceived;
@property (readonly, copy, nonatomic) NSString *sdkVersion;
@property (readonly, copy, nonatomic) NSString *sdkVersionNumber;
@property (nonatomic) BOOL isSyncAvailable;
@property (weak, nonatomic) id<BDUGSyncPatchProtocol> patchDelegate;
@property (weak, nonatomic) id<BDUGSyncHistoryLogProtocol> historyLogDelegate;
@property (nonatomic) BOOL previousStartPollByHttp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)triggerAccountStatusEventWithStatus:(long long)a0;
+ (id)sharedManager;

- (void)trySyncDataFromServer;
- (void)addObserverForBusinessID:(short)a0 usingBlock:(id /* block */)a1;
- (void)registerWithConfig:(id)a0;
- (id)getHistorySynclogWithConfig:(id)a0;
- (void)addInterceptor:(id /* block */)a0 forBusiness:(long long)a1;
- (void)subscribeTopic:(id)a0 businessID:(int)a1 completion:(id /* block */)a2;
- (void)unsubscribeTopic:(id)a0 businessID:(int)a1 completion:(id /* block */)a2;
- (void)uploadSyncData:(id)a0 forBusinessID:(short)a1 forMessageID:(id)a2;
- (void)removeObserverForBusinessID:(short)a0;
- (void)uploadSyncDatas:(id)a0 forBusinessID:(short)a1;
- (void)uploadSyncData:(id)a0 forBusinessID:(short)a1;
- (void).cxx_destruct;
- (id)init;

@end
