@interface IESECShopSLIGeneralAction : NSObject

+ (BOOL)isSupportGeneralAction:(id)a0;
+ (void)triggerGeneralAction:(id)a0 withEvent:(id)a1;
+ (void)triggerToast:(id)a0;
+ (void)triggerOpenSchema:(id)a0;
+ (void)triggerPublishXEvent:(id)a0;
+ (id)actionMap;

@end
