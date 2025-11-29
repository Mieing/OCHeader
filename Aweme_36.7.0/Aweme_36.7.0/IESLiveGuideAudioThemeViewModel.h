@class HTSEventContext, RACDisposable, NSArray, IESLiveGuideModel, IESLiveAudioBackgroundViewModel, HTSLiveAudioBGData, UIImage, IESLiveInteractThemeManager, IESLiveAudioThemePanelViewModel;

@interface IESLiveGuideAudioThemeViewModel : NSObject

@property (copy, nonatomic) NSArray *imageNormalAvatar;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveAudioThemePanelViewModel *panelViewModel;
@property (retain, nonatomic) IESLiveGuideModel *guideModel;
@property (retain, nonatomic) RACDisposable *themeDisposable;
@property (retain, nonatomic) HTSLiveAudioBGData *currentTheme;
@property (nonatomic) BOOL loadingTheme;
@property (retain, nonatomic) IESLiveAudioBackgroundViewModel *backgroundViewModel;
@property (readonly, nonatomic) BOOL themeEnabled;
@property (readonly, nonatomic) UIImage *ugcImage;
@property (nonatomic) unsigned long long previousScene;
@property (nonatomic) unsigned long long currentScene;
@property (weak, nonatomic) IESLiveInteractThemeManager *manager;

- (void)didSetAttachingDIContext;
- (void)componentDidMount;
- (id)initWithGuideModel:(id)a0 trackContext:(id)a1;
- (id)willOpenThemePanel;
- (void)reloadPanelViewModelIfNeeded:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)fetchBgListIfNeeded:(unsigned long long)a0;
- (void)fetchBgListIfNeeded:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)updateCurrentTheme:(id)a0;
- (void).cxx_destruct;
- (void)reload:(id /* block */)a0;

@end
