@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ASSDynamicManager : NSObject <APDynamicProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)uploadTimerCheckResult:(id)a0 dynamicTrace:(id)a1 dynamicCmd:(int)a2 dynamicNum:(int)a3;
+ (id)sendDynamicSynchronousRequest:(id)a0;
+ (void)recordError:(const char *)a0 withAction:(const char *)a1 errCode:(int)a2;
+ (id)uploadCustomFile:(id)a0;
+ (id)sharedInstance;

- (void)dynamicCheckDispatch:(id)a0 withCallBack:(id /* block */)a1;
- (id)getTraceDict:(id)a0;
- (void)uploadDynamicCheckResult:(id)a0 traceDict:(id)a1;
- (void)parseDynamicRPCResult:(id)a0;
- (id)dynamicCheck:(id)a0;
- (id)dynamicCheckLocal:(id)a0;
- (void)dynamicCheckDispatch:(id)a0;
- (void)dynamicCheckCustomLocal:(int)a0;
- (void).cxx_destruct;
- (id)init;

@end
