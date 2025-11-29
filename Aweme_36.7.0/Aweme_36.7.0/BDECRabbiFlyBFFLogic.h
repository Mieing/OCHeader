@class NSMutableDictionary, NSString, NSMutableSet, BDECRabbiFlyDynamicSupervisor, NSMutableArray;
@protocol BDECRabbiFlyIJSWorker;

@interface BDECRabbiFlyBFFLogic : NSObject <BDECRabbiFlyIBFFLogic, BDECRabbiFlyIClientResponse>

@property (weak, nonatomic) BDECRabbiFlyDynamicSupervisor *supervisor;
@property (nonatomic) BOOL isSingleJSWorker;
@property (retain, nonatomic) id<BDECRabbiFlyIJSWorker> singleJSWorker;
@property (retain, nonatomic) NSMutableArray *singleProcessDataTokenList;
@property (retain, nonatomic) NSMutableSet *singleJSWorkerTokenSet;
@property (retain, nonatomic) NSMutableArray *multiProcessDataJSWorkerList;
@property (retain, nonatomic) NSMutableDictionary *multiJSWorkerMap;
@property (nonatomic) BOOL isViewAppear;
@property (nonatomic) BOOL isAppActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSupervisor:(id)a0;
- (id)getJSWorkerWithToken:(id)a0;
- (id)getProcessDataJSWorkerWithToken:(id)a0;
- (id)generateProcessDataEvent:(id)a0;
- (void)removeProcessDataJSWorker:(id)a0 token:(id)a1;
- (void)updatePageVisibility:(BOOL)a0 isAppActive:(BOOL)a1;
- (void)sendEventWithDynamicModel:(id)a0 event:(id)a1 data:(id)a2;
- (void)sendEventToAll:(id)a0 data:(id)a1;
- (id)failResultData;
- (id)resultDataWithActionResult:(id)a0;
- (id)resultDataWithBridgeResult:(id)a0;
- (id)notRegisteredResultData;
- (id)resultDataWithCode:(long long)a0 msg:(id)a1 data:(id)a2;
- (id)generateSingleJSWorker:(id)a0;
- (id)generateMultiJSWorker:(id)a0;
- (void)callActionWithDynamicView:(id)a0 action:(id)a1;
- (void)cleanMultiJSWorker;
- (void)onCall:(id)a0 token:(id)a1 bridgeName:(id)a2 data:(id)a3 callback:(id /* block */)a4 extra:(id)a5;
- (void)onUpdateData:(id)a0 token:(id)a1 data:(id)a2 code:(long long)a3 message:(id)a4 reason:(id)a5 seqNo:(id)a6;
- (void)resume:(id)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (void)stop:(id)a0;
- (void)processData:(id)a0;
- (void)viewWillAppear;
- (void)applicationDidEnterBackground:(id)a0;
- (void)dealloc;
- (void)viewWillDisappear;

@end
