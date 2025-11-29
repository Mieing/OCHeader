@interface TimonServiceCenter : NSObject

+ (void)bindClass:(Class)a0 toProtocol:(id)a1;
+ (void)bindInstance:(id)a0 toProtocol:(id)a1;
+ (void)bindSettingService:(id)a0;
+ (void)bindUserExceptionService:(id)a0;
+ (void)bindTrackerService:(id)a0;
+ (void)bindNetworkStatusService:(id)a0;
+ (void)bindMonitorService:(id)a0;
+ (void)bindUploadAlogService:(id)a0;
+ (void)bindLoggerService:(Class)a0;
+ (void)bindKVStoreService:(Class)a0;
+ (void)bindBacktraceProtocl:(id)a0;

@end
