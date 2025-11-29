@interface AWEEnterpriseProfileCallEvaluationManager : NSObject

+ (BOOL)shouldShowCallEvaluationBottomViewWithUserModel:(id)a0;
+ (id)callEvaluationBottomViewWithUserModel:(id)a0;
+ (void)recordCallEvaluationContent:(id)a0;
+ (void)notifyCallEvaluationBottomViewShowWithUserModel:(id)a0;
+ (id)callEvaluationModelWithUserModel:(id)a0;
+ (id)storageKeyWithToUserID:(id)a0;
+ (BOOL)checkIsValid:(id)a0 withUserModel:(id)a1;

@end
