@interface QBGuidService : QBWupService

+ (id)service;
+ (void)saveGuidData:(id)a0 returnCode:(long long)a1;

- (void)getGuidWithTrigeredType:(long long)a0 completionBlock:(id /* block */)a1;
- (id)getGuidWithRequest:(id)a0 completionBlock:(id /* block */)a1;

@end
