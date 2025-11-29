@protocol AWEUGSceneStrategyProtocol;

@interface AWEUGSceneBaseListener : NSObject <AWEUGSceneListenerProtocol>

@property (weak, nonatomic) id<AWEUGSceneStrategyProtocol> strategy;

- (void)bindStrategy:(id)a0;
- (void).cxx_destruct;
- (void)statusDidChange:(long long)a0;

@end
