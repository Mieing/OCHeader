@class NSString;

@interface AWEFollowPrivateAccountUtils : NSObject <AWEFollowPrivateAccountProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)checkAndFollowPrivateAccount:(id)a0;
+ (void)followPrivateAccountWithCompletion:(id /* block */)a0;
+ (id)currentPrivateAlertController;
+ (BOOL)isPrivateAccount:(id)a0;
+ (void)followPrivateAccountWithCompletion:(id /* block */)a0 needsToast:(BOOL)a1;
+ (void)checkAndFollowPrivateAccount:(id)a0 needsToast:(BOOL)a1;


@end
