@class AnimaXPlayer, NSMutableArray;

@interface LynxAnimaXPropsPrioritySetter : NSObject

@property (weak, nonatomic) AnimaXPlayer *player;
@property (retain, nonatomic) NSMutableArray *taskQueue;

- (void)enqueueTask:(id /* block */)a0 priority:(long long)a1;
- (void)attachToPlayer:(id)a0;
- (void)flush;
- (void).cxx_destruct;
- (id)init;
- (void)enqueueTask:(id /* block */)a0;

@end
