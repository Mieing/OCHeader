@class NSString;
@protocol WKKryptonCaptureSessionInvoker;

@interface WKKryptonDefaultCameraService : NSObject <WKKryptonCameraService>

@property (retain, nonatomic) id<WKKryptonCaptureSessionInvoker> invoker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createCamera;

@end
