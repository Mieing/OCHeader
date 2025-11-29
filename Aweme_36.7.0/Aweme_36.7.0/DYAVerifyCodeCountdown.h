@class NSMutableDictionary;

@interface DYAVerifyCodeCountdown : NSObject

@property (retain, nonatomic) NSMutableDictionary *SMSCountdowns;
@property (retain, nonatomic) NSMutableDictionary *voiceCountdowns;
@property (retain, nonatomic) NSMutableDictionary *emailCountdowns;
@property (retain, nonatomic) NSMutableDictionary *secUidMap;

+ (id)sharedInstance;

- (void)smsCountdownFired:(id)a0;
- (void)setSMSMaxCountdown:(long long)a0 phoneNumber:(id)a1 type:(long long)a2 scene:(long long)a3;
- (void)voiceCountdownFired:(id)a0;
- (void)emailCountDownFired:(id)a0;
- (long long)smsCountdownForPhoneNumber:(id)a0 type:(long long)a1 scene:(long long)a2 maxValue:(long long *)a3;
- (long long)voiceCountdownForPhoneNumber:(id)a0 type:(long long)a1 scene:(long long)a2 maxValue:(long long *)a3;
- (long long)countDownForEmail:(id)a0 type:(long long)a1 scene:(long long)a2 maxValue:(long long *)a3;
- (void)setSMSMaxCountdown:(long long)a0 sendCodeModel:(id)a1 secUID:(id)a2 type:(long long)a3 scene:(long long)a4;
- (void)setVoiceMaxCountdown:(long long)a0 phoneNumber:(id)a1 type:(long long)a2 scene:(long long)a3;
- (void)setEmailMaxCountdown:(long long)a0 email:(id)a1 type:(long long)a2 scene:(long long)a3;
- (void)clearCountdownForMobile:(id)a0 type:(long long)a1;
- (void)clearCountdownForMobile:(id)a0;
- (void)clearCountdownForEmail:(id)a0 type:(long long)a1;
- (void)clearCountdownForEmail:(id)a0;
- (void).cxx_destruct;

@end
