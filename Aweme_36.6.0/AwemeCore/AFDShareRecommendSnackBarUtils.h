@class NSString;

@interface AFDShareRecommendSnackBarUtils : NSObject <AFDShareRecommendSnackBarUtilsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShow:(id)a0;
+ (BOOL)showSnackBarWithTriggerScene:(id)a0;
+ (void)showSnackBarImmediatelyWithTriggerScene:(id)a0;
+ (void)updateSnackBarShownCount:(id)a0;
+ (long long)snackBarShownCount:(id)a0;
+ (id)topViewControllerUserModel;
+ (void)showHomepageScreenshotSnackBarWithViewController:(id)a0 dismissBlock:(id /* block */)a1;


@end
