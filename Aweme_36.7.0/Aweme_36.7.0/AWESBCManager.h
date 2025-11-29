@class NSMapTable, NSMutableDictionary, NSString, NSObject;
@protocol OS_dispatch_queue, AWEPushSBCProtocol, IESLCMessageHandlerProtocol;

@interface AWESBCManager : NSObject <IESLCMessageHandlerService>

@property (retain, nonatomic) NSMapTable *mapTable;
@property (retain, nonatomic) NSMutableDictionary *groupTypeToHandlerDict;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) id<AWEPushSBCProtocol> defaultManager;
@property (retain, nonatomic) NSMutableDictionary *trackerInfo;
@property (nonatomic) unsigned long long coldLaunchPullMode;
@property (nonatomic) BOOL hasColdLaunchRequest;
@property (nonatomic) double pitayaPullStartRequestTime;
@property (nonatomic) double pitayaStartRegisterTime;
@property (weak, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)ieslc_messageHandler:(id)a0 didReceiveMsg:(id)a1;
- (void)pushSBCMsgNoti:(id)a0;
- (void)p_createElapsedTimeHelperWithInfo:(id)a0;
- (id)managerForPayloadDict:(id)a0;
- (void)handleNativeCallBack;
- (id)handlePitayaCallBack:(id)a0;
- (void)p_requestPullWithParams:(id)a0 trackerInfo:(id)a1;
- (void)handlePullCompletionBlockWithDict:(id)a0 params:(id)a1 error:(id)a2 trackerInfo:(id)a3;
- (void)p_trackerForPitaya:(id)a0;
- (void)p_pulledPush:(id)a0;
- (void)registerService:(id)a0 forKey:(id)a1;
- (void)registerService:(id)a0 forGroupToTypesDict:(id)a1;
- (void)deregisterServiceForKey:(id)a0;
- (void)pullWhenColdStart;
- (void)registerPulledPushByPitaya;
- (void)mapTableWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
