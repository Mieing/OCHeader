@interface IESLiveLikeAnimationDegradeAbility : IESLiveDegradeBase

@property (nonatomic) BOOL canDegrade;
@property (nonatomic) double diggRate;
@property (nonatomic) unsigned long long degradeLevel;
@property (readonly, nonatomic) double selfDiggRate;

- (BOOL)canDegradeAbility;
- (void)executeDegradeWithDegradeLevel:(unsigned long long)a0;
- (void)trackerEventParams:(id)a0 inDegradeLevel:(unsigned long long)a1;
- (id)init;
- (void)reset;

@end
