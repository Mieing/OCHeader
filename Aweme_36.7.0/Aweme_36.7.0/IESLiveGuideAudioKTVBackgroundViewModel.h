@class HTSEventContext, IESLiveAudioKTVThemePanelViewModel, NSArray, IESLiveGuideModel, RACDisposable, RACSubject, HTSLiveAudioBGData, RACSignal, IESLiveGuideAudioKTVApi, IESLiveInteractThemeManager, IESLiveKtvAtmosphereVideoInfo, UIColor;

@interface IESLiveGuideAudioKTVBackgroundViewModel : NSObject

@property (copy, nonatomic) NSArray *imageStaticBg;
@property (copy, nonatomic) NSArray *imageAnimatedBg;
@property (copy, nonatomic) NSArray *imageNormalAvatar;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveAudioKTVThemePanelViewModel *panelViewModel;
@property (retain, nonatomic) IESLiveGuideModel *guideModel;
@property (retain, nonatomic) RACDisposable *themeDisposable;
@property (retain, nonatomic) RACSubject *backgroundChangedSubject;
@property (retain, nonatomic) UIColor *contentBackgroundColor;
@property (weak, nonatomic) IESLiveInteractThemeManager *manager;
@property (retain, nonatomic) HTSLiveAudioBGData *currentTheme;
@property (nonatomic) BOOL loadingTheme;
@property (retain, nonatomic) IESLiveGuideAudioKTVApi *api;
@property (retain, nonatomic) IESLiveKtvAtmosphereVideoInfo *defaultInfo;
@property (readonly, nonatomic) BOOL themeEnabled;
@property (readonly, nonatomic) RACSignal *backgroundChangedSignal;
@property (nonatomic) unsigned long long previousScene;
@property (nonatomic) unsigned long long currentScene;
@property (copy, nonatomic) NSArray *imageStaticBgForPartyKTV;

- (id)generateThemePanelViewModel;
- (id)willOpenThemePanel;
- (void)didSwitchToAudioTab;
- (id)initWithGuideModel:(id)a0 trackContext:(id)a1 themeManager:(id)a2;
- (void)requestChorusBG:(id /* block */)a0;
- (BOOL)isCustomTheme;
- (void)reloadDefaultInfo;
- (void)reloadPanelViewModelIfNeeded:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
