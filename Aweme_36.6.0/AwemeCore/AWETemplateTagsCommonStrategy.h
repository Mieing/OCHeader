@interface AWETemplateTagsCommonStrategy : AWETemplateTagsBaseStrategy

+ (id)activeInfoWithTagsModel:(id)a0 context:(id)a1;
+ (BOOL)shouldActiveWithModel:(id)a0 context:(id)a1;

- (void)didClickWithEvent:(id)a0;
- (void)didTriggerEvent:(id)a0;
- (long long)templateType;

@end
