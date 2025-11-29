@class BDXLynxAirScheduler, BDXLynxAirDataCenter;

@interface BDXLynxAirDispatcher : NSObject

@property (retain, nonatomic) BDXLynxAirScheduler *scheduler;
@property (retain, nonatomic) BDXLynxAirDataCenter *dataCenter;

- (void)executeTapAction:(id)a0 fromLynxView:(id)a1;
- (void)executeLifecycleAction:(id)a0 fromLynxView:(id)a1;
- (void)_executeElementAction:(id)a0 fromLynxView:(id)a1;
- (id)metaDependency;
- (void)dispatchAirAction:(id)a0 fromLynxView:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
