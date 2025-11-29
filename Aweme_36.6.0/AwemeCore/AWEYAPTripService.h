@class NSString, NSDictionary;

@interface AWEYAPTripService : HTSService <AWEYAPTripService>

- (Class)getLeftSideBarPresenterClass;
- (id)tripPigeonMethods;
- (void)callMethod:(NSString *)a0 arguments:(NSDictionary *)a1 completion:(void (^)(BOOL, NSDictionary *, NSString *))a2;
- (BOOL)shouldBlockWithParams:(id)a0 continueActionBlock:(id /* block */)a1;
- (id)init;

@end
