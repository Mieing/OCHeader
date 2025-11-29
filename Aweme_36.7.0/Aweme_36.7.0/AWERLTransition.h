@interface AWERLTransition : NSObject

@property (nonatomic) double opacity;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) id /* block */ completion;

+ (id)defaultTransiton;

- (void)transit:(id)a0 animation:(id)a1 transitionType:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)init;

@end
