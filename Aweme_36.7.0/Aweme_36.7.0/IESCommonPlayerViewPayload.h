@class NSString;

@interface IESCommonPlayerViewPayload : NSObject

@property (nonatomic) unsigned long long playerType;
@property (nonatomic) BOOL enableHardDecode;
@property (nonatomic) BOOL enableH256Decode;
@property (nonatomic) BOOL enableTTPlayer;
@property (nonatomic) BOOL repeated;
@property (nonatomic) BOOL useCache;
@property (nonatomic) BOOL ownPlayerPlayWithURLs;
@property (nonatomic) BOOL truncateTailWhenRepeated;
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
@property (nonatomic) unsigned long long netWorkType;
@property (nonatomic) BOOL disablePreemptAudioFocusIfMute;

- (void).cxx_destruct;

@end
