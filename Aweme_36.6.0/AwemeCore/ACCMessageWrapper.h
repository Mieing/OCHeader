@class ACCCameraSubscription, NSString;
@protocol AWEEffectMessageInterceptor, ACCMessageFilterDelegate, VERecorderPublicProtocol;

@interface ACCMessageWrapper : NSObject <ACCCameraBuildListener, ACCMessageFilterable, ACCMessageProtocol>

@property (weak, nonatomic) id<VERecorderPublicProtocol> camera;
@property (nonatomic) void *cameraContext;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (retain, nonatomic) id<AWEEffectMessageInterceptor> messageInterceptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCMessageFilterDelegate> messageFilter;

- (void)sendMessageToEffect:(id)a0;
- (void)setCameraProvider:(id)a0;
- (BOOL)p_verifyCameraContext;
- (void)onCameraInit:(id)a0;
- (void)bindEffectMessage;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;

@end
