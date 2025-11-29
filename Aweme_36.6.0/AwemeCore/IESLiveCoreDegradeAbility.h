@interface IESLiveCoreDegradeAbility : IESLiveDegradeBase

@property (nonatomic) BOOL canDegrade;
@property (nonatomic) BOOL executedlevel1Degrade;

- (void)executeDegradeWithDegradeLevel:(unsigned long long)a0;
- (void)trackerEventParams:(id)a0 inDegradeLevel:(unsigned long long)a1;
- (void)reset;

@end
