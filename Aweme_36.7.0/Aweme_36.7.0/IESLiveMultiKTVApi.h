@interface IESLiveMultiKTVApi : IESLiveKTVBaseApi

- (void)updateUser:(id)a0 isHost:(BOOL)a1 comletion:(id /* block */)a2;
- (void)fetchColdStartRecommendSongListWithOffset:(long long)a0 count:(long long)a1 completion:(id /* block */)a2;
- (void)fetchLightingEffectsSourceWithThemID:(id)a0 songID:(id)a1 completion:(id /* block */)a2;
- (void)fetchGuestContributionWithSongID:(id)a0 singerID:(id)a1 completion:(id /* block */)a2;
- (void)fetchUserWeeklyContributionRankWithSingerID:(id)a0 completion:(id /* block */)a1;
- (void)fetchColdStartRecommendSongListWithOffset:(long long)a0 completion:(id /* block */)a1;
- (void)fetchSingRankResultWithSongID:(id)a0 singerID:(id)a1 singingStarTime:(long long)a2 completion:(id /* block */)a3;
- (void)fetchUserFollowStatusWithToUserID:(id)a0 completion:(id /* block */)a1;
- (void)fetchAtmosphereVideoInfoWithSongID:(long long)a0 songName:(id)a1 completion:(id /* block */)a2;
- (void)getAtmosphereVideoInfoWithVid:(id)a0 songID:(id)a1 orderUserID:(id)a2 completion:(id /* block */)a3;
- (void)getMVListWithParams:(id)a0 completion:(id /* block */)a1;
- (void)changeMVWithParams:(id)a0 completion:(id /* block */)a1;
- (void)chooseMVWithParams:(id)a0 completion:(id /* block */)a1;
- (void)getPlayingMVWithParams:(id)a0 completion:(id /* block */)a1;
- (void)playMVWithParams:(id)a0 completion:(id /* block */)a1;
- (void)switchChorusUserState:(id)a0 state:(int)a1 completion:(id /* block */)a2;

@end
