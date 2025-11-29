@interface IESECTabKitTransitionContainerVC : IESECTabKitContainerVC

@property (nonatomic) unsigned long long transitionType;

+ (BOOL)supportTransitionType:(unsigned long long)a0;
+ (id)protocolForTransitionType:(unsigned long long)a0;

- (id)initWithParameters:(id)a0 transitionType:(unsigned long long)a1;
- (BOOL)conformsToProtocol:(id)a0;

@end
