@class IESLiveMultiAudioQuickStartModel, IESLiveLinkMicAudienceGetLinkmicInfoWithRtcInfoResponse_ResponseData, HTSLiveAudioBGData, NSString;

@interface IESLiveInteractAnchorStartFragment : IESLiveRoomComponent <IESLiveInteractAnchorStartService>

@property (nonatomic) long long startLiveType;
@property (retain, nonatomic) IESLiveMultiAudioQuickStartModel *quickStartModel;
@property (retain, nonatomic) IESLiveLinkMicAudienceGetLinkmicInfoWithRtcInfoResponse_ResponseData *resumeResponse;
@property (nonatomic) BOOL avatarShow;
@property (nonatomic) BOOL backgroundViewShow;
@property (retain, nonatomic) HTSLiveAudioBGData *audioTheme;
@property (nonatomic) BOOL hasHandleAnchorRoomContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (unsigned long long)originScene;
- (void)handleAnchorRoomContext;
- (id)supportResumeScene;
- (void).cxx_destruct;

@end
