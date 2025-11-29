@class MBBizSystem, NSMutableDictionary;
@protocol IMBReportProxy;

@interface MagicBrushService : NSObject

@property (retain, nonatomic) MBBizSystem *bizSystem;
@property (weak, nonatomic) id<IMBReportProxy> reportProxy;
@property (retain, nonatomic) NSMutableDictionary *extDict;

- (void)registerJsEventImplWithEventName:(id)a0 impl:(id)a1;
- (void)unRegisterJsEventImplWithEventName:(id)a0;
- (void)registerEventWithEventName:(id)a0 instanceName:(id)a1 block:(id /* block */)a2;
- (void)unRegisterEventWithEventName:(id)a0 instanceName:(id)a1;
- (void)onSendEventWithEventName:(id)a0 extData:(id)a1;
- (id)init;
- (id)initWithProxy:(id)a0 pluginProxy:(id)a1 reportProxy:(id)a2;
- (id)newBiz:(id)a0;
- (void)report:(int)a0 logStr:(id)a1;
- (void)runCodeInMBThread:(id /* block */)a0;
- (void)runCodeInMBThreadSync:(id /* block */)a0;
- (id)getReportExtraDictionary:(id)a0 publicServices:(id)a1;
- (void)forceStop:(id)a0 withAllConnectedBizes:(BOOL)a1;
- (void).cxx_destruct;

@end
