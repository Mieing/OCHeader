@interface AWETemplateTagsUnfollowFamiliarStrategy : AFDTemplateTagsBaseStrategy

+ (void)prepareWithModel:(id)a0 context:(id)a1;
+ (BOOL)isInvalidScene:(id)a0;
+ (id)prepareGeneralLabelModelWithRecommendReason:(id)a0;
+ (id)getUnfollowFamiliarTagModelWithModel:(id)a0;
+ (void)downgradeUnfollowFamiliarTagWithModel:(id)a0 context:(id)a1;
+ (id)findRecommendReasonWithModel:(id)a0;
+ (void)preprocessTextWithModel:(id)a0 filterRecommendReason:(id)a1;
+ (void)downgradeAvatarWithModel:(id)a0;
+ (BOOL)shouldActiveWithModel:(id)a0 context:(id)a1;

- (void)viewController_viewDidAppear;
- (void)didTriggerEvent:(id)a0;
- (long long)templateType;

@end
