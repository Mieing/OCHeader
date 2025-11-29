@class IESLiveInterativeTimeOutConfig, NSString, IESLiveInteractAudioReportConfig, IESLiveInteractiveStreamProfile;
@protocol IESLiveLinkmicCanvasLayoutProvider, IESLiveInteractiveLocalLayout, IESLiveInteractiveStreamLayout;

@interface IESLiveLinkmicLinkerAdvanceConfig : IESLiveLinkmicLinkerConfig

@property (copy, nonatomic) NSString *basePath;
@property (nonatomic) BOOL openInviteTimer;
@property (nonatomic) BOOL openApplyTimer;
@property (readonly, nonatomic) IESLiveInterativeTimeOutConfig *timeOutConfig;
@property (weak, nonatomic) Class modelClass;
@property (retain, nonatomic) id<IESLiveInteractiveStreamLayout> streamLayout;
@property (retain, nonatomic) id<IESLiveInteractiveLocalLayout> localLayout;
@property (retain, nonatomic) id<IESLiveLinkmicCanvasLayoutProvider> layoutProvider;
@property (nonatomic) long long clientMode;
@property (retain, nonatomic) IESLiveInteractiveStreamProfile *streamProfile;
@property (retain, nonatomic) IESLiveInteractAudioReportConfig *audioReportConfig;
@property (nonatomic) BOOL clientMixStream;
@property (nonatomic) BOOL enableCustomMixPriority;
@property (nonatomic) long long mixPriority;
@property (nonatomic) BOOL reportRTCInfo;

- (void).cxx_destruct;
- (id)init;

@end
