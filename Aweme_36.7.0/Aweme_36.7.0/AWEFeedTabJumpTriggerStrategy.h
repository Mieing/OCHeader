@class AWEFeedTabJumpTriggerStrategyModel, NSString, NSSet, AWEAwemeModel;

@interface AWEFeedTabJumpTriggerStrategy : NSObject

@property (retain, nonatomic) AWEFeedTabJumpTriggerStrategyModel *model;
@property (retain, nonatomic) NSString *tabID;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) NSSet *eventSet;
@property (copy, nonatomic) id /* block */ handlerBlock;
@property (copy, nonatomic) id /* block */ delayTriggerBlock;
@property (nonatomic) BOOL triggered;
@property (readonly, nonatomic) NSString *strategyID;
@property (readonly, nonatomic) long long triggerLimit;

- (id)nearbyService;
- (void)notifyContainerViewDidAppear;
- (void)startObserveWithTriggerHandler:(id /* block */)a0;
- (void)notifyNearbyClientAI;
- (id)initWithModel:(id)a0 tabID:(id)a1 aweme:(id)a2;
- (void)notifyVideoPlayWithPlayTime:(double)a0 totalTime:(double)a1;
- (void)notifyAwemeFollow;
- (void)notifyAwemeBottomBarClickWithType:(id)a0;
- (void)notifyAwemeDigg;
- (void)notifyAddComment;
- (void)notifyVideoFavorite;
- (void)notifyVideoShare;
- (void)notifyImageAlbumBack;
- (void)notifyAnchorToMall;
- (void)tryTriggerEventWithEventType:(long long)a0;
- (void)lifeClientAITriggerIfNeededWithProgress:(long long)a0;
- (void).cxx_destruct;

@end
