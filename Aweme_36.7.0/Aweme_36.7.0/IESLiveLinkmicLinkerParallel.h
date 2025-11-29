@class NSString, NSDictionary, HTSLiveLinkMicMethod, NSError, NSNumber;
@protocol IESLiveLinkmicLinkerParallelProvider, IESLiveLinkmicLinkerParallelDelegate, IESLiveLinkmicLinkerParallelReaction;

@interface IESLiveLinkmicLinkerParallel : NSObject

@property (retain, nonatomic) id<IESLiveLinkmicLinkerParallelProvider> provider;
@property (retain, nonatomic) id<IESLiveLinkmicLinkerParallelReaction> reaction;
@property (retain, nonatomic) HTSLiveLinkMicMethod *inviteMessage;
@property (nonatomic) BOOL hasInviteLinkmicInfo;
@property (retain, nonatomic) HTSLiveLinkMicMethod *permitMessage;
@property (nonatomic) BOOL hasPermitLinkmicInfo;
@property (nonatomic) unsigned long long linkmicApiResult;
@property (retain, nonatomic) NSError *apiError;
@property (nonatomic) unsigned long long rtcJoinChannelResult;
@property (retain, nonatomic) NSError *rtcError;
@property (nonatomic) BOOL isStartPushStream;
@property (weak, nonatomic) id<IESLiveLinkmicLinkerParallelDelegate> delegate;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) long long linkType;
@property (readonly, nonatomic) unsigned long long inviteSource;
@property (readonly, nonatomic) NSString *toSecUserId;
@property (readonly, nonatomic) NSNumber *roomId;
@property (readonly, nonatomic) NSDictionary *trackParams;

- (void)startInteract;
- (void)onReceivedPermitAudienceMessage:(id)a0;
- (void)onReceivedInviteAudienceMessage:(id)a0;
- (void)loadMediaService;
- (void)onJoinChannelResponse:(id)a0 error:(id)a1;
- (void)onRtcJoinChannelResultError;
- (void)checkErrorResult;
- (void)reportRtcSetupDuration;
- (void)reportJoinChannelDuration;
- (void)reportAudienceLinkSuccess;
- (BOOL)canJoinChannelTogether;
- (void)permitStartLinkerWithRoomId:(id)a0;
- (void)replyStartLinkerWithType:(unsigned long long)a0 linkType:(long long)a1 toSecUserId:(id)a2 roomId:(id)a3 inviteSource:(unsigned long long)a4 trackParams:(id)a5;
- (void)mediaServiceDidStart;
- (void)mediaServiceDidError:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;

@end
