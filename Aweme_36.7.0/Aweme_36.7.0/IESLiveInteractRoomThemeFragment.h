@class NSMutableDictionary, IESLiveInteractRoomThemeStore, IESLiveInteractThemeManager, HTSLiveToolbarItem, NSString;
@protocol IESLiveSubscription;

@interface IESLiveInteractRoomThemeFragment : IESLiveRoomComponent <IESLiveRoomThemeRouter, IESLiveBigPartyActions, IESLiveInteractionPlaymodeActions, IESLiveSocialInteractPreLoadExAction>

@property (retain, nonatomic) IESLiveInteractRoomThemeStore *store;
@property (retain, nonatomic) NSMutableDictionary *roomThemeDatas;
@property (nonatomic) double themeStartTime;
@property (retain, nonatomic) IESLiveInteractThemeManager *manager;
@property (retain, nonatomic) HTSLiveToolbarItem *themeItem;
@property (retain, nonatomic) id<IESLiveSubscription> showingThemeDisposable;
@property (retain, nonatomic) NSString *showingBarImageUri;
@property (nonatomic) BOOL hasPassReportDurationForStart;
@property (nonatomic) BOOL hasSetThemeForStart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentRefresh;
- (void)currentServerLayoutDidChangedFrom:(id)a0 to:(id)a1;
- (void)showThemePanel;
- (void)refreshTheme:(id)a0;
- (void)interactionPlaymodeDidStart:(int)a0;
- (void)interactionPlaymodeDidEnd:(int)a0;
- (void)showThemeEntranceIfNeeded;
- (void)fetchLatestBg;
- (void)hideThemePanel;
- (id)generateThemePanelViewModel;
- (id)itemGuildKeyForUri:(id)a0 isPre:(BOOL)a1;
- (void)onThemeitemShow;
- (void)updateThemeItemInToolBar;
- (void)p_trackComponentWillUnmount;
- (void)trackThemeDurationWithLayout:(id)a0;
- (void)p_trackAnchorThemeDurationWithLayout:(id)a0 theme:(id)a1;
- (void)p_trackAudienceThemeDurationWithLayout:(id)a0 theme:(id)a1;
- (void)p_onThemeDataUpdate:(id)a0;
- (id)roomThemeData:(long long)a0;
- (void)updateAnchorRoomThemeData:(id)a0 forBgType:(int)a1;
- (id)audienceRoomThemeDataForBgType:(unsigned long long)a0;
- (void)addAudienceRoomThemeData:(id)a0;
- (id)audienceRoomThemeData;
- (void)showAudienceRoomThemeData:(id)a0;
- (void)setThemeDataForStart:(id)a0;
- (void)trackThemeDurationWithCurrentLayout;
- (void)trackThemeSelect;
- (void)p_trackThemeDidChangeForAnchor:(id)a0 withLayout:(id)a1;
- (void)p_trackThemeDidChangeForAudience:(id)a0 withLayout:(id)a1;
- (void)trackThemeSelectWithLayout:(id)a0;
- (void).cxx_destruct;
- (BOOL)isAnchor;
- (id)currentTheme;

@end
