@class NSArray, NSMutableArray, NSString;
@protocol IESLiveInteractDynamicEffectRouter, IESLiveCompetitionGameRouter, IESLiveSocialInteractiveRouter, IESLiveRoomService;

@interface IESLiveInteractCompetitionGameResourceController : NSObject <IESLiveCompetitionGameLifeCycle, IESLiveSocialInteractAction>

@property (weak, nonatomic) id<IESLiveRoomService> room;
@property (copy, nonatomic) NSArray *remoteEffectResourceList;
@property (retain, nonatomic) NSMutableArray *downloadedEffectResourceList;
@property (retain, nonatomic) NSMutableArray *animationQueue;
@property (weak, nonatomic) id<IESLiveInteractDynamicEffectRouter> dynamicEffectRouter;
@property (weak, nonatomic) id<IESLiveSocialInteractiveRouter> socialInteractiveRouter;
@property (weak, nonatomic) id<IESLiveCompetitionGameRouter> competitionGameRouter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)winnerFanTicketViewIconImageURL;
+ (id)winnerSeatIconImageURL;
+ (id)winnerLokiEffectResourceName;
+ (id)winnerSeatAnimationWebPImageURL;
+ (id)startAnimationWebPImageURL;
+ (id)endAnimationWebPImageURL;

- (void)didSetAttachingDIContext;
- (void)didUpdatedGuestListWithActiveList:(id)a0;
- (id)initWithDIContext:(id)a0 room:(id)a1;
- (void)competitonGameDidStart:(id)a0;
- (void)competitonGameScoreDidChange:(id)a0 scoreChangeUserId:(id)a1 quickInteract:(id)a2 rankUpdateInfo:(id)a3;
- (void)competitonGameDidEnd;
- (void)competitionGameDidStartResultShowTimeWithInfo:(id)a0 source:(long long)a1;
- (void)competitionGameDidEndResultShowTimeWithInfo:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
