@class NSString, AWEEcommerceInAppPushViewModel;

@interface AWEECMallInAppPushManager : NSObject <AWEPushSBCProtocol>

@property (retain, nonatomic) AWEEcommerceInAppPushViewModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEECModuleServiceDOUYINLGAdapterClass;
+ (id)sharedInstance;

- (BOOL)pushSBCCouldHandleWithMsg:(id)a0 payload:(id)a1 businessType:(id)a2;
- (id)aAWEECModuleServiceDOUYINLGAdapter;
- (BOOL)enableAlog;
- (long long)fallbackPlan;
- (void)trackPigeonInnerPushHandleWithModel:(id)a0 status:(long long)a1 reason:(id)a2;
- (void)p_showPush:(id)a0;
- (void)p_showPushIfNeeded:(id)a0;
- (BOOL)p_canShowEcommerceInappPush;
- (void)publishEvent:(id)a0 action:(id)a1;
- (void)handleRequestShowResultWithParamModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
