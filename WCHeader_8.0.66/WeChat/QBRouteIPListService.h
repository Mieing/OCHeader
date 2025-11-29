@interface QBRouteIPListService : QBWupService

+ (id)service;
+ (void)saveIpList:(id)a0;

- (void)getRouteIpList;
- (void)getRouteIpListWithRequest:(id)a0 completion:(id /* block */)a1;

@end
