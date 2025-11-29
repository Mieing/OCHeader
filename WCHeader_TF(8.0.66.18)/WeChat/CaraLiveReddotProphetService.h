@class NSString, CaraCppLiveReddotProphet;

@interface CaraLiveReddotProphetService : MMUserService <MMServiceProtocol>

@property (readonly, nonatomic) CaraCppLiveReddotProphet *underlying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)reportThatReddotExpose:(id)a0 isReady:(id)a1 context:(id)a2;
- (void)predict:(id)a0 context:(id)a1 onPredicted:(id /* block */)a2;
- (void)reportThatReddotConsume:(id)a0 isReady:(id)a1;
- (void)reportThatPreload:(id)a0 byPrediction:(id)a1;
- (void).cxx_destruct;

@end
