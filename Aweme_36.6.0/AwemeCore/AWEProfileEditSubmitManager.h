@class NSString;

@interface AWEProfileEditSubmitManager : NSObject <AWEProfileEditSubmitManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)submitEditInformationWithContext:(id)a0 completion:(id /* block */)a1;
+ (void)uploadImage:(id)a0 type:(long long)a1 completionBlock:(id /* block */)a2 errorBlock:(id /* block */)a3;
+ (void)submitEditInformationWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)submitEditImageWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)uploadImage:(id)a0 type:(long long)a1 completionBlock:(id /* block */)a2;
+ (void)submitEditInformationWithParams:(id)a0 ifChangeUniqueID:(BOOL)a1 ifChangeImage:(BOOL)a2 completion:(id /* block */)a3;
+ (void)updateSecurityStartForScene;
+ (long long)checkIDIfValid:(id)a0 showToast:(BOOL)a1;
+ (id)badWordsErrorTips;
+ (id)checkInvalidCharacterToastText;
+ (id)idCheckAllNumbersToastText;
+ (void)platformCheckResult:(id)a0 checkResult:(long long *)a1 toastContent:(id *)a2;
+ (void)submitEditInformationWithParams:(id)a0 ifChangeUniqueID:(BOOL)a1 completion:(id /* block */)a2 dismissLoadingView:(id /* block */)a3;
+ (void)changeAvatarFinishedAction;
+ (void)p_noNetActionForSubmitWithContext:(id)a0 completion:(id /* block */)a1;
+ (void)p_errorActionForSubmitWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)p_successActionForSubmitWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)p_showAlertGeneralWithDialogModel:(id)a0 context:(id)a1 model:(id)a2 toastBackInfo:(id)a3 errorCode:(long long)a4 completion:(id /* block */)a5;
+ (void)submitEditImageWithParams:(id)a0 complexCompletion:(id /* block */)a1;
+ (void)submitEditInformationWithParams:(id)a0 ifChangeUniqueID:(BOOL)a1 completion:(id /* block */)a2;
+ (void)p_showAlertForHighRiskOccupationWithDialogModel:(id)a0 context:(id)a1 model:(id)a2 toastBackInfo:(id)a3 completion:(id /* block */)a4;
+ (BOOL)checkEnableEditUniqueID:(id)a0;


@end
