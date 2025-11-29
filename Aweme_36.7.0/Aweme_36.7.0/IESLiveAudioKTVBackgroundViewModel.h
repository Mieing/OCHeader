@class HTSEventContext, NSString, NSArray, RACSignal, HTSLiveAudioBGData, RACBehaviorSubject, IESLiveInteractThemeManager, UIColor;
@protocol IESLiveRoomService, IESLiveSubscription;

@interface IESLiveAudioKTVBackgroundViewModel : NSObject <HTSLiveAudienceActions>

@property (nonatomic) BOOL hasReceivedMessage;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) BOOL themeEnabled;
@property (nonatomic) double themeStartTime;
@property (copy, nonatomic) NSArray *avatarURLs;
@property (copy, nonatomic) NSArray *imageAnimatedBg;
@property (copy, nonatomic) NSArray *imageNormalAvatar;
@property (copy, nonatomic) NSArray *imageStartupAvatar;
@property (copy, nonatomic) NSArray *imageStaticBg;
@property (copy, nonatomic) NSArray *imageRobSongBg;
@property (copy, nonatomic) NSString *currentThemeImageUri;
@property (retain, nonatomic) RACBehaviorSubject *backgroundChangedSubject;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) HTSLiveAudioBGData *currentTheme;
@property (retain, nonatomic) HTSLiveAudioBGData *showingTheme;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) id<IESLiveSubscription> showingThemeDisposable;
@property (retain, nonatomic) UIColor *statusBarBackgroundColor;
@property (retain, nonatomic) UIColor *contentBackgroundColor;
@property (retain, nonatomic) UIColor *singBtnGradientStartColor;
@property (retain, nonatomic) UIColor *singBtnGradientEndColor;
@property (weak, nonatomic) IESLiveInteractThemeManager *manager;
@property (nonatomic) BOOL isInKTV;
@property (readonly, nonatomic) RACSignal *backgroundChangedSignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)componentDidMount;
- (void)componentWillUnmount;
- (void)setupTheme;
- (void)liveWillEndWithReason:(unsigned long long)a0;
- (void)didUpdateRoom:(id)a0;
- (void)refreshTheme:(id)a0;
- (id)initWithRoom:(id)a0 trackContext:(id)a1 componentContext:(id)a2 themeManager:(id)a3;
- (void)themeEntranceDidClick:(BOOL)a0;
- (void)themePanelDidHide;
- (void)updateLocalThemeWithCompletion:(id /* block */)a0;
- (void)updateCurrentTheme:(id)a0 needReport:(BOOL)a1;
- (void)p_trackThemeEntranceDidClick:(BOOL)a0;
- (void)p_trackComponentWillUnmount;
- (void)p_updateCurrentTheme:(id)a0;
- (void)p_onThemeDataUpdate:(id)a0;
- (void)p_updateCurrentThemeForAnchor:(id)a0 needReport:(BOOL)a1;
- (id)ktvCurrentTheme;
- (void)isInKTVScene:(BOOL)a0;
- (void)didStartSceneDuringStart:(BOOL)a0;
- (void)didEndScene;
- (unsigned long long)getBGScene;
- (BOOL)isKTVTheme:(id)a0;
- (void)p_trackThemeDidChangeForAnchor:(id)a0;
- (void)p_updateCurrentThemeForAnchor:(id)a0;
- (void)p_setTheme:(id)a0 completion:(id /* block */)a1;
- (void)p_updateCurrentThemeForAudience:(id)a0;
- (void)p_trackThemeWillChangeForAudience:(id)a0;
- (void)p_trackThemeWillChangeForAnchor:(id)a0;
- (void)p_trackThemeDidChangeForAudience:(id)a0;
- (void)setUp;
- (void).cxx_destruct;
- (void)dealloc;

@end
