@class NSString, DYRouterModel, NSDictionary, DYBindPhoneHelperInstance;

@interface DYQuickBindForceBindLoginManager : NSObject <DYQuickBindManageProtocol>

@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) unsigned long long platform;
@property (copy, nonatomic) NSString *carrier;
@property (retain, nonatomic) DYBindPhoneHelperInstance *bindHelper;
@property (retain, nonatomic) DYRouterModel *routerModel;
@property (retain, nonatomic) NSDictionary *bindConflictParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)authLoginSuccess;
- (void)authLoginFail;
- (void)finishQuickBindWithPlatform:(unsigned long long)a0;
- (id)initWithEnterFrom:(id)a0 platform:(unsigned long long)a1 carrier:(id)a2;
- (id)initWithEnterFrom:(id)a0 platform:(unsigned long long)a1 carrier:(id)a2 routerModel:(id)a3;
- (id /* block */)getFinishBlock;
- (id /* block */)getCancelBlock;
- (void)requestQuickBindCarrier:(long long)a0 ticket:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)setCancelBlock:(id /* block */)a0;
- (void)setFinishBlock:(id /* block */)a0;

@end
