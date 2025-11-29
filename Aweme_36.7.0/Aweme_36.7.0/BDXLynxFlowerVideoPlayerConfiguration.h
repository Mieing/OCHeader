@class NSString, UIColor;

@interface BDXLynxFlowerVideoPlayerConfiguration : NSObject

@property (nonatomic) BOOL enableHardDecode;
@property (nonatomic) BOOL enableBytevc1Decode;
@property (nonatomic) BOOL enableTTPlayer;
@property (nonatomic) BOOL repeated;
@property (nonatomic) BOOL outerRotate;
@property (copy, nonatomic) id /* block */ preCheckBlockBeforPlay;
@property (nonatomic) BOOL showDefaultVolumeLoading;
@property (nonatomic) BOOL mute;
@property (nonatomic) BOOL useTTNetUtility;
@property (nonatomic) BOOL disableTracker;
@property (copy, nonatomic) NSString *outCoverName;
@property (copy, nonatomic) NSString *outBackgroundColor;
@property (retain, nonatomic) UIColor *backUIColor;
@property (nonatomic) BOOL useCustomLoadingView;
@property (nonatomic) long long customScaleMode;

- (void).cxx_destruct;

@end
