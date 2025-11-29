@class NSDictionary, NSString;

@interface AWERealNameVerifyManager : NSObject <AWERealNameVerifyManagerProtocol>

@property (class, nonatomic) unsigned long long realNameVerifyStatus;
@property (class, retain, nonatomic) NSDictionary *realNameResultPageUrlMap;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bindPhone;
+ (void)updateVerifyStatus:(id /* block */)a0;
+ (void)showRealNameVerifyNavForLive;
+ (void)showRealNameVerifyForECommerceWithVerifyDidSucceedBlock:(id /* block */)a0;
+ (void)showRealNameVerifyForECommerce;
+ (id)statusMap;
+ (void)showRealNameVerify;
+ (void)_showRealNameDetailPage;
+ (void)showRealNameVerifyWithType:(long long)a0 verifyDidSucceedBlock:(id /* block */)a1;
+ (id)realNameVerifyUrlWithType:(long long)a0;
+ (id)_realNameVerifyUrlWithType:(long long)a0;
+ (id)updateVerifyStatusURLString;
+ (BOOL)checkZhimaValidWithType:(long long)a0;
+ (void)showRealNameDetailPage;
+ (unsigned long long)currentUserRealNameVerifyStatus;


@end
