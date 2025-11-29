@class BDPUniqueID;

@interface BDPBatchPermissionAuthorizer : NSObject

@property (retain, nonatomic) BDPUniqueID *uniqueID;

- (id)getUnsupportedCombinedScope:(id)a0;
- (void)getScopesCurrentStatus:(id)a0 completion:(id /* block */)a1;
- (void)eventAuthResultForScope:(id)a0 uniqueID:(id)a1;
- (void)acquireBatchPermission:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithUniqueID:(id)a0;

@end
