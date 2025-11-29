@class NSData;
@protocol MMMusicLiveCGIMgrDelegate;

@interface MMMusicLiveCGIMgr : NSObject <PBMessageObserverDelegate> {
    NSData *_heartBeatCookie;
    NSData *_getMVRecommentListLastBuffer;
}

@property (weak, nonatomic) id<MMMusicLiveCGIMgrDelegate> delegate;

+ (unsigned int)sendGetBeatTracks:(unsigned int)a0 songId:(id)a1 mvModel:(id)a2 completion:(id /* block */)a3;
+ (void)handleGetBeatTracksCGIWrap:(id)a0 eventId:(unsigned int)a1 completion:(id /* block */)a2;
+ (id)arrTrackItemWithBreakPointMs:(id)a0 musicDurationMs:(unsigned long long)a1;
+ (unsigned int)sendGetSongStatusCgiReqWithSongId:(id)a0 musicInfo:(id)a1 mvModel:(id)a2 completion:(id /* block */)a3;
+ (BOOL)checkCGIBaseRespSuccess:(id)a0;
+ (unsigned int)sendCheckPermissionReqWith:(id)a0 completion:(id /* block */)a1;

- (void)sendLiveJoinReqWithMVModel:(id)a0;
- (void)sendLiveJoinReqWithSongid:(id)a0 songinfo:(id)a1;
- (void)handleLiveJoinCGIWrap:(id)a0;
- (void)sendLiveHeartBeatReqWithSongId:(id)a0;
- (void)sendOfflineHeartBeatReqWithSongId:(id)a0;
- (void)handleLiveCGIWrap:(id)a0;
- (void)sendPostLiveMsgReq:(id)a0 songId:(id)a1 mvModel:(id)a2;
- (void)sendPostLiveMsgReqWithLocation:(id)a0 songId:(id)a1 mvModel:(id)a2;
- (void)handlePostLiveMsgCGIWrap:(id)a0;
- (unsigned int)sendGetMVRecommentListReqWithMVModel:(id)a0 scene:(int)a1 type:(int)a2 completion:(id /* block */)a3;
- (void)handleGetMVRecommentListCGIWrap:(id)a0 eventId:(unsigned int)a1 completion:(id /* block */)a2;
- (void)sendMVLikeReqWithMVModel:(id)a0 isLike:(BOOL)a1;
- (void)handleMVLikeWithMVModel:(id)a0 isSuccess:(BOOL)a1;
- (void)sendFlexibleClipMvDefaultDotCgiWithMvModel:(id)a0 completion:(id /* block */)a1;
- (void)handleFlexibleClipMvDefaultDotRspWithCipWrap:(id)a0 oldArrTrack:(id)a1 completion:(id /* block */)a2;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (unsigned int)sendCgiEvent:(unsigned int)a0 pbReq:(id)a1;
- (unsigned int)sendCgiEvent:(unsigned int)a0 pbReq:(id)a1 bLongPolling:(BOOL)a2 userData:(id)a3;
- (id)convertPbMsgListToModelList:(id)a0;
- (id)convertPbMsgToModel:(id)a0;
- (id)genClientMsgId;
- (void).cxx_destruct;

@end
