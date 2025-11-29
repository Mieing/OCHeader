@interface MttWKStatService : QBWupService

+ (id)service;

- (void)getMemoryInfoWithPhoneID:(id)a0 completion:(id /* block */)a1;
- (void)preloadWKMachineInfoWithCompletion:(id /* block */)a0;
- (void)getWKMachineInfoWithReq:(id)a0 completion:(id /* block */)a1;
- (void)preloadMachineListWithWithReq:(id)a0 completion:(id /* block */)a1;

@end
