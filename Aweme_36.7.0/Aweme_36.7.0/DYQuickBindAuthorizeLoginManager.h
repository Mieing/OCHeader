@class NSString, DYRouterModel, NSDictionary;

@interface DYQuickBindAuthorizeLoginManager : NSObject <DYQuickBindManageProtocol>

@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) unsigned long long platform;
@property (copy, nonatomic) NSString *carrier;
@property (nonatomic) long long verifiedEnv;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ finishBlock;
@property (retain, nonatomic) DYRouterModel *routerModel;
@property (retain, nonatomic) NSDictionary *bindConflictParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)logWithEvent:(id)a0 params:(id)a1;
- (void)showCancelAuthAlert;
- (id)configNextURL:(id)a0;
- (void)showConflictH5Alert:(id)a0;
- (void)authLoginSuccess;
- (void)authLoginFail;
- (void)handleError:(id)a0 nextURL:(id)a1 completion:(id /* block */)a2;
- (void)finishQuickBindWithPlatform:(unsigned long long)a0;
- (id)initWithEnterFrom:(id)a0 platform:(unsigned long long)a1 carrier:(id)a2;
- (id)initWithEnterFrom:(id)a0 platform:(unsigned long long)a1 carrier:(id)a2 routerModel:(id)a3;
- (id /* block */)getFinishBlock;
- (id /* block */)getCancelBlock;
- (void)requestQuickBindCarrier:(long long)a0 ticket:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
