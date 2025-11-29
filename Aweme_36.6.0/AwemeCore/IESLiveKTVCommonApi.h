@class NSMutableDictionary, IESLiveAPISpecialParamsService;

@interface IESLiveKTVCommonApi : IESLiveKTVBaseApi

@property (retain, nonatomic) NSMutableDictionary *requestingStatusMap;
@property (retain, nonatomic) IESLiveAPISpecialParamsService *specialParamsService;

- (void)requestFavoriteMusic:(id)a0 completion:(id /* block */)a1;
- (void)requestHighScoreCountWithTargetUid:(id)a0 completion:(id /* block */)a1;
- (id)initWithRoomId:(id)a0 userId:(id)a1 trackContext:(id)a2;
- (void)fetchLiveMusicListWithCategoryName:(id)a0 firstLevelTab:(int)a1 mode:(long long)a2 page:(long long)a3 comletionBlock:(id /* block */)a4;
- (void)fetchLiveMusicListWithCategoryName:(id)a0 firstLevelTab:(int)a1 mode:(long long)a2 page:(long long)a3 pageNumber:(id)a4 inplaceSongId:(id)a5 queryId:(id)a6 extraParams:(id)a7 comletionBlock:(id /* block */)a8;
- (void)chooseSong:(id)a0 mode:(long long)a1 completion:(id /* block */)a2;
- (void)fetchLiveMusicListWithCategoryName:(id)a0 firstLevelTab:(int)a1 mode:(long long)a2 page:(long long)a3 pageNumber:(id)a4 comletionBlock:(id /* block */)a5;
- (void)fetchKTVTabListWithFirstLevelTab:(int)a0 mode:(long long)a1 completion:(id /* block */)a2;
- (void)fetchKTVSongListWithCategoryName:(id)a0 firstLevelTab:(int)a1 mode:(long long)a2 page:(long long)a3 pageNumber:(id)a4 inplaceSongId:(id)a5 queryId:(id)a6 extraParams:(id)a7 completion:(id /* block */)a8;
- (void)fetchMultiKTVOrderListComletion:(id /* block */)a0;
- (void)addSongRequestWithParams:(id)a0 completion:(id /* block */)a1;
- (BOOL)isClipSing:(id)a0;
- (void)fetchSungSongListWithLastItemId:(id)a0 completion:(id /* block */)a1;
- (void)fetchTuningEffectList:(id /* block */)a0;
- (void)updateSingerState:(BOOL)a0 songID:(id)a1 completion:(id /* block */)a2;
- (void)reportSingStatusWithSongID:(id)a0 singerID:(id)a1 completion:(id /* block */)a2;
- (id)fetchMultiKTVOrderListSignal;
- (void)addSong:(id)a0 completion:(id /* block */)a1;
- (void)preAddSong:(id)a0 completion:(id /* block */)a1;
- (void)addSongWithList:(id)a0 source:(id)a1 completion:(id /* block */)a2;
- (void)goTopSong:(id)a0 completion:(id /* block */)a1;
- (void)removeAllSongWithUserId:(id)a0;
- (void)removeSong:(id)a0 fail:(BOOL)a1 finished:(BOOL)a2 completion:(id /* block */)a3;
- (void)reportTuningInfoWithVoiceVolume:(long long)a0 pushMusicVolume:(long long)a1 othersVoiceVolume:(long long)a2 isOpenLyric:(BOOL)a3 isOpenOriginalSong:(BOOL)a4 tuningEffectId:(id)a5 completion:(id /* block */)a6;
- (void)updateWithMusic:(id)a0 isPause:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)post:(id)a0;
- (id)get:(id)a0;

@end
