@interface AWERLAnimation : NSObject <AWERLAnimationProtocol>

@property (nonatomic) double delay;
@property (nonatomic) unsigned long long options;
@property (nonatomic) double during;

- (id)init;
- (void)animate:(id /* block */)a0 completion:(id /* block */)a1;

@end
