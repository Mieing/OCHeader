@interface AWEIMPushFrequencyControlUtil : NSObject

+ (BOOL)pushShowCountBeyondControlWithMessage:(id)a0;
+ (void)updatePushShowCountWithMessage:(id)a0;
+ (BOOL)p_enablePushShowCountControlWithMessage:(id)a0;
+ (long long)p_pushShowCountWithMessage:(id)a0;
+ (id)p_messagePushShowCountKeyWithType:(long long)a0 aweType:(long long)a1 cid:(id)a2;
+ (id)p_messagePushShowTimeKeyWithType:(long long)a0 aweType:(long long)a1 cid:(id)a2;
+ (void)updateFrequencyControlForPushWithChat:(id)a0;

@end
