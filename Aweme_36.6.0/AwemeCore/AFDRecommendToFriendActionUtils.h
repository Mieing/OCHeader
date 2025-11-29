@interface AFDRecommendToFriendActionUtils : NSObject

+ (BOOL)shouldShowSuccessRecommendToast:(id)a0;
+ (id)recommendFailToastTextWithStatus:(BOOL)a0 isTimeOut:(BOOL)a1 failToast:(id)a2;
+ (void)showCancelRecommendDoubleCheckAlertWithConfirmBlock:(id /* block */)a0 cancelBlock:(id /* block */)a1;

@end
