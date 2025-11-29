@class NSDictionary, NSString;

@interface IESLiveLinkLiveCoreStreamConfig : NSObject

@property (nonatomic) long long streamWidth;
@property (nonatomic) long long streamHeight;
@property (nonatomic) long long streamFps;
@property (nonatomic) long long streamBitrate;
@property (nonatomic) long long streamGop;
@property (nonatomic) long long streamAudioChannels;
@property (nonatomic) long long streamAudioSamplerate;
@property (nonatomic) long long streamAudiobitrate;
@property (nonatomic) long long streamAudioCodec;
@property (nonatomic) long long streamVideoCodec;
@property (nonatomic) BOOL enableDeferredCompositingLayout;
@property (nonatomic) BOOL onlyRenderOnViewReady;
@property (nonatomic) BOOL enableBlackFrameLeakFix;
@property (copy, nonatomic) NSDictionary *sdkParams;
@property (nonatomic) BOOL purgeFBOnInputGLError;
@property (nonatomic) BOOL enableForceCompositingLayout;
@property (nonatomic) BOOL enableDownPKResolution;
@property (copy, nonatomic) NSString *liveSdkVersion;
@property (nonatomic) BOOL byteAudioModeEnable;
@property (nonatomic) BOOL shouldUseLCAudioUnit;

- (void).cxx_destruct;

@end
