@interface AWETemplateTagsFriendVisibleStrategy : AFDTemplateTagsBaseStrategy

+ (BOOL)shouldHandleReplaceTriggerEvent:(id)a0;
+ (id)clientBusinessID;
+ (long long)handleTypeForReplaceTriggerEvent;
+ (id)generateModelForReplaceTriggerEvent:(id)a0;
+ (BOOL)shouldActiveWithModel:(id)a0 context:(id)a1;

- (long long)templateType;

@end
