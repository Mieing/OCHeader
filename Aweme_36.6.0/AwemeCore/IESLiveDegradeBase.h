@interface IESLiveDegradeBase : NSObject

@property (nonatomic) unsigned long long degradeLevel;

- (BOOL)canDegradeAbility;
- (void)executeDegradeWithDegradeLevel:(unsigned long long)a0;
- (void)trackerEventParams:(id)a0 inDegradeLevel:(unsigned long long)a1;
- (void)reset;

@end
