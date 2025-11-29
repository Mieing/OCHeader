@class NSString, NSMutableDictionary, TIMXSDKInstance, NSObject;
@protocol TIMXMessageTrackDelegate, OS_dispatch_semaphore;

@interface TIMXSendMessageProcessTraceUtility : NSObject <TIMXMessageTrackProtocol, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) NSMutableDictionary *sendProcessDurationMonitorMap;
@property (retain, nonatomic) NSMutableDictionary *receiveProcessDurationMonitorMap;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sendProcessDurationMonitorMapLock;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *receiveProcessDurationMonitorMapLock;
@property (weak, nonatomic) id<TIMXMessageTrackDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleMemoryWarning:(id)a0;
- (id)receive_monitorWithBaseLogId:(long long)a0 monitorKey:(id)a1;
- (void)receive_addDurationMonitor:(id)a0 toBaseLogId:(long long)a1;
- (id)unreportedMessages;
- (id)receive_generateFinalExtWithBaseLogId:(long long)a0;
- (id)send_generateNewExtensionWithOrigin:(id)a0 withMonitor:(id)a1;
- (id)send_generateNewExtensionWithOrigin:(id)a0 key:(id)a1 value:(id)a2;
- (BOOL)enableRefiningSendMessageElapsededTime;
- (void)willHandleMessageWithBaseLogId:(id)a0;
- (id)send_generateFinalExtWithOriginExtension:(id)a0 messageId:(id)a1;
- (void)send_addDurationMonitor:(id)a0 toMessage:(id)a1;
- (id)send_clearMonitorOfMessage:(id)a0;
- (id)send_monitorWithMessageId:(id)a0 monitorKey:(id)a1;
- (void)receive_addDurationMonitor:(id)a0 toBaseLogId:(long long)a1 reason:(id)a2;
- (void)receive_clearMonitorsWithLogId:(long long)a0;
- (void)receive_recordBaseResponseLogIdWithLogId:(long long)a0 response:(id)a1;
- (long long)receive_baseResponseLogIdWithResponse:(id)a0;
- (long long)receive_baseResponseLogIdWithNotify:(id)a0;
- (void)receive_clearLogIdWithNotify:(id)a0;
- (void)send_addDurationMonitorCore:(id)a0 toMessage:(id)a1;
- (id)send_clearMonitorOfMessageCore:(id)a0;
- (id)send_monitorWithMessageIdCore:(id)a0 monitorKey:(id)a1;
- (id)monitorOfMessageCore:(id)a0;
- (id)elapseTimeDictWithMessageId:(id)a0;
- (void)insertCliendProcessDurationWithExt:(id)a0;
- (void)receive_addDurationMonitorCore:(id)a0 key:(id)a1 reason:(id)a2;
- (id)receive_monitorWithBaseLogId:(long long)a0 monitorKey:(id)a1 reason:(id)a2;
- (void)receive_clearMonitorsWithLogIdCore:(id)a0;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
