@interface AWEConcernBellPushDataController : NSObject

+ (void)uploadBellPushStrategyWithToUserID:(id)a0 secUid:(id)a1 liveStrategy:(unsigned long long)a2 completion:(id /* block */)a3;
+ (void)fetchBellPushStrategyWithToUserID:(id)a0 completion:(id /* block */)a1;
+ (void)updateBellPushSettingsWithCompletion:(id /* block */)a0;
+ (void)uploadBellPushSettingWithType:(unsigned long long)a0 toValue:(id)a1 completion:(id /* block */)a2;
+ (void)uploadBellPushStrategyWithToUserID:(id)a0 videoStrategy:(unsigned long long)a1 completion:(id /* block */)a2;
+ (void)fetchBellPushVideoStrategyListWithCursor:(id)a0 count:(id)a1 type:(unsigned long long)a2 strategy:(unsigned long long)a3 completion:(id /* block */)a4;

@end
