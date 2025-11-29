@class NSString;

@interface IESLivePlaybackApiImpl : NSObject <IESLivePlaybackAPI>

@property (nonatomic) long long pingCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchEnterWithParams:(id)a0 completion:(id /* block */)a1;
- (void)fetchPlaybackWithRoomId:(id)a0 matchId:(id)a1 completion:(id /* block */)a2;
- (void)fetchVideoInfoWithEpisodeID:(id)a0 completion:(id /* block */)a1;
- (void)fetchPlaybackListWithRoomID:(id)a0 episodeID:(id)a1 completion:(id /* block */)a2;
- (void)fetchSeriesPlaybackListWithRoomID:(id)a0 ticketID:(id)a1 parenTicketID:(id)a2 completion:(id /* block */)a3;
- (void)fetchOtherPlaybacksWithSeasonID:(id)a0 episodeID:(id)a1 userID:(id)a2 currentSeason:(BOOL)a3 seasonType:(int)a4 needReverse:(BOOL)a5 cursor:(long long)a6 pageSize:(unsigned long long)a7 roomID:(id)a8 completion:(id /* block */)a9;
- (void)leaveWithEpisodeID:(id)a0 duration:(double)a1 didPlayFinished:(BOOL)a2 videoCode:(long long)a3;
- (void)updateHistoryWithSeasonId:(id)a0 episodeId:(id)a1 seq:(long long)a2 msec:(long long)a3;
- (void)fetchRoomScreenCastSettingWithRoom:(id)a0 completion:(id /* block */)a1;
- (void)fetchEncryptedByteCastInfoForPaidPlaybackWithEpisodeID:(id)a0 completion:(id /* block */)a1;
- (void)fetchPingEpisode:(id)a0 duration:(double)a1 videoCode:(long long)a2;

@end
