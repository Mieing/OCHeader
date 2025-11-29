@class CALayer, NSMutableArray, NSString;

@interface IESECCAAnimationChain : NSObject <CAAnimationDelegate>

@property (weak, nonatomic) CALayer *targetLayer;
@property (retain, nonatomic) NSMutableArray *chainModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)chainWithLayer:(id)a0;

- (id /* block */)thenWithCompletion;
- (void)executeNextAnimation;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)removeAll;
- (id /* block */)start;
- (id /* block */)then;

@end
