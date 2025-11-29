@class NSString, BDPUniqueID;

@interface BDPPermissionScopeAuthorizerAlertVCLogic_HG : NSObject <BDPPrivacyRegulationViewDelegate_HG>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showPermissionAlertController:(id)a0 completion:(id /* block */)a1;
- (void)clickPrivacyView:(id)a0 type:(unsigned long long)a1;
- (void)eventAlertShowForScope:(id)a0 uniqueID:(id)a1 multipleAuth:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithUniqueID:(id)a0;

@end
