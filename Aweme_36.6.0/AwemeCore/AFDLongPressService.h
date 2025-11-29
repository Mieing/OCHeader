@class NSString;

@interface AFDLongPressService : HTSService <AFDLongPressService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (Class)longPressFunctionManagerClass;
- (id)createLongPressModalViewControllerWithTriggerBlock:(id /* block */)a0 dismissBlock:(id /* block */)a1 referString:(id)a2;
- (id)createLongPressModalViewControllerWithTriggerBlock:(id /* block */)a0 dismissBlock:(id /* block */)a1 referString:(id)a2 fromProfile:(id)a3;
- (id)createMomentLongPressModalViewControllerWithTriggerBlock:(id /* block */)a0 dismissBlock:(id /* block */)a1 referString:(id)a2 model:(id)a3;
- (id)createAwemeLongPressVCWithContext:(id)a0;
- (id)createLongPressBubbleModalViewControllerWithTriggerBlock:(id /* block */)a0 dismissBlock:(id /* block */)a1 referString:(id)a2;
- (id)makeParamsWithModelType:(long long)a0 awemeModel:(id)a1 referString:(id)a2 extraLog:(id)a3 customParams:(id)a4 actionBlock:(id /* block */)a5;
- (id)makeParamsWithModelType:(long long)a0 awemeModel:(id)a1 referString:(id)a2 extraLog:(id)a3 customParams:(id)a4 enterFrom:(id)a5 actionBlock:(id /* block */)a6;
- (id)makeModelParamsWithTitle:(id)a0 iconImage:(id)a1 actionBlock:(id /* block */)a2;
- (Class)longpressABTest;
- (Class)longPressFastSpeedHelperClass;
- (id)longPressShareFilterManager;
- (void)trackOldPanelShowWithReferString:(id)a0;
- (BOOL)enableLongPressDisalikeParams;
- (id)speedManager;
- (void)createAndShowSearchPageLongPressModalViewControllerWithReferString:(id)a0 model:(id)a1 logExtra:(id)a2;

@end
