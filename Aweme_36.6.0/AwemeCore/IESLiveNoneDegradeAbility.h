@interface IESLiveNoneDegradeAbility : IESLiveDegradeBase

- (BOOL)canDegradeAbility;
- (void)executeDegradeWithDegradeLevel:(unsigned long long)a0;
- (void)reset;

@end
