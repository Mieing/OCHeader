@protocol IESECBuyNowTrackAbilityDelegate;

@interface IESECBuyNowTrackAbility : IESECTrackAbility

@property (weak, nonatomic) id<IESECBuyNowTrackAbilityDelegate> trackerDelegate;

- (id)initWithTrackerDelegate:(id)a0;
- (void)trackerWithEventName:(id)a0 params:(id)a1 onceKey:(id)a2;
- (void).cxx_destruct;

@end
