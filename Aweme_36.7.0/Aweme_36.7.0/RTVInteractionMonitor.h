@class NSString;
@protocol RTVMonitor, RxInjector, RTVPerformanceMonitorInterface;

@interface RTVInteractionMonitor : NSObject <RTVInteractionMonitorInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVPerformanceMonitorInterface> performanceMonitor;
@property (retain, nonatomic) id<RTVMonitor> rtvMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)__trackService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (void)sendOperation:(id)a0 sendState:(id)a1 needReply:(BOOL)a2;
- (void)endSendOperation:(id)a0 sendState:(id)a1 needReply:(BOOL)a2 error:(id)a3;
- (void)receiveOperation:(id)a0;
- (void)rejectOperation:(id)a0;
- (id)trackInfoWithOperation:(id)a0;
- (id)trackInfoWithReplyOperation:(id)a0;
- (id)trackInfoWithError:(id)a0;
- (void)startReceiveReplyMonitorWithIdentifier:(id)a0 extraDictionary:(id)a1;
- (void)endReceiveReplyMonitorWithIdentifier:(id)a0 extraDictionary:(id)a1;
- (void)startApiMonitorWithIdentifier:(id)a0 extraDictionary:(id)a1;
- (void)endApiMonitorWithIdentifier:(id)a0 extraDictionary:(id)a1;
- (void)startSendOperationMonitorWithIdentifier:(id)a0 extraDictionary:(id)a1;
- (void)endSendOperationMonitorWithIdentifier:(id)a0 extraDictionary:(id)a1;
- (void).cxx_destruct;

@end
