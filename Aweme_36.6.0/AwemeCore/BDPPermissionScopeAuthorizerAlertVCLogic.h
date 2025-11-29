@class BDPUniqueID;

@interface BDPPermissionScopeAuthorizerAlertVCLogic : NSObject

@property (retain, nonatomic) BDPUniqueID *uniqueID;

- (void)showPermissionAlertController:(id)a0 isOnTop:(BOOL)a1 paramsDict:(id)a2 completion:(id /* block */)a3;
- (double)calculationCellHeightWithContent:(id)a0;
- (void)eventAlertShowForScope:(id)a0 uniqueID:(id)a1 multipleAuth:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithUniqueID:(id)a0;

@end
