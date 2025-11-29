@class NSString, NSMutableDictionary;

@interface InstallAndDeviceIDService : HTSService <HTSService>

@property (retain, nonatomic) NSString *oldDeviceID;
@property (retain, nonatomic) NSString *oldInstallID;
@property (retain, nonatomic) NSMutableDictionary *customQueryParams;
@property (copy, nonatomic) id /* block */ configParamsBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)clientDID;
- (void)registerDeviceOnceWithCompletion:(id /* block */)a0;
- (BOOL)isActived;
- (id)klinkEgdi;
- (void)setDidRegisterBlock:(id /* block */)a0;
- (void)addCustomQueryParams:(id)a0;
- (void)activateDevice:(id)a0;
- (void)didRegister:(id)a0;
- (void).cxx_destruct;
- (id)deviceID;
- (id)installID;
- (void)setup;

@end
