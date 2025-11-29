@class NSString;

@interface AWESocialPromotionInnerPushManager : NSObject <AWESocialPromotionInnerPushManagerProtocol, AWEPushSBCProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterStaticLoad;
+ (id)sharedInstance;

- (void)showGeneralButtonEcommercePostActivityInnerPush:(id)a0;
- (BOOL)pushSBCCouldHandleWithMsg:(id)a0 payload:(id)a1 businessType:(id)a2;
- (BOOL)couldDisplayNotificationWithPayload:(id)a0;
- (void)p_showPush:(id)a0;
- (BOOL)p_checkSceneValid;
- (id)init;

@end
