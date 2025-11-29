@interface AWEPlayInteractionElementTracker : NSObject

+ (void)_collectVisibleComponentsFromProvider:(id)a0 inViewController:(id)a1 intoComponentList:(id)a2;
+ (id)_buildTrackingParamsWithViewController:(id)a0 componentInfoList:(id)a1;
+ (BOOL)_isElementVisible:(id)a0;
+ (id)_getElementSubTypeWithInfo:(id)a0 viewController:(id)a1;
+ (void)trackElementShowInfoWithViewController:(id)a0;

@end
