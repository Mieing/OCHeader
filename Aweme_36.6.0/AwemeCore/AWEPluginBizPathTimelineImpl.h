@class NSMutableDictionary, NSTimer, NSString, NSObject, BDPUniqueID;
@protocol OS_dispatch_queue;

@interface AWEPluginBizPathTimelineImpl : NSObject <BDPBizPathTimelinePluginDelegate, BDPBootLifeCycleMessage>

@property (retain, nonatomic) NSMutableDictionary *currentBizPaths;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) BDPUniqueID *currentUniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)handleEvent:(id)a0 params:(id)a1;
- (void)invalidTimer;
- (void)applicationColdBootWithUniqueID:(id)a0 coldBootType:(unsigned long long)a1;
- (void)deleteBizPathIfExpired;
- (void)realDeleteBizPathIfExpired;
- (void)removeRecordWithPathName:(id)a0;
- (BOOL)enableMatchWithEvent:(id)a0 params:(id)a1;
- (id)getBizPathConfig;
- (void)dispatchEventToBizPathConfig:(id)a0 pathName:(id)a1 event:(id)a2 params:(id)a3;
- (BOOL)matchParamsWithParams:(id)a0 targetParams:(id)a1;
- (BOOL)matchIndexWithParams:(id)a0 targetParams:(id)a1 indexArr:(id)a2;
- (BOOL)checkBizPathStartEventWithBizPathConfig:(id)a0 event:(id)a1 params:(id)a2;
- (BOOL)needRecordEventWithBizPathConfig:(id)a0 pathName:(id)a1 event:(id)a2 params:(id)a3 checkFirstStage:(BOOL)a4;
- (void)processEventWithBizPathConfig:(id)a0 pathName:(id)a1 event:(id)a2 params:(id)a3;
- (id)buildRecordWithBizPathConfig:(id)a0 pathName:(id)a1 event:(id)a2 params:(id)a3;
- (void)addRecord:(id)a0 pathName:(id)a1;
- (void)awakeTimer;
- (void)receivedEvent:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
