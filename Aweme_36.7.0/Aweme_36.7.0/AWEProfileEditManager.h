@class NSString;

@interface AWEProfileEditManager : NSObject <AWEProfileEditManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)uploadCompanyHeaderImage:(id)a0 completion:(id /* block */)a1;
+ (void)updateUserProfileWithToastAndReturnPageIfNeeded:(id)a0 completion:(id /* block */)a1;
+ (void)updateUserProfileWithToastAndReturnPageIfNeededWithoutSync:(id)a0 completion:(id /* block */)a1;
+ (void)uploadImage:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (void)uploadImageWithType:(unsigned long long)a0 image:(id)a1 webpPath:(id)a2 params:(id)a3 completion:(id /* block */)a4;
+ (void)updateUserProfileWithParameter:(id)a0 needSync:(BOOL)a1 completion:(id /* block */)a2;
+ (void)uploadWebpImage:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (void)updateUserProfile:(id)a0 completion:(id /* block */)a1;
+ (void)updateUserProfileEditResponseWithToastAndReturnPageIfNeeded:(id)a0 completion:(id /* block */)a1;
+ (id)checkWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)updateUserProfileEditResponseWithParameter:(id)a0 needSync:(BOOL)a1 completion:(id /* block */)a2;
+ (void)updateUserInfoWithParameter:(id)a0 model:(id)a1;
+ (BOOL)needSetNickUpdateReminderParameter;
+ (id)hometownMapping;
+ (void)updateUserProfileEditResponseWithToastAndReturnPageIfNeededWithoutSync:(id)a0 completion:(id /* block */)a1;


@end
