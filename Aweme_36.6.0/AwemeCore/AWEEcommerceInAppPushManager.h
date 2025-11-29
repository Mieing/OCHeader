@class NSString;

@interface AWEEcommerceInAppPushManager : NSObject <AWEPushSBCProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEECModuleServiceDOUYINLGAdapterClass;
+ (id)sharedInstance;

- (BOOL)pushSBCCouldHandleWithMsg:(id)a0 payload:(id)a1 businessType:(id)a2;
- (id)aAWEECModuleServiceDOUYINLGAdapter;
- (void)p_showPush:(id)a0;
- (void)p_showPushIfNeeded:(id)a0;
- (BOOL)p_canShowEcommerceInappPush;
- (void)trackPigeonInnerPushHandleWithModel:(id)a0 isPass:(BOOL)a1 reason:(id)a2;
- (BOOL)p_canRequestOrShowEcommerceInappPush;
- (BOOL)isECOMKefuPushWithModel:(id)a0;
- (void)p_delayToShowPush:(id)a0;
- (BOOL)isPigeonKefuPush:(id)a0;
- (id)currentTopPage;
- (BOOL)needShowBannerTopPage;
- (void)dismiss;
- (id)init;

@end
