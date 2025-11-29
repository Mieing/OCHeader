@class NSNumber;
@protocol IESLiveTimeService;

@interface HTSLiveRoomAPI : HTSLiveApi

@property (retain, nonatomic) id<IESLiveTimeService> timeService;
@property (readonly, nonatomic) NSNumber *roomID;

+ (id)apiStringWithRoomApiType:(long long)a0;

- (id)initWithRoomID:(id)a0;
- (void)closeAbnormalAnchorRoomFinished:(id /* block */)a0;
- (void)fetchRoomInfoWithTimeStamp:(id /* block */)a0;
- (void)exitRoom:(id /* block */)a0;
- (void)enterRoomPreloadWithRequestModel:(id)a0 finish:(id /* block */)a1;
- (void)enterRoomWithRequestModel:(id)a0 finish:(id /* block */)a1;
- (void)fetchPKInfoWithAnchorId:(id)a0 roomId:(id)a1 battleId:(id)a2 channelId:(id)a3 rivalRoomId:(id)a4 completion:(id /* block */)a5;
- (void)fetchRoomInfoByScene:(id)a0 roomID:(id)a1 completion:(id /* block */)a2;
- (void)fetchPreviewButtonInfoWithRoomID:(id)a0 anchorID:(id)a1 scene:(id)a2 completion:(id /* block */)a3;
- (void)fetchRoomInfoWithRoomID:(id)a0 completion:(id /* block */)a1;
- (void)fetchRoomInfoByScene:(id)a0 roomID:(id)a1 withParams:(id)a2 usePB:(BOOL)a3 completion:(id /* block */)a4;
- (void)fetchVideoInfoWithEpisodeIDs:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)fetchRoomInfoByScene:(id)a0 roomID:(id)a1 withParams:(id)a2 completion:(id /* block */)a3;
- (void)fetchRoomInfoWithUserID:(id)a0 secUserId:(id)a1 scene:(id)a2 completion:(id /* block */)a3;
- (void)fetchRoomInfoWithUserID:(id)a0 secUserId:(id)a1 chatGroupId:(id)a2 scene:(id)a3 completion:(id /* block */)a4;
- (void)fetchRoomInfo:(id)a0 roomList:(id)a1 completion:(id /* block */)a2;
- (void)fetchRoomInfoWithID:(id)a0 atPackLevel:(unsigned long long)a1 finished:(id /* block */)a2;
- (void)fetchRoomInfoHasLogIDByScene:(id)a0 roomID:(id)a1 withParams:(id)a2 completion:(id /* block */)a3;
- (void)fetchRoomInfoHasLogIDByScene:(id)a0 roomID:(id)a1 completion:(id /* block */)a2;
- (void)fetchRoomInfo:(id /* block */)a0;
- (void)fetchRoomInfoWithUserID:(id)a0 secUserId:(id)a1 completion:(id /* block */)a2;
- (void)enterRoomWithLogin:(BOOL)a0 roomModel:(id)a1 sourcePage:(id)a2 finish:(id /* block */)a3;
- (void)fetchVsIDWithUserID:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2 completion:(id /* block */)a3;
- (void)fetchVideoInfoWithEpisodeID:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)fetchRoomScreenCastSettingWithRoom:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
