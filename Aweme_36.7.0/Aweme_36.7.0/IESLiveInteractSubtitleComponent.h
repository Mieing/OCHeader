@class IESLiveInteractSubtitleViewModel, NSString, IESLiveInteractSubtitleApi, IESLiveInteractSubtitleView, IESLiveInteractSubtitleConfig;
@protocol IESLiveInteractEnlargeRouter, IESLiveInteractionLayoutRouter, IESLiveAudioSubtitleService, IESLiveInteractDynamicContainerProvider, IESLiveInteractionLinkerService;

@interface IESLiveInteractSubtitleComponent : IESLiveInteractComponentBase <IESLiveInteractSubtitleRouter, IESLiveInteractionLinkerServiceAction, IESLiveToolbarComponentHandler, HTSLiveCleanScreenActions, IESLivePaidStreamAction, IESLiveScreenRecordActions, IESLiveSocialInteractPreLoadExAction, IESLiveAudioSubtitleActions>

@property (retain, nonatomic) IESLiveInteractSubtitleView *subtitleView;
@property (retain, nonatomic) IESLiveInteractSubtitleViewModel *viewModel;
@property (retain, nonatomic) IESLiveInteractSubtitleApi *api;
@property (retain, nonatomic) IESLiveInteractSubtitleConfig *config;
@property (nonatomic) BOOL pressPublicScreen;
@property (nonatomic) BOOL shouldPressPublicScreen;
@property (nonatomic) BOOL subtitleNeedHide;
@property (nonatomic) BOOL isRecording;
@property (nonatomic) BOOL padEnableStageSubtitle;
@property (weak, nonatomic) id<IESLiveInteractionLinkerService> linker;
@property (weak, nonatomic) id<IESLiveInteractDynamicContainerProvider> dynamicProvider;
@property (weak, nonatomic) id<IESLiveInteractEnlargeRouter> enlargeRouter;
@property (weak, nonatomic) id<IESLiveInteractionLayoutRouter> layoutRouter;
@property (weak, nonatomic) id<IESLiveAudioSubtitleService> subtitleService;
@property (nonatomic) long long lastFaceOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (void)componentUnmount;
- (void)currentLayoutUIDidUpdateFrom:(id)a0 to:(id)a1;
- (void)currentLayoutUIDidReload;
- (void)updateType:(long long)a0;
- (void)paidStreamTrialDidStart:(long long)a0;
- (void)paidStreamTrialDidStop:(long long)a0;
- (void)paidStreamTrialDidInstall:(long long)a0 reason:(unsigned long long)a1;
- (void)paidStreamTrialDidFinish:(long long)a0 reason:(unsigned long long)a1;
- (void)changeCleanScreenMode:(long long)a0;
- (void)paidStreamTrialDidPromised:(long long)a0;
- (void)didStartRecordingWithSource:(id)a0;
- (void)didStopRecordingOfSource:(id)a0;
- (BOOL)needPressPublicScreen;
- (void)interactionLinkerServiceInteractDidStart:(id)a0;
- (void)interactionLinkerServiceInteractWillEnd:(id)a0;
- (void)componentBindContext;
- (void)deleteSubtitleView;
- (void)needUpdateCoordinate;
- (BOOL)isAudioChatStageShowing;
- (id)filterSubtitleIfNeeded:(id)a0;
- (BOOL)useOldSubtitleView;
- (void)onSubtitleStarted:(id)a0;
- (void)onSubtitleStopped;
- (void)onSubtitleUpdate:(id)a0;
- (void)onSubtitleNeedUpdateConfig:(id)a0 type:(BOOL)a1 style:(BOOL)a2 position:(BOOL)a3;
- (id)getUserType;
- (void)showSubtitleView;
- (void)componentStartLayout:(id)a0;
- (BOOL)customizeStreamModeOpen;
- (void)anchorObserveKTVStatus;
- (void)dismissSubtitleView:(BOOL)a0;
- (void)updatePublicScreenHeightIfNeeded:(BOOL)a0;
- (void)needHideSubtitleView:(BOOL)a0;
- (void)hideSubtitleView:(BOOL)a0 inPaidScene:(long long)a1;
- (void)keyboardDidHide:(id)a0;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)a0;
- (void)updateStyle:(long long)a0;

@end
