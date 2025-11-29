@class NSString, IESLivePublicScreenFixedCardItem, HTSLiveApi, HTSLiveFeedbackCard, IESLiveFeedbackCardLayoutProxy, NSTimer;

@interface IESLiveFeedbackRoomControlFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber, IESLiveUserActions, HTSLiveGiftActions, IESLiveMessageInteractionModuleCommentAction, HTSLiveDiggAction, IESLiveFeedbackRoomControlRouter, IESLiveFeedbackAction, IESLiveFansGroupActions>

@property (retain, nonatomic) HTSLiveApi *api;
@property (retain, nonatomic) HTSLiveFeedbackCard *card;
@property (retain, nonatomic) IESLivePublicScreenFixedCardItem *cardItem;
@property (retain, nonatomic) IESLiveFeedbackCardLayoutProxy *feedbackCardLayoutProxy;
@property (retain, nonatomic) NSTimer *beforeTimer;
@property (retain, nonatomic) NSTimer *afterTimer;
@property (nonatomic) long long fromTime;
@property (nonatomic) long long toTime;
@property (nonatomic) BOOL isOverTime;
@property (nonatomic) BOOL hadAction;
@property (nonatomic) long long pcuValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentUnmount;
- (void)didSendGiftWithCost:(long long)a0;
- (void)remoteRoomDataReady:(id)a0;
- (void)userActionWithType:(long long)a0;
- (void)onFeedbackStateChange:(long long)a0;
- (void)didReceiveHTSLiveFansclubMessage:(id)a0;
- (void)willSendComment:(id)a0;
- (BOOL)showFeedbackCardBlockQuitRoom;
- (void)diggClicked:(BOOL)a0 touchPoint:(struct CGPoint { double x0; double x1; })a1 gapTime:(double)a2;
- (void)p_registerFollowAction;
- (void)p_handleFeedBackCard:(id)a0;
- (void)p_handleUserAction:(long long)a0 from:(id)a1;
- (void)p_handleFeedbackMessage:(id)a0;
- (BOOL)p_hasActionWithType:(long long)a0;
- (void)p_requestFeedbackData:(id)a0;
- (long long)p_feedbackShowType:(id)a0;
- (void)p_showRoomInFeedAndPreviewFeedbackCard:(id)a0;
- (void)p_clearCurrentData;
- (long long)p_timeTypeWithData:(id)a0;
- (void)p_showRoomFeedback:(id)a0;
- (void)p_showRoomInPreviewFeedbackCard:(id)a0;
- (void)p_showRoomInLiveFeedback:(id)a0;
- (BOOL)p_isPassTimeLimitCheck;
- (BOOL)enableAnchorFeedBack;
- (void)showPublicScreenFeedBackCardWithShowInLive:(BOOL)a0;
- (void)p_increaseFeedBackFrequencyCount;
- (id)feedBackKeyID;
- (void)p_removeFeedbackFrequencyControl:(id)a0;
- (BOOL)isHitClientImpression;
- (void)p_removeAllExpiredFeedBackIDs;
- (void)p_updateFeedBackIDInKVStore:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
