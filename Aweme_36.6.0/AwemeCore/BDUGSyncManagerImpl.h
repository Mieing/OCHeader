@class NSString;

@interface BDUGSyncManagerImpl : NSObject <BDUGSyncImplProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)trySyncDataFromServer;
- (void)addObserverForBusinessID:(short)a0 usingBlock:(id /* block */)a1;
- (void)uploadSyncData:(id)a0 forBusinessID:(short)a1 forMessageID:(id)a2;
- (void)_startSimulateFourBusinessID;
- (void)registerWithConfig;
- (void)removeObserverForBusinessID:(short)a0;
- (void)uploadSyncDatas:(id)a0 forBusinessID:(short)a1;
- (void)triggerAccountStatusEventWithStatusImpl:(long long)a0;
- (void)uploadSyncData:(id)a0 forBusinessID:(short)a1;
- (id)init;
- (void)_startSync;

@end
