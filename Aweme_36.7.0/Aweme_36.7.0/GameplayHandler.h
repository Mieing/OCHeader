@class GameplayService_OC;

@interface GameplayHandler : NSObject

@property (retain, nonatomic) GameplayService_OC *service;

- (void)startGameplay:(id)a0 config:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
