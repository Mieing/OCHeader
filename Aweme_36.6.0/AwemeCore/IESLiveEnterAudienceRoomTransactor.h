@class IESLiveEnterRoomAisle, HTSLiveRoomAPI;
@protocol IESLiveSlideControllerFactory;

@interface IESLiveEnterAudienceRoomTransactor : NSObject

@property (retain, nonatomic) HTSLiveRoomAPI *api;
@property (retain, nonatomic) id<IESLiveSlideControllerFactory> slideControllerFactory;
@property (retain, nonatomic) IESLiveEnterRoomAisle *onGoingRoomAisle;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) long long apiRetryCount;

+ (id)sharedTransactor;

- (id)enterAudienceRoomWithRoomAisle:(id)a0 completion:(id /* block */)a1;
- (BOOL)hasOnGoingRoomAisle;
- (id)enterAudienceRoomWithRoomAisle:(id)a0;
- (void)showToastIfNeeded:(id)a0;
- (id)feedLabelTypeMapToString:(int)a0;
- (id)feedLabelTypeTrackerInfo:(id)a0;
- (void)trackEnterRoomAisleConflict:(unsigned long long)a0 ongoingRoomAisle:(id)a1 incomingRoomAisle:(id)a2;
- (void)ieslive_trackRecLivePlayWithRoomAisle:(id)a0;
- (void)enterRoomErrorTrack:(id)a0;
- (BOOL)routerCannotChangeRoom:(id)a0;
- (void)ieslive_trackPerformanceBeforeEnterRoom:(id)a0;
- (void)markApiDuration:(id)a0;
- (void)processNewEnterStage:(id)a0;
- (unsigned long long)shouldCreateNewEnterRoomProcess:(id)a0 showVCBlock:(id /* block */)a1;
- (void)roomIsolateIfNeeded:(id)a0;
- (id)processRealEnterWithRoomAisle:(id)a0;
- (void)processWillEnterStage:(id)a0;
- (id)roomModelUpdate:(id)a0 withRoomAisle:(id)a1;
- (void)processDidEnterStage:(id)a0;
- (void)clearRoomEntraceEvidenceWithError:(id)a0;
- (id)needToReplacedCurrentVCWithRoomAisle:(id)a0;
- (id)showVCWithRoomAisle:(id)a0;
- (void)processWillShowVCStage:(id)a0;
- (void)pushVCToWindow:(id)a0 roomAisle:(id)a1 needToReplacedVC:(id)a2 isDisableReplace:(BOOL)a3;
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
- (id)getAudienceVCWithRoomAisle:(id)a0;
- (id)getSlideVCWithRoomAisle:(id)a0;
- (unsigned long long)roomAisleLegal:(id)a0 showVCBlock:(id /* block */)a1;
- (unsigned long long)shouldeNewEnterRoomProcess:(id)a0;
- (BOOL)vcCannotSupportRoom:(id)a0;
- (id)faiEnterRoomModel:(unsigned long long)a0 error:(id)a1 logId:(id)a2;
- (unsigned long long)liveEnterStageFromApiType:(long long)a0;
- (void)invokeTarget:(id)a0 withSelectorString:(id)a1;
- (id)getVSVideoVCWithRoomAisle:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)appDidEnterBackground:(id)a0;
- (void)clearWithError:(id)a0;

@end
