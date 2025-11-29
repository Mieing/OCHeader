@interface WeChatShareUrlCheckHandler : NSObject

+ (id)getSavedDictWithAppid:(id)a0;
+ (void)requestURLRuleWithTask:(id)a0 isAsync:(BOOL)a1;
+ (void)checkShouldTaskContinueAndMakeDecision:(id)a0;
+ (id)genRecordDictWithRespConfigDict:(id)a0;
+ (void)saveRecordDic:(id)a0 withAppid:(id)a1;
+ (BOOL)checkShouldTaskContinueWithRule:(id)a0;
+ (id)genUserDefaultsKeyWithAppid:(id)a0;
+ (void)startCheckWithShareUrlCheckTask:(id)a0;

@end
