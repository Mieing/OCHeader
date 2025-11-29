@interface AWEShowPlayletEncryptKeyTraceUtil : NSObject

+ (void)tracePlayletVideoEncryptionSafeGuardWithModel:(id)a0 identifier:(id)a1 apiName:(id)a2;
+ (void)reportFailPlayletVideoEncryptionWithModel:(id)a0 identifier:(id)a1 apiName:(id)a2;
+ (long long)isHasEncryptKeyForVideoWithModel:(id)a0;
+ (void)p_playletVideoEncryptionSafeGuardWithModel:(id)a0 identifier:(id)a1 apiName:(id)a2 traceName:(id)a3;
+ (BOOL)playletVideoEncryptionSafeGuardABEnable;
+ (id)reasonHasEncryptKeyForVideoWithModel:(id)a0;
+ (long long)p_isHasEncryptKeyForVideoWithReason:(id)a0;

@end
