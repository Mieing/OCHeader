@class IESLiveAPISpecialParamsService;

@interface IESLiveMixKTVApi : IESLiveKTVBaseApi

@property (retain, nonatomic) IESLiveAPISpecialParamsService *specialParamsService;

- (void)fetchWantToSingSongListWithCursor:(id)a0 completion:(id /* block */)a1;
- (void)getMixKTVComponentSettingWithCompletion:(id /* block */)a0;
- (id)initWithRoomId:(id)a0 userId:(id)a1 trackContext:(id)a2;
- (void)fetchListenRecommendListWithIsLoadMore:(BOOL)a0 queryId:(id)a1 wantListenCursor:(id)a2 recommendListCursor:(long long)a3 completion:(id /* block */)a4;
- (void)openMixKTVComponentWithApplySing:(BOOL)a0 needReport:(BOOL)a1 isAutoOpenChallenge:(BOOL)a2 openSource:(id)a3 completion:(id /* block */)a4;
- (void)addSongPrepareApplyWithMuteState:(BOOL)a0 completion:(id /* block */)a1;
- (void)closeMixKTVComponentIsAuto:(BOOL)a0 WithCompletion:(id /* block */)a1;
- (void)updateMixApplySing:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateMultiChorusSing:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateKTVComponentSetting:(unsigned long long)a0 settingStatus:(BOOL)a1 completion:(id /* block */)a2;
- (void)agreeApplySing:(id)a0 completion:(id /* block */)a1;
- (void)cancelApplySing:(id)a0 completion:(id /* block */)a1;
- (void)fetchApplyListWithCursor:(id)a0 withCompletion:(id /* block */)a1;
- (void)fetchWantListenListWithCursor:(id)a0 completion:(id /* block */)a1;
- (void)permitWantListenWithMusicId:(id)a0 completion:(id /* block */)a1;
- (void)wantListenWithMusicId:(id)a0 completion:(id /* block */)a1;
- (void)fetchListenRecommendListWithPage:(long long)a0 pageNumber:(long long)a1 queryId:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)post:(id)a0;
- (id)get:(id)a0;

@end
