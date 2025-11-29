@class NSString, IESLiveExclusiveService;

@interface IESLiveInteractionKTVCommonServiceImpl : NSObject <IESLiveInteractionKTVCommonService>

@property (retain, nonatomic) IESLiveExclusiveService *ktvExclusiveService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)fastStartSelectedOrderTabWithParams:(id)a0;
- (void)showSelectedOrderTabWithParams:(id)a0;
- (BOOL)isLinkMicGuestWithUid:(id)a0;
- (void)trackHighScoreMarkClickWithTargetUserId:(id)a0 source:(id)a1;
- (void)trackHighScoreMarkShowWithTargetUserId:(id)a0 source:(id)a1;
- (void)showKTVHighScorePanelWithTargetUserName:(id)a0 targetUserId:(id)a1 source:(id)a2;
- (BOOL)isMultiAudioKTV;
- (void).cxx_destruct;
- (unsigned long long)currentScene;

@end
