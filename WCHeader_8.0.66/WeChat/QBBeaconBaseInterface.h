@interface QBBeaconBaseInterface : NSObject

+ (BOOL)enableAnalytics:(id)a0 gatewayIP:(id)a1;
+ (BOOL)onUserAction:(id)a0 isSucceed:(BOOL)a1 elapse:(long long)a2 size:(long long)a3 params:(id)a4;
+ (void)setAppKey:(id)a0;
+ (void)setGUID:(id)a0;
+ (void)setUserId:(id)a0;
+ (void)setSDKVersion:(id)a0;
+ (void)setAdditionalInfo:(id)a0;

@end
