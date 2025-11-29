@class NSString;

@interface BDXBridgeMonitor : NSObject <BDXBridgeInterceptor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)setup;

- (void)xBridgeWillHandleMethod:(id)a0 container:(id)a1 params:(id)a2;
- (void)xBridgeDidHandleMethod:(id)a0 container:(id)a1 paramsModel:(id)a2;
- (void)xBridgeDidCallbackMethod:(id)a0 container:(id)a1 statusCode:(long long)a2 message:(id)a3 result:(id)a4 callOnMainThread:(BOOL)a5;
- (void)__monitorErrorWithMethod:(id)a0 container:(id)a1 code:(long long)a2 message:(id)a3;
- (void)__monitorPVWithMethod:(id)a0 container:(id)a1 statusCode:(long long)a2 callOnMainThread:(BOOL)a3;
- (void)__monitorBridgePerf:(id)a0 perfData:(id)a1 container:(id)a2;
- (id)__paramsWithContainer:(id)a0;
- (id)__monitorWithContainer:(id)a0;
- (void)__getMonitorInfoWithContainer:(id)a0 completion:(id /* block */)a1;
- (id)__viewPathWithContainer:(id)a0;

@end
