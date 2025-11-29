@interface IESLiveGuestBattleStateManager : NSObject

@property (nonatomic) long long state;

- (id)initWithDIContext:(id)a0;
- (void)fireGuestBattleEvent:(long long)a0;
- (void)handleGuestBattleStartEvent;
- (void)handleGuestBattlePauseEvent;
- (void)handleGuestBattleResumeEvent;
- (void)handleGuestBattleSettleEvent;
- (void)handleGuestBattleFinishEvent;

@end
