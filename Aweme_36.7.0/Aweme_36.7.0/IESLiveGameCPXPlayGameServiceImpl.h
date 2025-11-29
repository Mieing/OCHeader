@class NSString, IESLivePrivacyPolicyToken;

@interface IESLiveGameCPXPlayGameServiceImpl : NSObject <IESGCPLiveXPlayGameService>

@property (retain, nonatomic) IESLivePrivacyPolicyToken *privacyToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)currentUserLinkType;
- (void)liveWillEnterNewVCWithoutPause;
- (void)liveDidDismissXplayViewController;
- (BOOL)liveShouldShowFullScreenButton;
- (void)liveSetShouldShowFullScreenButton:(BOOL)a0;
- (id)liveRootViewController;
- (id)liveCurrentShowViewController;
- (void)notifyContainerWithParams:(id)a0;
- (BOOL)isUserInLinkmic;
- (void)startAudioSinkStream:(BOOL)a0;
- (void)stopAudioSinkStream;
- (void)pushAudioSinkFrame:(id)a0 timestamp:(long long)a1;
- (void).cxx_destruct;

@end
