@class ACCCameraSubscription, NSString;
@protocol VERecorderPublicProtocol;

@interface ACCAlgorithmWrapper : NSObject <ACCCameraBuildListener, ACCAlgorithmProtocol>

@property (weak, nonatomic) id<VERecorderPublicProtocol> camera;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (nonatomic) unsigned long long externalAlgorithm;
@property (nonatomic) unsigned long long algorithmParam;
@property (nonatomic) void *cameraContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL lastRedPacketRecognised;
@property (nonatomic) BOOL hasDetectMale;

- (void)forceDetectBuffer:(long long)a0;
- (void)getFaceResult:(id /* block */)a0;
- (void)setCameraProvider:(id)a0;
- (void)updateAlgorithmWithGraphName:(id)a0 nodeName:(id)a1 paramName:(id)a2 paramValue:(id)a3;
- (void)turnOnAlgorithmWithPath:(id)a0 graphName:(id)a1 nodeName:(id)a2;
- (void)turnOffAlgorithmWithPath:(id)a0;
- (BOOL)p_verifyCameraContext;
- (void)onCameraInit:(id)a0;
- (void)enableEffectExternalAlgorithm:(BOOL)a0;
- (void)appendAlgorithm:(unsigned long long)a0;
- (void)enableAlgorithmWithGraphName:(id)a0 nodeName:(id)a1 enabled:(BOOL)a2;
- (void)updateAlgorithmAndCallBack;
- (void).cxx_destruct;
- (id)init;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
