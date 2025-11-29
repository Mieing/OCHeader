@interface AWEGrouponDialogContainerManager : NSObject

+ (BOOL)isDialogShowingWithPageType:(long long)a0 uiComponentType:(id)a1 uiComponentID:(id)a2;
+ (BOOL)getDialogContainerBannerStatus:(long long)a0;
+ (void)updateDialogContainerBannerStatus:(BOOL)a0 pageType:(long long)a1;
+ (void)trackDialogShowResult:(BOOL)a0 errMsg:(id)a1 duration:(long long)a2 exposureType:(long long)a3 style:(id)a4 pageType:(long long)a5 scene:(id)a6;
+ (BOOL)preCheckoutWithPageType:(long long)a0;
+ (void)trackLynxDialogMonitorWithScene:(id)a0 errMsg:(id)a1 isFeedTab:(BOOL)a2 pageType:(long long)a3 extraParam:(id)a4;
+ (void)recordDialogExposedInColdLaunch:(long long)a0;
+ (BOOL)isBannerAvoidTheSameTimeFre;
+ (void)updateBannerAvoidTheSameTimeFre:(BOOL)a0;
+ (void)trackDialogCloseMonitorWithScene:(id)a0 reason:(id)a1 style:(id)a2 pageType:(long long)a3 extraParam:(id)a4;
+ (void)trackDialogNaSendCouponWithParams:(id)a0 success:(BOOL)a1 pageType:(long long)a2 ticketID:(id)a3 statusCode:(long long)a4 sendLaunchlogID:(id)a5;
+ (void)updateDialogShowFrom:(id)a0;
+ (long long)coldLaunchFrequency;
+ (void)trackDialogShowResult:(BOOL)a0 errMsg:(id)a1 duration:(long long)a2 exposureType:(long long)a3 style:(id)a4 pageType:(long long)a5 scene:(id)a6 errCode:(long long)a7;
+ (BOOL)shouldShowTransformerDialogWithPageType:(long long)a0;
+ (BOOL)isForwardDialogReadyShow;
+ (void)updateForwardDialogWillShow:(BOOL)a0;
+ (void)requestSyncDialogContainerWithAction:(id)a0 frequencyData:(id)a1;
+ (void)trackDialogLynxError:(id)a0 duration:(long long)a1 style:(id)a2 pageType:(long long)a3 scene:(id)a4 errCode:(long long)a5;
+ (void)trackDialogContentLoadWithStyle:(id)a0 scene:(id)a1 loadType:(id)a2;

@end
