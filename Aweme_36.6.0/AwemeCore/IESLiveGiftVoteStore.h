@class HTSEventContext, GetGiftVotesResponse_Vote, NSString, IESLiveComponentContext, IESLiveGCDTimer, NSMutableArray;
@protocol IESLiveRoomService, IESLiveGiftVoteAPI, IESLiveGiftVoteReaction;

@interface IESLiveGiftVoteStore : NSObject <IESLiveGiftVoteActions, HTSLiveMessageSubscriber>

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) GetGiftVotesResponse_Vote *currentVote;
@property (retain, nonatomic) NSString *lastVoteId;
@property (nonatomic) long long lastVoteType;
@property (retain, nonatomic) id<IESLiveGiftVoteAPI> voteApi;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (retain, nonatomic) NSMutableArray *finishedVoteIdArray;
@property (nonatomic) BOOL processingQuickFinish;
@property (retain, nonatomic) GetGiftVotesResponse_Vote *lastFinishVote;
@property (weak, nonatomic) id<IESLiveGiftVoteReaction> reaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)p_cancelTimer;
- (id)initWithRoomModel:(id)a0 trackContext:(id)a1 componentContext:(id)a2;
- (void)subscribeBackEndData;
- (void)fetchGiftVoteList;
- (void)checkCurrentVotingType:(id /* block */)a0;
- (BOOL)enableKtvGiftVote;
- (BOOL)enableGiftVote;
- (long long)indicatorTextType;
- (BOOL)enableAdminEntrance;
- (id)normalVoteCreateUrl;
- (id)ktvVoteCreateUrl;
- (id)ktvVoteProcessUrl;
- (id)normalVoteProcessUrl;
- (void)cleanCurrentVote;
- (void)trackFloatViewShow;
- (BOOL)p_disableAudienceKtvVote;
- (void)p_processComingVote:(id)a0;
- (void)p_trackKtvVoteStart;
- (void)p_trackKtvVoteEnd;
- (void)p_fetchGiftVoteList;
- (void)p_dealWithGiftVoteModel:(id)a0;
- (void)p_setVoteTrackCommonParams:(id)a0;
- (id)p_getVoteConfig;
- (BOOL)p_isVoteFinished:(id)a0;
- (void)p_handleVoteStart:(id)a0;
- (void)p_handleVoteFinished:(id)a0;
- (void)p_handleVoteUpdate:(id)a0;
- (void)p_startCurrentVoteTimer;
- (void)p_setVoteFinished:(id)a0;
- (void)p_updateCurrentVoteInfo:(id)a0;
- (void)tr_voteFinishedEventByInterruption:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)messageReceived:(id)a0;

@end
