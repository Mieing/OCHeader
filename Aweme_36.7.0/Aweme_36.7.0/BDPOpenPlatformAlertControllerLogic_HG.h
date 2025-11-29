@class NSString, BDPUniqueID;

@interface BDPOpenPlatformAlertControllerLogic_HG : NSObject <BDPPrivacyRegulationViewDelegate_HG>

@property (copy, nonatomic) id /* block */ completionBlk;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)authorize:(id)a0;
- (void)clickPrivacyView:(id)a0 type:(unsigned long long)a1;
- (void)requestOpenAuthScopeInfo:(id)a0 completion:(id /* block */)a1;
- (void)privateShowSingleOpenAlertVC:(id)a0;
- (void)privateShowMultiOpenAlertVC:(id)a0;
- (id)contentView:(id)a0;
- (void)showOpenPlatformAlertController:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
