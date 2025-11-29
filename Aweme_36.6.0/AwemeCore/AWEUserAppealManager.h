@class BDTuringIdentity, BDTuringIdentityModel, NSString, BDAccountSealer, BDTuringConfig, AWEUserAppealAlertModel;

@interface AWEUserAppealManager : NSObject <BDTuringConfigDelegate, BDTuringIdentityHandler, BytedCertProgressDelegate>

@property (retain, nonatomic) AWEUserAppealAlertModel *appealInfoModel;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ nextActionBlock;
@property (retain, nonatomic) BDTuringConfig *turingConfig;
@property (retain, nonatomic) BDAccountSealer *accountSealer;
@property (retain, nonatomic) BDTuringIdentity *turingIdentity;
@property (retain, nonatomic) BDTuringIdentityModel *identityModel;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *verifyTicket;
@property (nonatomic) long long errorCode;
@property (nonatomic) unsigned long long platform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)progressFinishWithType:(unsigned long long)a0 params:(id)a1;
- (void)handleWebEventWithJsbParams:(id)a0 jsbCallback:(id /* block */)a1;
- (void)popVerifyViewWithModel:(id)a0;
- (id)getPunishInfoURL;
- (void)showAlertViewForAppeal;
- (void)excuteBlocks;
- (id)carrierStringWithPlatform:(unsigned long long)a0;
- (BOOL)shouldApplySelfAppeal;
- (void)showAccountAutoSeal;
- (void)tranEvent:(id)a0;
- (void)applyOriAppeal:(BOOL)a0 onTarget:(id)a1 isCancel:(BOOL)a2;
- (id)identityParameterWithModel:(id)a0;
- (void)showAppealAlertViewWithNextAction:(id /* block */)a0 secInfo:(id)a1 verifyTicket:(id)a2 isKickLogin:(BOOL)a3 completion:(id /* block */)a4;
- (void)handleWebViewPopOutNotification:(id)a0;
- (id)secUserID;
- (id)userID;
- (void).cxx_destruct;
- (id)sessionID;
- (id)deviceID;
- (id)installID;

@end
