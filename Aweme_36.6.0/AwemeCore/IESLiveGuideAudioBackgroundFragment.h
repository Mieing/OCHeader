@class IESLiveLinkmicSettingApi, NSString, NSDictionary, IESLiveGuideAudioThemeViewModel, CreateInfoResponse_CreateInfo, IESLiveInteractThemeManager, NSMutableArray, IESLiveGuideToolBarItem, NSNumber;

@interface IESLiveGuideAudioBackgroundFragment : IESLiveGuideComponent <IESLiveGuideAudioBackgroundService, IESLiveGuideAudioBackgroundViewDataSource, IESLiveGuideActions, IESLiveAnchorGuideInteractiveSceneAction, IESLiveAudioBackgroundViewDataSource>

@property (retain, nonatomic) IESLiveGuideAudioThemeViewModel *viewModel;
@property (retain, nonatomic) NSDictionary *sceneToBGViewDic;
@property (retain, nonatomic) CreateInfoResponse_CreateInfo *openLiveModel;
@property (retain, nonatomic) IESLiveGuideToolBarItem *guideToolBarItem;
@property (retain, nonatomic) IESLiveInteractThemeManager *manager;
@property (retain, nonatomic) NSString *showingBarImageUri;
@property (retain, nonatomic) IESLiveLinkmicSettingApi *api;
@property (retain, nonatomic) NSMutableArray *hasShowedKeys;
@property (retain, nonatomic) NSMutableArray *hasReportShowedKeys;
@property (retain, nonatomic) NSNumber *currentAudioChatRoomUILayout;
@property (nonatomic) unsigned long long selectedScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)bindViewModel;
- (id)eventPage;
- (id)guideContentView;
- (id)avatarUrls;
- (void)liveTypeDidChange:(unsigned long long)a0;
- (id)getTrackParamsWithItem:(id)a0;
- (id)imageStaticBg;
- (id)imageNormalAvatar;
- (BOOL)isAudioBackgroundAnimatedEnabled;
- (BOOL)isAudioThemeCacheAllFrameEnabled;
- (BOOL)audioThemeCacheFreeMemoryRatio;
- (BOOL)isAudioThemeUseStaticBackground;
- (BOOL)mutliAudioChatIsSquareLayout;
- (void)showThemePanel;
- (BOOL)isAudioThemeEnabled;
- (BOOL)canAddRequestParamsForUILayout;
- (void)openLiveModelDidUpdate:(id)a0;
- (void)didSelectSubscene:(unsigned long long)a0;
- (BOOL)enablePicker;
- (void)handleBottomPanelDisplay:(BOOL)a0;
- (id)ugcImage;
- (id)functionTypeWithScene:(unsigned long long)a0;
- (void)liveTypeChangeAction:(unsigned long long)a0;
- (void)fetchLatestBg;
- (void)didReceiveInitInfoSetting:(id)a0;
- (void)fetchSettingIfNeeded;
- (void)trackThemeEntranceDidShow:(BOOL)a0;
- (id)itemGuildKeyForUri:(id)a0;
- (void)trackThemeDidSelect:(id)a0;
- (void)trackBackgroundShow;
- (void)changeBackgroundIfNeeded;
- (void)relayoutSubsceneViewIfNeeded;
- (void)relayoutWithScene:(unsigned long long)a0;
- (void)trackThemeEntranceDidClick:(BOOL)a0;
- (id)defalutImage;
- (BOOL)isIPhone6Display;
- (id)multiLinkGameBgUrl;
- (id)multiLinkGameDefaultBgUrl;
- (void).cxx_destruct;
- (BOOL)isSmallScreen;
- (void)setupViews;

@end
