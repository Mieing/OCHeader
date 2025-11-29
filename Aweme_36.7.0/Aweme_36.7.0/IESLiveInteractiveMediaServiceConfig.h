@class IESLiveInteractiveSignalConfig, NSString, IESLiveInteractiveStreamProfile, IESLiveInteractiveMediaExtInfoManager, NSDictionary, IESLiveInteractiveLinkService, IESLiveInteractAudioReportConfig, NSNumber, IESLiveInteractiveMediaExtInfoParams;
@protocol IESLiveInteractiveLocalLayout, IESLiveInteractiveStreamLayout, IESLiveRoomService, IESLiveInteractiveUserService;

@interface IESLiveInteractiveMediaServiceConfig : NSObject <IESLivePushStreamEntryConfig, IESLiveLinkmicMediaServiceConfig>

@property (nonatomic) unsigned long long scene;
@property (readonly, nonatomic) unsigned long long flattenScene;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (nonatomic) unsigned long long vendor;
@property (nonatomic) long long seiVersion;
@property (copy, nonatomic) NSString *channelID;
@property (copy, nonatomic) NSString *linkmicID;
@property (copy, nonatomic) NSString *rtcExtInfo;
@property (retain, nonatomic) NSDictionary *rtcExtraInfo;
@property (retain, nonatomic) NSDictionary *liveCoreExtraInfo;
@property (nonatomic) BOOL clientMixStream;
@property (nonatomic) BOOL isAutoMute;
@property (nonatomic) BOOL isUserNotVisibilty;
@property (retain, nonatomic) IESLiveInteractiveStreamProfile *streamProfile;
@property (nonatomic) BOOL enableAudioCaptureInBackground;
@property (copy, nonatomic) NSString *linkerSessionId;
@property (retain, nonatomic) NSNumber *invisibleWhenJoinRTC;
@property (retain, nonatomic) NSNumber *autoSubscribeAudioWhenJoinRTC;
@property (retain, nonatomic) NSNumber *autoSubscribeVideoWhenJoinRTC;
@property (nonatomic) BOOL isStartInteractUnpublish;
@property (nonatomic) long long clientMode;
@property (nonatomic) BOOL useBackupStream;
@property (nonatomic) BOOL reportRTCInfo;
@property (weak, nonatomic) id<IESLiveInteractiveUserService> userService;
@property (weak, nonatomic) id<IESLiveInteractiveStreamLayout> streamLayout;
@property (weak, nonatomic) id<IESLiveInteractiveLocalLayout> localLayout;
@property (retain, nonatomic) IESLiveInteractiveLinkService *linkService;
@property (retain, nonatomic) IESLiveInteractAudioReportConfig *audioReportConfig;
@property (retain, nonatomic) IESLiveInteractiveSignalConfig *signalConfig;
@property (retain, nonatomic) IESLiveInteractiveMediaExtInfoManager *extInfoManager;
@property (retain, nonatomic) IESLiveInteractiveMediaExtInfoParams *extInfoParams;
@property (nonatomic) BOOL updateLayoutOnlyWhenAudioStateChanges;
@property (nonatomic) BOOL pushSEIWhenSpeakStateChange;
@property (nonatomic) BOOL isPublisher;
@property (nonatomic) BOOL enableStopCaptureAudio;
@property (nonatomic) BOOL enableCheckLinkers;
@property (retain, nonatomic) NSNumber *customPlayMode;
@property (nonatomic) long long shareVideoVersion;
@property (nonatomic) BOOL enablePushEffectedFrame;
@property (copy, nonatomic) NSDictionary *sdkParams;
@property (nonatomic) BOOL enableCustomMixPriority;
@property (nonatomic) long long mixPriority;
@property (nonatomic) BOOL needSecondMix;
@property (nonatomic) BOOL needBypassFOV;
@property (copy, nonatomic) NSString *customPublishUrl;
@property (nonatomic) BOOL ignoreLiveCoreStreamingParamsUpdateWhenMixOnServer;
@property (nonatomic) BOOL notStartAudioCaptureDefault;
@property (nonatomic) BOOL disableSignalJoinRTCByAudience;
@property (nonatomic) long long pushStreamMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
