@interface RTVInteractionInitialAction : NSObject

@property (nonatomic) long long actions;

- (long long)initialActions;
- (id)initWithInitialActions:(long long)a0;
- (void)mergeActions:(long long)a0;

@end
