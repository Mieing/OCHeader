@class NSString, UIColor;

@interface AWEDemaciaPlayerInitModel : NSObject

@property (nonatomic) long long videoMode;
@property (nonatomic) BOOL enableHardDecode;
@property (nonatomic) BOOL enableH256Decode;
@property (nonatomic) BOOL enableTTPlayer;
@property (nonatomic) BOOL repeated;
@property (nonatomic) BOOL outerRotate;
@property (copy, nonatomic) id /* block */ preCheckBlockBeforPlay;
@property (nonatomic) long long controlMode;
@property (nonatomic) long long frameMode;
@property (nonatomic) BOOL showDefaultVolumeLoading;
@property (nonatomic) BOOL mute;
@property (nonatomic) BOOL useTTNetUtility;
@property (nonatomic) BOOL disableTracker;
@property (copy, nonatomic) NSString *demaciaFirstFrameLogKey;
@property (copy, nonatomic) NSString *demaciaPlayErrorLogKey;
@property (copy, nonatomic) NSString *demaciaPlayBlockLogKey;
@property (copy, nonatomic) NSString *outCoverName;
@property (copy, nonatomic) NSString *outBackgroundColor;
@property (retain, nonatomic) UIColor *backUIColor;
@property (nonatomic) BOOL useCustomLoadingView;
@property (nonatomic) long long customScaleMode;
@property (nonatomic) BOOL isNewUser;
@property (nonatomic) BOOL hideLoadingWhenResume;
@property (nonatomic) BOOL disablePreemptAudioFocusIfMute;

- (void).cxx_destruct;

@end
