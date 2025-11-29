@class NSString;

@interface TingPlayTaskCpp : TingBasePlayTaskCpp <TingPlayTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)create:(id)a0;

- (void)setPlayer:(id)a0;
- (void)createTTSPlayer;
- (id)getPlayer;
- (void)setPreloadPlayer:(id)a0;
- (id)getLyricDataService;
- (void)setAssociatedPlayerVolume:(float)a0;
- (void)setAudioFocus:(id)a0;
- (void)setEnableBackupItemFetching:(BOOL)a0;
- (void)setDisableAuditoryEnhance:(BOOL)a0;
- (void)setApplyAuditoryEnhance:(BOOL)a0 mode:(int)a1;
- (id)getAuditoryEnhanceEffectArgs;
- (void)setEnableAutoPlayRecommendList:(BOOL)a0 saveSettings:(BOOL)a1;
- (BOOL)getEnableAutoPlayRecommendList;
- (void)refreshMembershipOpenStatusIfNeeded;
- (id)playingItem;
- (BOOL)loadItem:(int)a0;
- (void)loadItemAsync:(int)a0 callback:(id /* block */)a1;
- (BOOL)loadItemWithId:(id)a0;
- (void)loadItemWithIdAsync:(id)a0 callback:(id /* block */)a1;
- (void)setPlayRateGlobal:(float)a0 inGlobal:(BOOL)a1;
- (void)updateTingItem:(id)a0;
- (void)nextItemOrTape;
- (BOOL)isPlayModeInteractionEnabled;
- (id)getPlayList;
- (id)getTapeInfo;
- (id)getTaskSnapshot;
- (void)restorePlayListInfo;
- (void)addPlayTaskStateListener:(id)a0;
- (void)addWeakPlayTaskStateListener:(id)a0;
- (void)removePlayTaskStateListener:(id)a0;
- (void)clearPlayTaskStateListener;
- (void)clear;
- (void)loadTaskService:(id)a0;
- (void)loadList:(id)a0 index:(int)a1;
- (void)loadTaskServiceAsync:(id)a0 callback:(id /* block */)a1;
- (void)playWithContext:(id)a0;
- (void)switchToMVContext:(id)a0;
- (void)checkUpdatePlayingItem;
- (void)setPlayBackgroundStatus:(BOOL)a0;
- (BOOL)playBackgroundStatus;
- (id)getChatRoomPluginService;
- (void)setReportService:(id)a0;
- (BOOL)canPlayNextRecommendTape;
- (BOOL)previousOrSeekToStart;
- (int)getPlayerState;
- (long long)getPlayerPosition;
- (long long)getPlayerDisplayTimeMs;
- (long long)getPlayerDuration;
- (long long)getPlayerDownloadPercent;
- (float)getPlayRate;
- (void)addPlayerStateClient:(id)a0;
- (void)removePlayerStateClient:(id)a0;

@end
