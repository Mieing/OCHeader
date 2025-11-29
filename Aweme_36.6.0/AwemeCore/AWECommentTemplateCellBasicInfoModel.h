@class AWECommentTemplateCellUserModel, AWECommentTemplateCellEvaluationModel;

@interface AWECommentTemplateCellBasicInfoModel : NSObject

@property (retain, nonatomic) AWECommentTemplateCellUserModel *mainUserModel;
@property (retain, nonatomic) AWECommentTemplateCellUserModel *replyUserModel;
@property (retain, nonatomic) AWECommentTemplateCellEvaluationModel *evaluationModel;

- (void).cxx_destruct;
- (id)init;

@end
