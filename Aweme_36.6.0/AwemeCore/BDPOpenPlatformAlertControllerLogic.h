@class NSString, BDPUniqueID;

@interface BDPOpenPlatformAlertControllerLogic : NSObject <BDPPrivacyRegulationViewDelegate>

@property (copy, nonatomic) id /* block */ completionBlk;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) NSString *authInfoAll;
@property (retain, nonatomic) NSString *authInfoShow;
@property (retain, nonatomic) NSString *authInfoSelect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)authorize:(id)a0;
- (void)clickPrivacyViewWithType:(unsigned long long)a0;
- (void)initAWEOpenplatformAuthInfo;
- (void)trackAwemweAuthResult:(id)a0;
- (void)trackAwemweAuthTrigger;
- (void)requestOpenAuthScopeInfo:(id)a0 completion:(id /* block */)a1;
- (void)privateShowSingleOpenAlertVC:(id)a0;
- (void)privateShowMultiOpenAlertVC:(id)a0;
- (long long)errorCodeForErrNo:(long long)a0;
- (double)calculationCellHeightWithContent:(id)a0;
- (void)trackAwemweAuthSubmit;
- (void)trackAwemweAuthRefuse;
- (void)trackAwemweAuthNotify;
- (id)contentView:(id)a0;
- (id)commonAWEOpenplatformAuthParams;
- (void)showOpenPlatformAlertController:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
