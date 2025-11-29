@class NSString, BDPUniqueID, BDPTradeCommentModel;

@interface BDPTradeCommentCenter : NSObject <BDPContainerLifeCycleMessage>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPTradeCommentModel *cache;
@property (nonatomic) double lastRequestTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCenter;

- (void)applicationExitWithUniqueID:(id)a0;
- (void)getCanCommentDataForApp:(id)a0 completion:(id /* block */)a1;
- (void)openTradeCommentPage:(id)a0 source:(id)a1 uniqueID:(id)a2;
- (void)openTradeListPage:(id)a0 source:(id)a1 uniqueID:(id)a2;
- (void)getTradeCommentModelForApp:(id)a0 completion:(id /* block */)a1;
- (BOOL)canCommentNow;
- (void)requestCanCommentDataForApp:(id)a0 completion:(id /* block */)a1;
- (void)requestTradeCommentModelForApp:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)stayDurationFromNowOn;
- (void)requestWithUniqueID:(id)a0 urlString:(id)a1 completion:(id /* block */)a2;
- (void)openLynxPage:(id)a0 param:(id)a1 source:(id)a2 uniqueID:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (void)addObserver;

@end
