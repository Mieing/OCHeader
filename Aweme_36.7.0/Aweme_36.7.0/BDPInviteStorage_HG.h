@interface BDPInviteStorage_HG : NSObject

+ (id)defaultStorage;

- (void)obtainAppListWithSource:(id)a0 callback:(id /* block */)a1;
- (id)keyWithSource:(id)a0;
- (BOOL)isValidCache:(id)a0;
- (id)parseResponseJSON:(id)a0;

@end
