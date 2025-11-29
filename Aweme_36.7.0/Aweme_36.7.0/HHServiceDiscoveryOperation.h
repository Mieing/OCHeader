@class HHServiceDiscoveryOperationCallbackContext, NSObject;
@protocol OS_dispatch_queue;

@interface HHServiceDiscoveryOperation : NSObject

@property (readonly, nonatomic) struct _DNSServiceRef_t { } *serviceRef;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sdDispatchQueue;
@property (readonly, weak, nonatomic) NSObject<OS_dispatch_queue> *effectiveMainDispatchQueue;
@property (retain, nonatomic) HHServiceDiscoveryOperationCallbackContext *currentCallbackContext;
@property (nonatomic) int lastError;
@property (readonly, nonatomic) BOOL hasFailed;
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *mainDispatchQueue;

- (void)HHLogDebug:(id)a0;
- (void)dnsServiceError:(int)a0;
- (id)setCurrentCallbackContextWithSelf;
- (BOOL)setServiceRef:(struct _DNSServiceRef_t { } *)a0;
- (void)resetServiceRef;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
