@class NSObject;
@protocol OS_dispatch_queue;

@interface HMDWebViewMonitor : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutexLock;
}

@property BOOL isMonitoring;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *webviewQueue;

+ (id)sharedMonitor;

- (id)recordWithRequest:(id)a0 response:(id)a1 additionalInfo:(id)a2 netMonitorConfig:(id)a3;
- (void)bdw_URLSchemeTask:(id)a0 didReceiveResponse:(id)a1;
- (void)bdw_URLProtocolTask:(id)a0 didReceiveResponse:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;

@end
