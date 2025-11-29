@class HTSLiveEpisode, NSString;
@protocol IESLiveVisibleScopePreferenceService, IESLivePlaybackSettingsAPI;

@interface IESLivePlaybackSettingsFragment : IESLivePlaybackComponent <IESLivePlaybackComponentLifeCycle>

@property (nonatomic) BOOL disableGestures;
@property (nonatomic) BOOL isAlertShowing;
@property (retain, nonatomic) HTSLiveEpisode *episode;
@property (retain, nonatomic) id<IESLivePlaybackSettingsAPI> settingsApi;
@property (retain, nonatomic) id<IESLiveVisibleScopePreferenceService> visibleService;
@property (nonatomic) long long orientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)componentOrientationChanged:(long long)a0;
- (void)didUpdatePlaybackEpisode:(id)a0;
- (void)initVisibleAndDeleteToolBarIfNeed;
- (id)createToolBarWithType:(long long)a0;
- (void)deleteCurrentEpisode;
- (void)exitCurrentRoom;
- (void)openVisibleSettingsPanel;
- (void)tryDeleteCurrentEpisode;
- (void)visibleSettigsWillShow;
- (void)deleteWillShow;
- (void).cxx_destruct;
- (BOOL)isOwner;

@end
