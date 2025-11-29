@class NSString;
@protocol AWEMessageReachDialogConfigProtocol;

@interface AWEMessageReachSettingFeedRecommendPlugin : NSObject <AWEMessageReachCommonDialogPluginProtocol>

@property (retain, nonatomic) id<AWEMessageReachDialogConfigProtocol> config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)messageReach_setCommonDialogConfig:(id)a0;
- (BOOL)messageReach_canShowCommonDialogWithModel:(id)a0 withContext:(id)a1;
- (void)messageReach_didShowCommonDialogWithModel:(id)a0 withContext:(id)a1;
- (BOOL)messageReach_shouldCancelAllOtherPendingAlertsWhenShowed:(id)a0;
- (BOOL)messageReach_needInterceptorClickMaskWithModel:(id)a0 withContext:(id)a1;
- (BOOL)messageReach_needInterceptorClickCloseButtonWithModel:(id)a0 withContext:(id)a1;
- (BOOL)messageReach_needInterceptorClickActionButtonWithModel:(id)a0 withContext:(id)a1 withButtonDataModel:(id)a2;
- (void).cxx_destruct;

@end
