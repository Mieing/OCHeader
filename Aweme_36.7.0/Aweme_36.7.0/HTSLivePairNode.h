@class HTSLiveASTNode;

@interface HTSLivePairNode : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveASTNode *key;
@property (nonatomic) BOOL hasKey;
@property (retain, nonatomic) HTSLiveASTNode *value;
@property (nonatomic) BOOL hasValue;

+ (id)descriptor;

@end
