@class NSMutableDictionary;

@interface AWEUserNameUtils : NSObject

@property (retain, nonatomic) NSMutableDictionary *userInfoCaches;

+ (id)userNameWithScene:(id)a0 userModel:(id)a1;
+ (id)aliasWithScene:(id)a0 userModel:(id)a1;
+ (id)userInfoCaches;
+ (void)clearUserInfoCaches;
+ (void)addCacheUserInfo:(id)a0;
+ (BOOL)shouldCacheUserInfo;
+ (id)__downgradeStrategysFromArray:(id)a0;
+ (id)__downgradeStrategys;
+ (id)__downgradeStrategyWithScene:(id)a0;
+ (id)__userNameWithDowngradeStrategy:(id)a0 userModel:(id)a1;
+ (id)__aliasWithDowngradeStrategy:(id)a0 userModel:(id)a1;
+ (id)sharedInstance;

- (void)clearUserInfoCaches;
- (void)addCacheUserInfo:(id)a0;
- (void).cxx_destruct;

@end
