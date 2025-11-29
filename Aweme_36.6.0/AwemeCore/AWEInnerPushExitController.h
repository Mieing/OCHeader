@class AWEInnerPushExitRangeMappingProcessedModel;

@interface AWEInnerPushExitController : NSObject

@property (nonatomic) BOOL hasHitExitRule;
@property (retain, nonatomic) AWEInnerPushExitRangeMappingProcessedModel *batchedRangeMappingModel;
@property (retain, nonatomic) AWEInnerPushExitRangeMappingProcessedModel *sharedRangeMappingModel;

- (BOOL)canShowInnerPushWithRequest:(id)a0;
- (void)didDismissInnerPushWithRequest:(id)a0 reason:(long long)a1;
- (void)createRangeMappingModels;
- (id)exitRuleConfigFromSettings;
- (BOOL)didHitSharedExitWithPushControlModel:(id)a0;
- (BOOL)hitExitRuleWithGradeKey:(id)a0 ruleItemName:(id)a1 ruleArray:(id)a2;
- (BOOL)didHitBatchedExitWithPushControlModel:(id)a0 gradeKey:(id)a1;
- (id)exitActionItemKeyWithGradeKey:(id)a0 ruleItemName:(id)a1;
- (id)sharedSetIdSetWithPushControlModel:(id)a0;
- (void)updateSharedExitDbInfoWithPushControlModel:(id)a0 reason:(long long)a1;
- (void)updateExitActionInfoWithReason:(long long)a0 gradeKey:(id)a1 ruleItemName:(id)a2 ruleArray:(id)a3;
- (id)totalExitRuleArrayWithPushControlModel:(id)a0 gradeKey:(id)a1;
- (void)updateExitActionItemInfo:(id)a0 rule:(id)a1 hitRule:(BOOL *)a2;
- (void)reportHitExitRule:(id)a0 gradeKey:(id)a1;
- (id)itemNameWithPushControlModel:(id)a0 gradeKey:(id)a1;
- (id)batchedApplicableExitRuleArrayWithGradeKey:(id)a0 itemName:(id)a1;
- (id)totalRangeExitRuleArray;
- (void).cxx_destruct;
- (id)init;

@end
