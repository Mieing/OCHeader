@interface AWELikeListPrivacyActionSheet : NSObject

+ (Class)aAWEPadModuleAdapterClass;
+ (id)__settingModel:(id)a0 withIndex:(long long)a1 isSelected:(BOOL)a2;
+ (void)showWithEnterFrom:(id)a0 completion:(id /* block */)a1;
+ (void)showWithEnterFrom:(id)a0 useCardUIStyle:(BOOL)a1 completion:(id /* block */)a2 loadingBlock:(id /* block */)a3 dismissBlock:(id /* block */)a4;
+ (void)showWithEnterFrom:(id)a0 completion:(id /* block */)a1 loadingBlock:(id /* block */)a2 dismissBlock:(id /* block */)a3;
+ (id)__getLogStatusString:(long long)a0;
+ (void)changeLikeListPrivacySetting:(long long)a0 completion:(id /* block */)a1;
+ (void)__trackCancelSelectWithEnterFrom:(id)a0 type:(long long)a1;

- (id)aAWEPadModuleAdapter;

@end
