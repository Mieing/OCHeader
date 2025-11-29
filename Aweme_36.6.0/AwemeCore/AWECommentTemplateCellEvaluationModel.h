@class NSAttributedString, AWECommentTemplateCellImageConfig;

@interface AWECommentTemplateCellEvaluationModel : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) AWECommentTemplateCellImageConfig *config;
@property (nonatomic) long long score;
@property (copy, nonatomic) NSAttributedString *attachDes;

- (void).cxx_destruct;
- (id)init;

@end
