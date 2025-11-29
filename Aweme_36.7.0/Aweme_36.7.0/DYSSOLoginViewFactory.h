@interface DYSSOLoginViewFactory : NSObject

+ (Class)aAWEUserNotSyncToOtherAppidAdapterClass;
+ (BOOL)shouldShowDouyinEntrance;
+ (Class)aAWEUserCommonAdapterClass;
+ (Class)aAWEUserModuleServiceDOUYINHTSAdapterClass;
+ (BOOL)supportAppleLogin;
+ (id)platformViews;
+ (void)addPlatformApple:(id)a0;
+ (id)loginViewWithSpace:(double)a0 width:(double)a1 showCount:(unsigned long long)a2;
+ (void)trackSSOPlatformShow;
+ (id)platforms;

- (BOOL)shouldShowEmailLoginView;
- (id)aAWEUserNotSyncToOtherAppidAdapter;
- (id)aAWEUserCommonAdapter;
- (id)aAWEUserModuleServiceDOUYINHTSAdapter;

@end
