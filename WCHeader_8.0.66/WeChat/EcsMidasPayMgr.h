@class NSString, EcsMidasPayLogger;

@interface EcsMidasPayMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSString *payingAppId;
@property (copy, nonatomic) id /* block */ midasPayCallBack;
@property (retain, nonatomic) EcsMidasPayLogger *midasPayLogger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)startLogger;
- (void)checkWXApi;
- (void)registerPayWithAppId:(id)a0 callback:(id /* block */)a1;
- (void)endPayWithAppId:(id)a0;
- (void).cxx_destruct;

@end
