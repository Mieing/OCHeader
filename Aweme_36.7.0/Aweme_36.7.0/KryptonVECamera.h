@class NSString, KryptonCameraConfig, IESMMCameraConfig;
@protocol KryptonCameraDelegate, VERecorderPublicProtocol;

@interface KryptonVECamera : NSObject <KryptonCamera> {
    NSString *_latestSticker;
    IESMMCameraConfig *_veCameraConfig;
    id<VERecorderPublicProtocol> _veCamera;
    void /* function */ *_containerAppResourceFinder;
    void /* function */ *_resourceFinder;
}

@property (retain, nonatomic) KryptonCameraConfig *config;
@property (weak, nonatomic) id<KryptonCameraDelegate> delegate;
@property (copy, nonatomic) id /* block */ audioSampleCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendMessageToEffect:(id)a0;
- (id)getCameraConfig;
- (void)setEffectMessageHandler:(id /* block */)a0;
- (id)requestWithConfig:(id)a0;
- (void)dispatchTouchEventWithIdentifier:(long long)a0 normalizedX:(float)a1 normalizedY:(float)a2 type:(id)a3 indexOfTouches:(long long)a4;
- (void)setStickerWithFilePath:(id)a0;
- (void)downloadSticker:(id)a0 callBack:(id /* block */)a1;
- (BOOL)setZoom:(double)a0;
- (void).cxx_destruct;
- (BOOL)play;
- (BOOL)pause;
- (id)init;
- (double)height;
- (double)width;
- (BOOL)dispose;
- (void)dealloc;

@end
