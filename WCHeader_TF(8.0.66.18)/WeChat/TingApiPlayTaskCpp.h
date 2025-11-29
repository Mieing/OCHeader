@class NSString;

@interface TingApiPlayTaskCpp : UnitRCObjcBaseProxyClass <TingApiPlayTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getId;
- (int)playingIndex;
- (id)playingTingItem;
- (id)playingContext;
- (void)play:(int)a0;
- (void)playWithId:(id)a0;
- (void)stop;
- (void)stopWithContext:(id)a0;
- (void)pause;
- (void)pause:(id)a0;
- (void)resume;
- (void)resume:(id)a0;
- (void)seek:(long long)a0;
- (void)setPlayRate:(float)a0;
- (void)setPlayMode:(int)a0;
- (void)setPlayMode:(int)a0 saveSetting:(BOOL)a1;
- (void)prev;
- (BOOL)hasPrev;
- (void)next;
- (BOOL)hasNext;
- (id)getNextTapeDelegate;
- (int)getPlayMode;
- (int)getPlayerState;
- (int)status;
- (long long)getPlayerPosition;
- (long long)getPlayerDisplayTimeMs;
- (long long)getPlayerDuration;
- (long long)getPlayerDownloadPercent;
- (float)getPlayRate;
- (void)setTimbre:(id)a0;
- (id)getTimbre;
- (void)setRandomPlaylist:(BOOL)a0;
- (void)setRandomPlaylist:(BOOL)a0 saveSetting:(BOOL)a1;
- (BOOL)getRandomPlaylist;
- (void)refreshPlayList;
- (void)updateTaskConfig:(id)a0;
- (id)getTaskConfig;
- (id)generateReportContext;
- (void)playWithList:(id)a0 index:(int)a1;
- (id)getPlayingListSource;
- (void)setNextListSource:(id)a0;
- (id)getNextListSource;
- (void)addPlayTaskListener:(id)a0;
- (void)removePlayTaskListener:(id)a0;
- (void)addPlayerListener:(id)a0;
- (void)removePlayerListener:(id)a0;
- (void)clearData;

@end
