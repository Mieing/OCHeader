@class NSString, NSMutableDictionary;

@interface AWEIMGroupChatMonitor : NSObject <AWEIMGroupChatMonitorProtocol> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (nonatomic) double tikTime;
@property (retain, nonatomic) NSMutableDictionary *extraDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackEvent:(id)a0 extra:(id)a1;
+ (long long)statusCodeFromResponse:(id)a0;
+ (id)tik;
+ (void)trackGroupManagementFuncScene:(id)a0 con:(id)a1 response:(id)a2 error:(id)a3 duration:(double)a4 extra:(id)a5;
+ (void)trackGroupEvent:(id)a0 con:(id)a1 duration:(double)a2 extra:(id)a3;
+ (void)trackGroupExceptionIfNeeded:(id)a0 extra:(id)a1;
+ (void)trackGroupManagementFuncScene:(id)a0 con:(id)a1 error:(id)a2 duration:(double)a3 extra:(id)a4;
+ (void)trackGroupManagementFuncScene:(id)a0 con:(id)a1 auditResponse:(id)a2 error:(id)a3 duration:(double)a4 extra:(id)a5;
+ (long long)statusFromCheckMessage:(id)a0;
+ (id)__infoWithCon:(id)a0;
+ (id)__networkInfo;
+ (void)__trackGroupEvent:(id)a0 withParams:(id)a1;
+ (id)__infoWithScene:(id)a0;
+ (void)__trackWithParams:(id)a0;
+ (long long)statusCodeFromAuditResponse:(id)a0;
+ (id)__pathForScene:(id)a0;
+ (id)commonInfoWithCon:(id)a0;
+ (void)trackGroupManagementFuncScene:(id)a0 con:(id)a1 model:(id)a2 error:(id)a3 duration:(double)a4;
+ (void)trackGroupManagementFuncScene:(id)a0 con:(id)a1 groupManagementInfo:(id)a2 error:(id)a3 duration:(double)a4 extra:(id)a5;

- (void)__trackEvent:(id)a0 params:(id)a1;
- (void)tokWithEvent:(id)a0 con:(id)a1 error:(id)a2 extra:(id)a3;
- (void)tokWithEvent:(id)a0 extra:(id)a1;
- (double)tokDuration;
- (void)addExtraEntries:(id)a0;
- (void)tikWithDurationKey:(id)a0;
- (void)tokWithEvent:(id)a0 context:(id)a1 error:(id)a2 extra:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
