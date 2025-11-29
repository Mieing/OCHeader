@class NSArray, NSDictionary, NSString, TIMXSDKInstance;

@interface TIMXNewAppLogManager : NSObject <TIMXNewAppLogManagerProtocol, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (copy, nonatomic) NSArray *eventLoggerWhiteList;
@property (copy, nonatomic) NSDictionary *appLogRateDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onEvent:(id)a0 params:(id)a1;
- (id)convertToJsonDict:(id)a0;
- (void)onEvent:(id)a0 paramsBlock:(id /* block */)a1;
- (void)handleEventLogService:(id)a0 name:(id)a1 data:(id)a2;
- (BOOL)shouldLogForEvent:(id)a0;
- (BOOL)shouldLogEventToAlog;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
