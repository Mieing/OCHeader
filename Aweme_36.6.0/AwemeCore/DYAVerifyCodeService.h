@interface DYAVerifyCodeService : NSObject

+ (id)passportUserForUpdate:(id)a0;
+ (void)clearAllCountdown;
+ (void)startSendCodeWithRequestModel:(id)a0 finishBlock:(id /* block */)a1;
+ (void)startSMSCountdown:(id)a0 type:(long long)a1 scene:(long long)a2 model:(id)a3;
+ (void)startSendVoiceCodeWithPhoneNumber:(id)a0 ticketModel:(id)a1 extraParams:(id)a2 type:(long long)a3 finishBlock:(id /* block */)a4;
+ (void)startVoiceCountdown:(id)a0 type:(long long)a1 scene:(long long)a2 model:(id)a3;
+ (void)startSMSCountdownWithSecUID:(id)a0 type:(long long)a1 scene:(long long)a2 model:(id)a3;
+ (void)startSendEmailCodeWithEmail:(id)a0 password:(id)a1 ticket:(id)a2 nextURL:(id)a3 type:(long long)a4 finishBlock:(id /* block */)a5;
+ (void)startEmailCountdown:(id)a0 type:(long long)a1 scene:(long long)a2 model:(id)a3;
+ (void)startSendCodeWithPhoneNumber:(id)a0 type:(long long)a1 finishBlock:(id /* block */)a2;
+ (void)startSendCodeWithNotLoginRequestModel:(id)a0 finishBlock:(id /* block */)a1;
+ (void)startSendCodeWithChineseMainLandRequestModel:(id)a0 finishBlock:(id /* block */)a1;
+ (void)startSendVoiceCodeWithPhoneNumber:(id)a0 ticketModel:(id)a1 type:(long long)a2 finishBlock:(id /* block */)a3;
+ (void)startSendVoiceCodeWithNotLoginPhoneNumber:(id)a0 ticketModel:(id)a1 type:(long long)a2 finishBlock:(id /* block */)a3;
+ (void)startSendCodeWithParams:(id)a0 type:(long long)a1 finishBlock:(id /* block */)a2;
+ (void)sendEmailCodeForLogin:(id)a0 finishBlock:(id /* block */)a1;
+ (void)sendEmailCodeForForgetPassword:(id)a0 finishBlock:(id /* block */)a1;
+ (void)sendEmailCodeWithTicket:(id)a0 finishBlock:(id /* block */)a1;
+ (void)sendEmailCodeForEmailVerify:(id)a0 password:(id)a1 fromType:(long long)a2 finishBlock:(id /* block */)a3;
+ (void)sendEmailCodeForChangePassword:(id)a0 finishBlock:(id /* block */)a1;
+ (void)sendEmailCodeForEmail:(id)a0 ticketModel:(id)a1 fromType:(long long)a2 finishBlock:(id /* block */)a3;
+ (void)checkEmailCode:(id)a0 email:(id)a1 type:(long long)a2 finishBlock:(id /* block */)a3;
+ (void)startVerifyCodeWithLoginState:(id)a0 ticketModel:(id)a1 type:(long long)a2 finishBlock:(id /* block */)a3;
+ (void)startVerifyCodeWithoutLoginState:(id)a0 phoneNumber:(id)a1 orTicketModel:(id)a2 type:(long long)a3 shouldMixType:(BOOL)a4 finishBlock:(id /* block */)a5;
+ (void)startCheckCodeWithoutLoginState:(id)a0 phoneNumber:(id)a1 orTicketModel:(id)a2 type:(long long)a3 finishBlock:(id /* block */)a4;
+ (void)startQueryUpsmsVerifyWithTicket:(id)a0 finishBlock:(id /* block */)a1;
+ (void)getBriefInfoBySMS:(id)a0 code:(id)a1 infoScope:(id)a2 type:(long long)a3 finishBlock:(id /* block */)a4;
+ (void)checkMobileUnusableByReceipt:(id)a0 finishBlock:(id /* block */)a1;
+ (void)setMobileUnuseAlertShowStateWithPhoneNumber:(id)a0 type:(long long)a1;
+ (BOOL)getMobileUnuseAlertShowStateWithPhoneNumber:(id)a0 type:(long long)a1;
+ (long long)countdownForPhoneNumber:(id)a0 type:(long long)a1 maxValue:(long long *)a2;
+ (long long)countdownForPhoneNumber:(id)a0 type:(long long)a1 scene:(long long)a2 maxValue:(long long *)a3;
+ (long long)voiceCountdownForPhoneNumber:(id)a0 type:(long long)a1 maxValue:(long long *)a2;
+ (long long)countdownForEmail:(id)a0 type:(long long)a1 maxValue:(long long *)a2;
+ (id)sendCodeModelWithSecUID:(id)a0;
+ (void)clearEmailCountdown;

@end
