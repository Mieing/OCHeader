@class NSDictionary, NSString, IESLiveGCDTimer;
@protocol IESLiveRoomService, IESLivePSDynamicStrategyDelegate;

@interface IESLivePublicScreenDynamicRefreshStrategy : NSObject <IESLiveMessageInteractionModuleCommentAction, IESLiveInteractAction, HTSLiveMessageSubscriber, IESLiveMessageInteractionStrategyResultSubscriber, IESLivePublicScreenLayoutSubscriber, IESLivePublicScreenHeatSubscriber>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLiveGCDTimer *strategyTimer;
@property (nonatomic) long long roomUserCount;
@property (nonatomic) double publicScreenWidth;
@property (copy, nonatomic) NSDictionary *refreshConfig;
@property (copy, nonatomic) NSString *strategyType;
@property (nonatomic) long long currentSpeed;
@property (weak, nonatomic) id<IESLivePSDynamicStrategyDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)publicScreenLayoutChanged:(id)a0 forType:(unsigned long long)a1;
- (void)onCommentSucceed:(id)a0 fromEnterSource:(long long)a1;
- (void)startInteractiveWithScene:(unsigned long long)a0;
- (void)endInteractiveWithScene:(unsigned long long)a0;
- (void)decision:(id)a0 result:(id)a1;
- (void)strategyResultChange:(long long)a0 withStrategyKey:(id)a1 withChangeReason:(id)a2;
- (double)refreshDuration;
- (void)needStayLongerStatusChanged;
- (void)needStayLongerStatusChangeForMention;
- (void)needStayLongerStatusChangeForBatch;
- (void)reportRoomHeatState:(long long)a0;
- (void)registInitialFactors;
- (id)liveAudiencePublicScreenSpeedConfig;
- (void)handleSpeedStrategyIfActive:(BOOL)a0;
- (void)setupPublicScreenRefreshStrategyTimer;
- (long long)refreshMessageCount;
- (void)calculateMessageFactorForRefreshStrategyTimer;
- (void)commentStatusEnd;
- (void)updatePublicScreenSpeedStrategyFactorWithMessageListWidth:(double)a0;
- (void)needStayLongerEnd;
- (void)needStayLongerForMentionEnd;
- (void)needStayLongerForBatchEnd;
- (void)detectedStrategyEventWith:(id)a0 result:(long long)a1 reason:(id)a2;
- (void)trackPublicScreenRefreshSpeedChange:(long long)a0 withReason:(id)a1;
- (id)initWithDIContext:(id)a0 delegate:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)messageReceived:(id)a0;

@end
