@interface AWETeenProfileEditSubmitManager : NSObject

+ (void)submitEditInformationWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)submitEditInformationWithParams:(id)a0 showLoadingView:(BOOL)a1 completion:(id /* block */)a2;
+ (void)updateDeviceWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)submitEditImageWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)uploadImage:(id)a0 type:(long long)a1 completionBlock:(id /* block */)a2;
+ (void)submitEditInformationWithParams:(id)a0 ifChangeUniqueID:(BOOL)a1 ifChangeImage:(BOOL)a2 completion:(id /* block */)a3;
+ (void)submitEditInformationWithParams:(id)a0 ifChangeUniqueID:(BOOL)a1 ifChangeImage:(BOOL)a2 showLoadingView:(BOOL)a3 completion:(id /* block */)a4;
+ (void)updateSecurityStartForScene;
+ (long long)checkIDIfValid:(id)a0 showToast:(BOOL)a1;
+ (id)badWordsErrorTips;
+ (void)updateUserProfileWithToastAndReturnPageIfNeeded:(id)a0 completion:(id /* block */)a1;
+ (void)updateUserProfileWithToastAndReturnPageIfNeededWithoutSync:(id)a0 completion:(id /* block */)a1;
+ (id)checkInvalidCharacterToastText;
+ (id)idCheckAllNumbersToastText;
+ (void)platformCheckResult:(id)a0 checkResult:(long long *)a1 toastContent:(id *)a2;
+ (void)uploadImage:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (void)uploadImageWithType:(unsigned long long)a0 image:(id)a1 webpPath:(id)a2 params:(id)a3 completion:(id /* block */)a4;
+ (void)updateUserProfileWithParameter:(id)a0 needSync:(BOOL)a1 completion:(id /* block */)a2;
+ (void)submitEditInformationWithParams:(id)a0 ifChangeUniqueID:(BOOL)a1 completion:(id /* block */)a2 dismissLoadingView:(id /* block */)a3;
+ (void)uploadWebpImage:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (void)updateUserProfile:(id)a0 completion:(id /* block */)a1;
+ (void)updateDeviceAgeWithAge:(long long)a0 completion:(id /* block */)a1;

@end
