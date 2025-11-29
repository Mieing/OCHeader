@class _TtC9CameraKit13CameraSession;
@protocol VERecorderPublicProtocol;

@interface CameraKit.CameraSessionManager : NSObject <CameraKit.CameraSessionManagerPreloadProtocol, CameraKit.CameraSessionManagerProtocol> {
    void /* unknown type, empty encoding */ subscriptionLock;
    void /* unknown type, empty encoding */ mutex;
    void /* unknown type, empty encoding */ sessionPool;
    void /* unknown type, empty encoding */ cameraContextProvider;
    void /* unknown type, empty encoding */ cameraFactory;
    void /* unknown type, empty encoding */ weakSubscriptions;
    void /* unknown type, empty encoding */ strongSubscriptions;
    void /* unknown type, empty encoding */ cameraControlDelaySwitchSession;
    void /* unknown type, empty encoding */ cameraControlPreloadSession;
    void /* unknown type, empty encoding */ cameraControlPreloadCompletion;
    void /* unknown type, empty encoding */ cameraCreateSemaphore;
    void /* unknown type, empty encoding */ preloadCameraSessionKey;
    void /* unknown type, empty encoding */ cameraActionBlockBindFlag;
}

@property (nonatomic, retain) id<VERecorderPublicProtocol> vecamera;
@property (nonatomic) BOOL cameraHasPrviousProload;
@property (nonatomic) BOOL cameraControlPreload;
@property (nonatomic, retain) _TtC9CameraKit13CameraSession *activeSession;
@property (nonatomic) BOOL useMutex;
@property (nonatomic) BOOL useWeakSubscriptions;

+ (id)preloadCreateCameraInstanceWith:(id)a0 imageDuet:(BOOL)a1 cameraConfig:(id)a2 completion:(id /* block */)a3;

- (void)setCameraPreloadFlag;
- (void)resetCameraConfigWith:(id)a0 contentView:(id)a1 config:(id)a2;
- (void)bindCameraActionMessageWith:(id /* block */)a0;
- (void)addSubscription:(id)a0;
- (void)preloadCameraInstanceWith:(id)a0;
- (void)setVECameraInstance:(id)a0;
- (id)createCameraSessionWith:(id)a0 cameraConfig:(id)a1;
- (void)releaseCameraSessionWith:(id)a0;
- (BOOL)switchToCameraSessionWith:(id)a0 error:(id *)a1 updateContextBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)saveCameraConfig;
- (void)restoreCameraConfig;
- (void).cxx_destruct;
- (id)init;

@end
