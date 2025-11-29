@class IESLiveRoomLinkWillEnterParam, HTSLiveRoomAPI;

@interface IESLiveRoomLinkEnterRequestTask : IESLiveLinkTask

@property (retain, nonatomic) IESLiveRoomLinkWillEnterParam *enterParam;
@property (nonatomic) long long apiRetryCount;
@property (retain, nonatomic) HTSLiveRoomAPI *api;
@property (copy, nonatomic) id /* block */ completion;

- (void)updateContextParam:(id)a0;
- (void)clearRoomEnter:(BOOL)a0 cancel:(BOOL)a1 clearOnGoingRoomAisle:(BOOL)a2;
- (void)startRoomInfoApiInRoomListID:(id)a0 apiCompletion:(id /* block */)a1;
- (void)requestPlayBackEpisode:(id)a0 apiCompletion:(id /* block */)a1;
- (void)startRoomEnterApiInRoomID:(id)a0 apiCompletion:(id /* block */)a1;
- (void)startRoomInfoApiInAnchorID:(id)a0 apiCompletion:(id /* block */)a1;
- (void)enterPlaybackApiWithRoomAisle:(id)a0 episodeID:(id)a1;
- (void)mergeOriginRoom:(id)a0 withResponseModel:(id)a1;
- (BOOL)shouldEnterLvideoWithRoomAisle:(id)a0 error:(id)a1;
- (void)enterInflowContainerVideoWithRoomAisle:(id)a0 error:(id)a1;
- (BOOL)shouldEnterPlayBackWithRoomAisle:(id)a0 error:(id)a1;
- (void)enterPlaybackApiWithRoomAisle:(id)a0 error:(id)a1;
- (void)startRoomInfoApiInRoomID:(id)a0 apiCompletion:(id /* block */)a1;
- (BOOL)hasHandleAPIerror:(id)a0 responseRoom:(id)a1 inRoomAisle:(id)a2 enterStage:(unsigned long long)a3 roomApiType:(long long)a4 logId:(id)a5;
- (id)getPlayBackIdWithError:(id)a0;
- (id)getItemIdWithError:(id)a0;
- (unsigned long long)roomAisleHasBeenCancelByAsync:(id)a0;
- (unsigned long long)errorCodeFromApiType:(long long)a0;
- (void)handleApiError:(id)a0 inRoomAisle:(id)a1;
- (int)retryTimeInterval:(id)a0;
- (void)enterRoomSelfOnRecord:(BOOL)a0 error:(id)a1 inRoomAisle:(id)a2;
- (id)getOnGoingRoomAisle;
- (BOOL)enterLiveRoomWithCompletion:(id /* block */)a0;
- (void)startRequestEnterWithCompletion:(id /* block */)a0;
- (void)retryRequestEnterWithRoomAisle:(id)a0;
- (void).cxx_destruct;
- (void)run;
- (void)clearWithError:(id)a0;

@end
