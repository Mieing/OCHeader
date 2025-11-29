@class NSString, IESLiveLinkRTCSignalUser, IESLiveLinkLiveRTCVideoBusinessParam;

@interface IESLiveLinkLiveCoreConfig : NSObject

@property (nonatomic) long long playMode;
@property (nonatomic) BOOL needResetLiveCoreInput;
@property (nonatomic) long long interactMixType;
@property (nonatomic) BOOL needSecondMix;
@property (nonatomic) BOOL needBypassFOV;
@property (retain, nonatomic) IESLiveLinkRTCSignalUser *currentUser;
@property (copy, nonatomic) NSString *project_key;
@property (retain, nonatomic) IESLiveLinkLiveRTCVideoBusinessParam *userCustomizedProfile;
@property (nonatomic) BOOL isLandscapeVideo;
@property (copy, nonatomic) NSString *abTestConfig;
@property (nonatomic) BOOL enableSingleChorusFixedAVSync;
@property (nonatomic) long long singleChorusFrameBufferMaxAllowSize;
@property (nonatomic) long long singleChorusAuxMaxAllowDelay;

- (void).cxx_destruct;

@end
