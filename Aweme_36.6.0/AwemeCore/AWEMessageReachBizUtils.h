@interface AWEMessageReachBizUtils : NSObject

+ (void)handleInterruptProgressWithParamContext:(id)a0 reason:(id)a1;
+ (void)handleInterruptProgressWithParamContext:(id)a0 reason:(id)a1 componentModel:(id)a2;
+ (id)findReqComponentModelWithParamContext:(id)a0 componentID:(id)a1;
+ (id)getExtraWithWithModel:(id)a0 paramContext:(id)a1 plugin:(id)a2;
+ (id)getBubbleContentConfigWithModel:(id)a0;
+ (id)getBizTrackParamsWithModel:(id)a0 paramContext:(id)a1 plugin:(id)a2;
+ (BOOL)executeBadgeCallBackWithParamContext:(id)a0 actionType:(unsigned long long)a1 componentID:(id)a2 callBackContext:(id)a3;
+ (BOOL)executeBubbleCallBackWithParamContext:(id)a0 actionType:(unsigned long long)a1 componentID:(id)a2 callBackContext:(id)a3;
+ (id)generateBadgeModelWithComponentModel:(id)a0 paramContext:(id)a1 plugin:(id)a2;
+ (id)generateBubbleModelWithComponentModel:(id)a0 paramContext:(id)a1 plugin:(id)a2;
+ (unsigned long long)getUIStyleWithBadgeModel:(id)a0;

@end
