@class NSString;

@interface AssessmentInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *conditionDetail;
@property (nonatomic) BOOL meetCondition;

+ (id)descriptor;

@end
