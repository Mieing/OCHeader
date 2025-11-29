@class IESLiveGuideAudioKTVBackgroundView, IESLiveGuideAudioKTVBackgroundViewModel, IESLiveInteractThemeManager, NSString;

@interface IESLiveGuideAudioKTVBackgroundFragment : IESLiveGuideComponent <IESLiveGuideAudioKTVBackgroundRouter, IESLiveGuideAudioKTVBackgroundViewDataSource, IESLiveGuideActions, IESLiveAnchorGuideInteractiveSceneAction>

@property (retain, nonatomic) IESLiveGuideAudioKTVBackgroundViewModel *viewModel;
@property (retain, nonatomic) IESLiveGuideAudioKTVBackgroundView *backgroundView;
@property (retain, nonatomic) IESLiveInteractThemeManager *manager;
@property (nonatomic) unsigned long long liveType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)bindViewModel;
- (id)avatarUrls;
- (void)liveTypeDidChange:(unsigned long long)a0;
- (id)defaultBackgroundImage;
- (void)showThemePanel;
- (BOOL)isAudioThemeEnabled;
- (void)didSelectSubscene:(unsigned long long)a0;
- (BOOL)enablePicker;
- (void)handleBottomPanelDisplay:(BOOL)a0;
- (void)liveTypeChangeAction:(unsigned long long)a0;
- (void)changeBackgroundIfNeeded;
- (void)dataInit;
- (void)createBackgroundViewIfNeeded;
- (void)setBackgroundChange;
- (void).cxx_destruct;
- (void)updateBackgroundColor;
- (id)defaultBackgroundColor;
- (BOOL)isSmallScreen;

@end
