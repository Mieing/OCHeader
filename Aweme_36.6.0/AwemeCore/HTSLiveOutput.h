@class HTSLiveASTNode;

@interface HTSLiveOutput : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveASTNode *node;
@property (nonatomic) BOOL hasNode;

+ (id)descriptor;

@end
