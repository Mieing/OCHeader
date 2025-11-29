@interface IESLiveMessageAnimationDegradeAbility : IESLiveDegradeBase

@property (nonatomic) BOOL canDegrade;

- (BOOL)canDegradeAbility;
- (void)executeDegradeWithDegradeLevel:(unsigned long long)a0;
- (void)trackerEventParams:(id)a0 inDegradeLevel:(unsigned long long)a1;
- (void)reset;

@end
