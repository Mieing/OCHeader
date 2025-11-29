@class NSString;

@interface AWEPaymentVideoTools : NSObject <AWEPaymentVideoToolProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableDeviceOver;
+ (BOOL)enablePreviewVideo;
+ (BOOL)enableAutoOpenOrderPage;
+ (BOOL)isPreviewVideo:(id)a0;
+ (BOOL)shouldShowPreviewEndDot:(id)a0;
+ (double)progressForPreviewStartDot:(id)a0;
+ (double)progressForPreviewEndDot:(id)a0;
+ (BOOL)enableUseBlockStyle;
+ (BOOL)enableShowLimitFreeHintForOrderPageWithModel:(id)a0;
+ (BOOL)shouldShowPreviewStartDot:(id)a0;
+ (BOOL)enableNewVideoPayment;
+ (BOOL)isDowngradeWithModel:(id)a0;
+ (BOOL)shouldPreventPlayWhenPreviewEndWithModel:(id)a0;
+ (id)getPreviewDotColor:(id)a0;
+ (BOOL)isDeviceOverVideo:(id)a0;
+ (BOOL)shouldPreventSingleClickPauseWithModel:(id)a0 currPlayTime:(double)a1;
+ (BOOL)shouldRefreshItemWithModel:(id)a0;
+ (BOOL)hasLimitFreeHintWithModel:(id)a0;
+ (long long)maxFrequencyForUnpaidVideoTryUnlock;
+ (BOOL)hasUnlockWithMixID:(id)a0 currentEpisode:(id)a1;
+ (BOOL)shouldShowPaymentMaskViewWithModel:(id)a0;
+ (BOOL)enableShowLimitFreeHintWithModel:(id)a0;
+ (BOOL)enableAutoOpenOrderTrailFinished;
+ (BOOL)shouldForbidUnpaidVideoCreatePlayer;
+ (id)allowListSupportAutoPullOrderPage;
+ (id)autoPurchaseConfig;


@end
