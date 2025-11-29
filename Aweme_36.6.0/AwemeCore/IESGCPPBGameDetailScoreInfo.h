@class IESGCPPBGameDetailSimpleEvaluationInfo;

@interface IESGCPPBGameDetailScoreInfo : GPBMessage

@property (nonatomic) double avgScore;
@property (nonatomic) double evaluationScore;
@property (retain, nonatomic) IESGCPPBGameDetailSimpleEvaluationInfo *evaluationInfo;
@property (nonatomic) BOOL hasEvaluationInfo;

+ (id)descriptor;

@end
