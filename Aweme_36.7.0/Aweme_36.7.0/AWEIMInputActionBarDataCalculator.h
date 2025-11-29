@interface AWEIMInputActionBarDataCalculator : NSObject

+ (id)p_getValidActionBarConfigWithConversation:(id)a0 activitySource:(id)a1;
+ (id)p_getCalculatedEntryItemsWithBarConfig:(id)a0 calculatorContext:(id)a1;
+ (id)p_sortedEntryItemsWithCalculatedItems:(id)a0;
+ (void)p_sortCalculatedItems:(id)a0 withSortGroups:(id)a1;
+ (id)p_supportedButtonConfigsForBarConfig:(id)a0;
+ (id)p_convertButtonConfig:(id)a0 calculatorContext:(id)a1;
+ (BOOL)p_canShowButtonConfig:(id)a0 calculatorContext:(id)a1;
+ (BOOL)p_resolveShowInfoWithConfig:(id)a0 forActionBarItem:(id)a1 inConversation:(id)a2;
+ (void)reconfigActionItemAfterResolvedShowInfo:(id)a0 withAllowedFunctions:(id)a1 inConversation:(id)a2;
+ (BOOL)canShowActionBarItemAfterResolvedShowInfo:(id)a0 withConversation:(id)a1;
+ (id)actionBarEntryTypeToPlusPanelTypeFilterMap;
+ (id)voip2In1ShowTypesWithAllowedTypes:(id)a0 inConversation:(id)a1;
+ (BOOL)isShowInfo:(id)a0 validForType:(unsigned long long)a1 inConversation:(id)a2;
+ (id)p_getEmoticonModelForHitInfo:(id)a0;
+ (void)associateHelloEmoticonModelIfNeededWithItem:(id)a0;
+ (id)p_getPetELFModelWithShowInfo:(id)a0 schemaUrl:(id)a1 conversation:(id)a2;
+ (BOOL)p_isTimeValidCountDownEndWithResolvedShowInfo:(id)a0;
+ (BOOL)p_isValidButtonConfig:(id)a0;
+ (BOOL)p_isValidConfig:(id)a0 inConversation:(id)a1;
+ (BOOL)p_isTimeValidForStartTime:(long long)a0 endTime:(long long)a1;
+ (BOOL)p_isTimeValidForShowInfo:(id)a0;
+ (BOOL)p_isResourceConfigs:(id)a0 validForType:(unsigned long long)a1 inConversation:(id)a2;
+ (BOOL)isVaildForActionBarCallBack:(id)a0 inConversaiton:(id)a1;
+ (id)getFallbackServerConfigWithCurrentConversation:(id)a0 activitySource:(id)a1;
+ (id)p_getSortedCalculatedEntryItemsWithBarConfig:(id)a0 calculatorContext:(id)a1;
+ (BOOL)containReplacedSpecialEmojiInEntryItems:(id)a0;
+ (id)getRandomValidResourceConfigWithShowInfo:(id)a0 forType:(unsigned long long)a1 inConversation:(id)a2;
+ (void)resetCalculateFlag;

@end
