@class NSString, IESLiveAudioKTVBackgroundViewModel, IESLiveInteractThemeManager, HTSEventForwardingView, IESLiveAudioKTVThemePanelViewModel;

@interface IESLiveAudioKTVBackgroundFragment : IESLiveRoomComponent <IESLiveAudioKTVBackgroundRouter, IESLiveSocialInteractAction, HTSLiveAudioBackgroundTrackRouter>

@property (retain, nonatomic) IESLiveAudioKTVBackgroundViewModel *viewModel;
@property (retain, nonatomic) HTSEventForwardingView *backgroundView;
@property (retain, nonatomic) IESLiveInteractThemeManager *manager;
@property (retain, nonatomic) IESLiveAudioKTVThemePanelViewModel *panelViewModel;
@property (nonatomic) BOOL isCloseLive;
@property (nonatomic) BOOL isDuringStart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)hideComponent;
- (void)showComponent;
- (void)remoteRoomDataReady:(id)a0;
- (void)currentFlattenSceneDidChangedFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void)bindViewModel;
- (id)soundAnimationURLs;
- (id)showingTheme;
- (void)beginToClose;
- (id)generateThemePanelViewModel;
- (void)showKTVThemePanel:(BOOL)a0;
- (id)ktvStageBackgroundColor;
- (id)ktvRobSongImageURLs;
- (void)updateLocalThemeWithCompletion:(id /* block */)a0;
- (void)endSocialInteractWithScene:(unsigned long long)a0;
- (void)startSocialInteractWithScene:(unsigned long long)a0;
- (id)ktvStageView;
- (id)getKtvCurrentTheme;
- (void).cxx_destruct;
- (id)currentTheme;

@end
