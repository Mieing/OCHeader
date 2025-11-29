@class NSString;

@interface AWENoxusPlayerInitModel : NSObject

@property (nonatomic) BOOL enableHardDecode;
@property (nonatomic) BOOL enableH256Decode;
@property (nonatomic) BOOL enableTTPlayer;
@property (nonatomic) BOOL repeated;
@property (nonatomic) double verticalBottomOffset;
@property (copy, nonatomic) id /* block */ preCheckBlockBeforPlay;
@property (nonatomic) BOOL showDefaultVolumeLoading;
@property (nonatomic) BOOL mute;
@property (nonatomic) BOOL useTTNetUtility;
@property (nonatomic) BOOL disableTracker;
@property (copy, nonatomic) NSString *noxusFirstFrameLogKey;
@property (copy, nonatomic) NSString *noxusPlayErrorLogKey;
@property (copy, nonatomic) NSString *noxusPlayBlockLogKey;
@property (copy, nonatomic) NSString *outBackgroundColor;
@property (nonatomic) BOOL isNewUser;

- (void).cxx_destruct;

@end
