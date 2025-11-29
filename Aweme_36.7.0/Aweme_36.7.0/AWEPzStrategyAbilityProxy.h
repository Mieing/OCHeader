@class AWEPzStrategyObject, NSString;

@interface AWEPzStrategyAbilityProxy : NSObject <AWEPzStrategyAbility>

@property (weak, nonatomic) AWEPzStrategyObject *strategyObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)postEvent:(id)a0 toComponent:(id)a1 withParams:(id)a2;
- (void).cxx_destruct;

@end
