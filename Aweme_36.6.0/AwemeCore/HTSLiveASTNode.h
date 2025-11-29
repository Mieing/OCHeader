@class HTSLiveMapNode, HTSLiveUnaryNode, HTSLiveBinaryNode, HTSLiveBoolNode, HTSLiveInt64Node, HTSLiveStringNode, HTSLiveIdentifierNode, HTSLiveCallNode, HTSLiveConditionNode, HTSLivePairNode, HTSLiveFloat64Node, HTSLiveArrayNode;

@interface HTSLiveASTNode : IESLivePBBaseMessage

@property (nonatomic) int nodeType;
@property (retain, nonatomic) HTSLiveBoolNode *boolNode;
@property (nonatomic) BOOL hasBoolNode;
@property (retain, nonatomic) HTSLiveInt64Node *int64Node;
@property (nonatomic) BOOL hasInt64Node;
@property (retain, nonatomic) HTSLiveFloat64Node *float64Node;
@property (nonatomic) BOOL hasFloat64Node;
@property (retain, nonatomic) HTSLiveStringNode *stringNode;
@property (nonatomic) BOOL hasStringNode;
@property (retain, nonatomic) HTSLiveBinaryNode *binaryNode;
@property (nonatomic) BOOL hasBinaryNode;
@property (retain, nonatomic) HTSLiveUnaryNode *unaryNode;
@property (nonatomic) BOOL hasUnaryNode;
@property (retain, nonatomic) HTSLiveCallNode *callNode;
@property (nonatomic) BOOL hasCallNode;
@property (retain, nonatomic) HTSLiveIdentifierNode *identifierNode;
@property (nonatomic) BOOL hasIdentifierNode;
@property (retain, nonatomic) HTSLiveConditionNode *conditionNode;
@property (nonatomic) BOOL hasConditionNode;
@property (retain, nonatomic) HTSLivePairNode *pairNode;
@property (nonatomic) BOOL hasPairNode;
@property (retain, nonatomic) HTSLiveMapNode *mapNode;
@property (nonatomic) BOOL hasMapNode;
@property (retain, nonatomic) HTSLiveArrayNode *arrayNode;
@property (nonatomic) BOOL hasArrayNode;

+ (id)descriptor;

- (id)pe_ExtraData;

@end
