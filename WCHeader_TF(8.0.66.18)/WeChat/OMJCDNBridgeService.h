@protocol OMJCDNBridgeServiceDelegate;

@interface OMJCDNBridgeService : NSObject

@property (nonatomic) struct SharedPtr<XMJBridgeCDNService> { struct XMJBridgeCDNService *_ptr; } backingService;
@property (weak, nonatomic) id<OMJCDNBridgeServiceDelegate> delegate;

- (id)init;
- (void)setupCallback;
- (void)notifyDownloadSuccessWithTaskKey:(id)a0;
- (void)notifyDownloadFailureWithTaskKey:(id)a0 error:(id)a1;
- (void)notifyUploadSuccessWithResult:(id)a0;
- (void)notifyUploadFailureWithTaskKey:(id)a0 error:(id)a1;
- (void)notifyDownloadProgressUpdate:(id)a0 downloadLength:(long long)a1 totalLength:(long long)a2 averageSpeed:(float)a3 instantSpeed:(float)a4;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
