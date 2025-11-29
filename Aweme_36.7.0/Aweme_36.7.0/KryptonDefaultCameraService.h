@class NSString;
@protocol KryptonCaptureSessionInvoker;

@interface KryptonDefaultCameraService : NSObject <KryptonCameraService>

@property (retain, nonatomic) id<KryptonCaptureSessionInvoker> invoker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createCamera;

@end
