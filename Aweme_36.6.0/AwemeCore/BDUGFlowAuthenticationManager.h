@class NSString;

@interface BDUGFlowAuthenticationManager : NSObject <BDFlowAuthInstance>

@property (readonly, nonatomic) long long hookVersion;
@property (readonly, nonatomic) long long certVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)updateExtremeDisasterRecoverySwitch:(BOOL)a0;
- (id)customsAuthForURL:(id)a0 cancelAction:(id /* block */)a1 confirmAction:(id /* block */)a2 isBPEAAlertShown:(BOOL)a3;
- (BOOL)setTopVCIfNeeded:(id)a0 url:(id)a1;
- (void)handleAction:(id)a0 certID:(id)a1 isBPEAAlertShown:(BOOL)a2 cancelAction:(id /* block */)a3 confirmAction:(id /* block */)a4;
- (id)certInfoForURL:(id)a0;
- (BOOL)updateData:(id)a0;
- (id)init;

@end
