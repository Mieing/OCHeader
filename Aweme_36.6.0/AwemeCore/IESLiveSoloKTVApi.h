@class NSNumber, NSString;

@interface IESLiveSoloKTVApi : HTSLiveApi

@property (retain, nonatomic) NSNumber *roomId;
@property (retain, nonatomic) NSString *userId;

- (void)handleWithResponse:(id)a0 error:(id)a1 event:(id)a2 requestTimestamp:(double)a3;
- (void)requestFavoriteMusic:(id)a0 completion:(id /* block */)a1;
- (id)initWithRoomId:(id)a0 userId:(id)a1;
- (void)fetchKingItemArrayWithCompletion:(id /* block */)a0;
- (void)fetchAtmosphereVideoInfoWithSongID:(long long)a0 songName:(id)a1 type:(int)a2 completion:(id /* block */)a3;
- (void)orderPersonalKaraokeSongWithSongId:(id)a0 songType:(long long)a1 source:(int)a2 completion:(id /* block */)a3;
- (void)startPersonalKaraokeWithSongId:(id)a0 source:(int)a1 startMS:(id)a2 endMS:(id)a3 completion:(id /* block */)a4;
- (void)endPersonalKaraokeWithParams:(id)a0 completion:(id /* block */)a1;
- (void)getPersonalKaraoleMediaInfoWithCompletionBlock:(id /* block */)a0;
- (void)fetchLiveMusicListWithParams:(id)a0 comletionBlock:(id /* block */)a1;
- (void)fetchLiveMusicTabListWithFirstLevelTab:(int)a0 mode:(long long)a1 comletionBlock:(id /* block */)a2;
- (void)requestOrderSongWithId:(id)a0 completion:(id /* block */)a1;
- (void)requestTemplateList:(long long)a0 count:(long long)a1 completion:(id /* block */)a2;
- (void)requestMVList:(int)a0 offset:(long long)a1 count:(long long)a2 maxCursor:(id)a3 insertVid:(id)a4 completion:(id /* block */)a5;
- (void)fetchKTVRoomList:(id /* block */)a0;
- (void).cxx_destruct;

@end
