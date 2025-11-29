@class NSString;

@interface AWEUserAccountSettingServiceImp : HTSService <AWEUserAccountSettingService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)resetPassword;
+ (void)resetPassword:(id)a0;
+ (void)resetPasswordCompletion:(id /* block */)a0;
+ (void)rebindPhone:(id)a0;
+ (void)rebindPhone:(id)a0 sourceVC:(id)a1;
+ (void)rebindSafePhone:(id)a0;
+ (void)rebindBusinessAccountPhone:(id)a0;
+ (void)rebindSafePhone:(id)a0 accountType:(unsigned long long)a1;
+ (void)newRebindPhone:(id)a0 completion:(id /* block */)a1;
+ (void)newRebindPhone:(id)a0 routerParams:(id)a1 completion:(id /* block */)a2;
+ (id)highRiskVCWithEnterfrom:(id)a0;
+ (void)newBindPhone:(id)a0 completion:(id /* block */)a1;
+ (BOOL)rebindPhoneCanAddVerifyProgress;
+ (void)rebindPhoneVerifyPageWith:(id)a0 resultParams:(id)a1;
+ (void)phoneNumberVerifyWithStartTime:(double)a0 networkFinishedTime:(double)a1 enterFrom:(id)a2 error:(id)a3 layoutStyle:(long long)a4;
+ (void)trackRebindClick:(id)a0;
+ (void)processMiddlePopupInRebindMobileWithEnterFrom:(id)a0 routerParams:(id)a1 completion:(id /* block */)a2;
+ (void)pushToDetailControllerWithTicket:(id)a0 startTime:(double)a1 networkFinishedTime:(double)a2 error:(id)a3 shouldSendTrack:(BOOL)a4 enterFrom:(id)a5 layoutStyle:(long long)a6;


@end
