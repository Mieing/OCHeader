@class NSString;

@interface AnnieXLynxEventReporterObserver : NSObject <LynxEventReportObserverProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)onReportEvent:(id)a0 instanceId:(long long)a1 props:(id)a2 extraData:(id)a3;

@end
