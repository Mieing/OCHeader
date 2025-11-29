@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, IESLiveRevenueInteractModule, IESLiveRoomService;

@interface IESLiveRebornGiftAnimationQueue : NSObject <IESLiveRebornGiftQueueProtocol>

@property (copy, nonatomic) id /* block */ next;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSMutableArray *assetArray;
@property (retain, nonatomic) NSMutableArray *localArray;
@property (retain, nonatomic) NSMutableArray *functionalArray;
@property (retain, nonatomic) NSMutableArray *array;
@property (nonatomic) BOOL enableAggregateBigGiftTray;
@property (retain, nonatomic) id<IESLiveRevenueInteractModule> revenueInteractModule;
@property (nonatomic) long long maxLimitCount;
@property (nonatomic) BOOL enableQueueOptimize;
@property (nonatomic) BOOL trayGroupModeServerControl;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enqueueWithNode:(id)a0;
- (void)dequeueWithCompletion:(id /* block */)a0;
- (void)loopNext;
- (void)getGiftQueueTaskCountWithBlock:(id /* block */)a0;
- (void)clearNodesForDecoderType:(unsigned long long)a0;
- (unsigned long long)togetherNodeCountWithAssetID:(id)a0;
- (void)clearOther;
- (void)dequeueBatchOfNodesWithFilterBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)togetherNodeListWithSlotModel:(id)a0 completion:(id /* block */)a1;
- (void)insertAsseetNode:(id)a0 into:(id)a1;
- (void)insertGiftNode:(id)a0 into:(id)a1;
- (id)combineAllArray;
- (BOOL)filterQueue:(id)a0 into:(id)a1 withFilterBlock:(id /* block */)a2;
- (id)getTopValidNode:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)init;

@end
