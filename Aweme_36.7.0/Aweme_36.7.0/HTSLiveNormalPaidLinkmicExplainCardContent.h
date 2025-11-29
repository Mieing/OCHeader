@class IESLivePaidLinkmicExplainCardInfo;

@interface HTSLiveNormalPaidLinkmicExplainCardContent : IESLivePBBaseMessage

@property (retain, nonatomic) IESLivePaidLinkmicExplainCardInfo *explainCardInfo;
@property (nonatomic) BOOL hasExplainCardInfo;

+ (id)descriptor;

@end
