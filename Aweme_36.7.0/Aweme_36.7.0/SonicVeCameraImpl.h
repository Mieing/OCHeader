@class NSString, IESMMCameraConfig, SonicVeCameraConfig;
@protocol SonicVeCameraCallback, VERecorderPublicProtocol;

@interface SonicVeCameraImpl : NSObject <SonicVeCamera> {
    IESMMCameraConfig *veCameraConfig_;
    id<VERecorderPublicProtocol> veCamera_;
    id<SonicVeCameraCallback> callback_;
    SonicVeCameraConfig *cameraConfig_;
    void /* function */ *containerAppResourceFinder_;
    void /* function */ *sonicResourceFinder_;
    NSString *latestSticker_;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendMessageToEffect:(id)a0;
- (BOOL)pauseVeCamera;
- (id)requestVeCameraWithConfig:(id)a0;
- (BOOL)resumeVeCamera;
- (BOOL)disposeVeCamera;
- (void)setVeCameraZoom:(double)a0;
- (id)getVeCameraConfig;
- (void)dispatchRawNormalizedTouchID:(int)a0 touchX:(float)a1 touchY:(float)a2 type:(int)a3 count:(int)a4;
- (void)setEffectMessageHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithCallback:(id)a0;
- (void)setSticker:(id)a0;

@end
