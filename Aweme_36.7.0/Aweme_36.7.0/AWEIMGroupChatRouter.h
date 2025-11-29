@interface AWEIMGroupChatRouter : NSObject

+ (void)__log:(id)a0;
+ (id)__continueHandleGroupPanelTransition:(id)a0;
+ (id)__getPanelTypeWithQueryDict:(id)a0;
+ (id)__panelTypeFormatStringWithType:(long long)a0;
+ (void)__setupBizDataInQueryDictionary:(id)a0 withPanelType:(long long)a1;
+ (long long)__panelEnumTypeWithFormatString:(id)a0;
+ (id)__findTargetGroupPromiseWithConfig:(id)a0 queryDict:(id)a1;
+ (id)__hasFamilyContact;
+ (id)__hasFetchedChatListDeferPromise;
+ (id)__bizDataKeyWithPanelType:(long long)a0;
+ (id)__bizDataMappers;
+ (void)handleGroupPanelRouterCenterTransition:(id)a0;
+ (void)handleGroupPanelTransition:(id)a0;
+ (void)transferToTargetViewControllerWithContext:(id)a0 completion:(id /* block */)a1;

@end
