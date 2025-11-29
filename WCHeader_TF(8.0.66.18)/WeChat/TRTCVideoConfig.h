@class TRTCNetworkQosParam, AVAsset, TRTCVideoEncParam;

@interface TRTCVideoConfig : NSObject

@property (nonatomic) long long scene;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL isMuted;
@property (retain, nonatomic) TRTCVideoEncParam *videoEncConfig;
@property (retain, nonatomic) TRTCVideoEncParam *smallVideoEncConfig;
@property (retain, nonatomic) TRTCNetworkQosParam *qosConfig;
@property (nonatomic) BOOL isFrontCamera;
@property (nonatomic) BOOL isTorchOn;
@property (nonatomic) BOOL isAutoFocusOn;
@property (nonatomic) BOOL isRemoteMirrorEnabled;
@property (nonatomic) unsigned long long localMirrorType;
@property (nonatomic) long long fillMode;
@property (nonatomic) BOOL isMixingInCloud;
@property (nonatomic) BOOL isSmallVideoEnabled;
@property (nonatomic) BOOL prefersLowQuality;
@property (nonatomic) BOOL isGSensorEnabled;
@property (retain, nonatomic) AVAsset *videoAsset;
@property (readonly, nonatomic) long long fpsIndex;
@property (readonly, nonatomic) long long qosPreferenceIndex;

+ (id)resolutionNames;
+ (id)fpsList;
+ (id)localMirrorTypeNames;

- (id)initWithScene:(long long)a0;
- (void).cxx_destruct;

@end
