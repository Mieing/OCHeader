@class FeedItem, NSString, NSTimer, IESLiveFeedbackCardLayoutProxy, IESLivePublicScreenFixedCardItem;

@interface IESLiveUserFeedbackFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber, IESLiveUserActions, HTSLiveGiftActions, IESLiveMessageInteractionModuleCommentAction, HTSLiveDiggAction, IESLiveUserFeedbackRouter, IESLiveFeedbackAction, HTSLiveFeedScrollActions, IESLiveFansGroupActions, HTSLiveStreamPlayerAction>

@property (retain, nonatomic) FeedItem *feedbackModel;
@property (retain, nonatomic) NSTimer *beforeTimer;
@property (retain, nonatomic) NSTimer *afterTimer;
@property (nonatomic) long long fromTime;
@property (nonatomic) long long toTime;
@property (nonatomic) BOOL hasInsert;
@property (nonatomic) BOOL isOverTime;
@property (nonatomic) BOOL hadAction;
@property (nonatomic) long long timeType;
@property (retain, nonatomic) IESLiveFeedbackCardLayoutProxy *feedbackCardLayoutProxy;
@property (retain, nonatomic) IESLivePublicScreenFixedCardItem *cardItem;
@property (nonatomic) long long orientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentOrientationChanged:(long long)a0;
- (void)didSendGiftWithCost:(long long)a0;
- (void)userActionWithType:(long long)a0;
- (void)onFeedbackStateChange:(long long)a0;
- (void)didReceiveHTSLiveFansclubMessage:(id)a0;
- (void)willSendComment:(id)a0;
- (BOOL)showFeedbackCardBlockQuitRoom;
- (double)feedbackCardHeight;
- (void)streamPlayerDidReadyToRender;
- (void)diggClicked:(BOOL)a0 touchPoint:(struct CGPoint { double x0; double x1; })a1 gapTime:(double)a2;
- (void)showFeedbackCard;
- (void)p_handleUserAction:(long long)a0 from:(id)a1;
- (BOOL)p_isPassTimeLimitCheck;
- (void)showPublicScreenFeedBackCardWithShowInLive:(BOOL)a0;
- (void)feedbackItemRemoved:(id)a0;
- (void)p_showFeedbackViewWithModel:(id)a0;
- (void)followActionJudge;
- (BOOL)hasActionWithType:(long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)messageReceived:(id)a0;

@end
