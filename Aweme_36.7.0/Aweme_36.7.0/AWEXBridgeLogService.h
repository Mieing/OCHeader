@class NSString;

@interface AWEXBridgeLogService : NSObject <BDXBridgeLogServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reportADLogWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)reportAppLogWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)reportMonitorLogWithParamModel:(id)a0 completionHandler:(id /* block */)a1;

@end
