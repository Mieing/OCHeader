@class NSString, HTSLiveASTNode;

@interface HTSLiveStateCondition : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *expression;
@property (retain, nonatomic) HTSLiveASTNode *conditionNode;
@property (nonatomic) BOOL hasConditionNode;
@property (nonatomic) BOOL richNotCondition;
@property (retain, nonatomic) HTSLiveASTNode *utilConditionNode;
@property (nonatomic) BOOL hasUtilConditionNode;
@property (nonatomic) BOOL richAndCondition;

+ (id)descriptor;

@end
