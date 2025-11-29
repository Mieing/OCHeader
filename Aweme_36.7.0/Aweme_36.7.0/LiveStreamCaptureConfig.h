@class NSString, LSGLExternalEffectCallback, NSDictionary;

@interface LiveStreamCaptureConfig : NSObject

@property (nonatomic) BOOL useExternalCamera;
@property (nonatomic) long long mode;
@property (nonatomic) BOOL useES3;
@property (nonatomic) BOOL fixES3Issue;
@property (nonatomic) BOOL useNewLiveCoreRender;
@property (nonatomic) BOOL effectDetachControl;
@property (nonatomic) BOOL captureDetachControl;
@property (nonatomic) BOOL directOutputIfPossiable;
@property (copy, nonatomic) NSString *backgroundColorOfCanvas;
@property (nonatomic) BOOL useNewEffectLabAPI;
@property (nonatomic) BOOL useExternalEffect;
@property (retain, nonatomic) LSGLExternalEffectCallback *externalEffectCallback;
@property (nonatomic) BOOL usingNewEffectMsgRegister;
@property (nonatomic) BOOL useEffectProcessRawTextureAPI;
@property (nonatomic) BOOL useEffectSetWidthHeightV2;
@property (nonatomic) BOOL enableEffectMultiTrack;
@property (nonatomic) BOOL useAmazing;
@property (copy, nonatomic) NSDictionary *neptuneSdkParams;
@property (nonatomic) BOOL forceDetectInFirstThreeFrames;
@property (copy, nonatomic) NSString *effectPlatformConfig;
@property (copy, nonatomic) NSString *effectLicense;
@property (copy, nonatomic) NSString *effectCacheDirectory;
@property (nonatomic) BOOL initOutputSizeWhileChangingCameraOutputSize;
@property (nonatomic) BOOL enablePanorama;
@property (nonatomic) BOOL earMonitorEffectLazyCreate;
@property (nonatomic) BOOL enableBapLive;
@property (nonatomic) unsigned long long pictureOutputType;
@property (copy, nonatomic) NSDictionary *sdkParams;
@property (nonatomic) BOOL asyncInit;
@property (copy, nonatomic) id /* block */ initStatusCallback;

+ (id)defaultConfig;

- (void).cxx_destruct;
- (id)init;

@end
