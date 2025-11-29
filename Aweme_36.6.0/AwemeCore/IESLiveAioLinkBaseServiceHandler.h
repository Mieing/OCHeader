@class NSMutableDictionary, NSString, IESLiveAioLinkServiceConfig, UIView;

@interface IESLiveAioLinkBaseServiceHandler : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutexLock;
}

@property (weak, nonatomic) UIView *monitorView;
@property (copy, nonatomic) IESLiveAioLinkServiceConfig *config;
@property (retain, nonatomic) NSMutableDictionary *methodInvokeDic;
@property (readonly, copy, nonatomic) NSString *service;
@property (readonly, copy, nonatomic) NSString *nativeService;

- (id)commonParams:(id)a0;
- (void)monitorAioLinkCloseChannel:(id)a0;
- (void)monitorMethodInvokeSuccess:(id)a0 isFromNative:(BOOL)a1;
- (void)reportWebMonitorWithEventName:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3 monitorView:(id)a4;
- (id)dynamicServiceVersion;
- (void)process:(id)a0 params:(id)a1 error:(id)a2 tag:(id)a3 returnContentType:(unsigned long long)a4;
- (void)removeInvokeWith:(id)a0 reason:(unsigned long long)a1;
- (void)updateLynxHandleWithView:(id)a0;
- (void)updateMonitorView:(id)a0;
- (void)setDynamicServiceVersion:(id)a0;
- (void)handleError:(id)a0 tag:(id)a1 domain:(id)a2 message:(id)a3;
- (void)setMethodInvoke:(id)a0 tag:(id)a1;
- (id)getMethodInvoke:(id)a0;
- (void)monitorServiceNotFoundError:(id)a0 error:(id)a1 reason:(id)a2;
- (void)monitorMethodNotFoundError:(id)a0 error:(id)a1;
- (void)monitorServiceFoundSuccess:(id)a0;
- (void)monitorHandlerInternalError:(id)a0 method:(id)a1 isFromNative:(BOOL)a2 error:(id)a3;
- (void)monitorAioLinkCallAll:(id)a0 tag:(id)a1;
- (void)monitorAioLinkCallError:(id)a0 tag:(id)a1;
- (id)methodDIContext:(id)a0;
- (void).cxx_destruct;
- (id)initWithService:(id)a0;

@end
