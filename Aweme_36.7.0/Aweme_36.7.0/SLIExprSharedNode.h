@class NSDictionary, IESECSliceXExprCoreBaseNode;

@interface SLIExprSharedNode : NSObject

@property (class, readonly, nonatomic) NSDictionary *unaryOperatorNodes;
@property (class, readonly, nonatomic) NSDictionary *binaryOperatorNodes;
@property (class, readonly, nonatomic) NSDictionary *functionNodes;
@property (class, readonly, nonatomic) NSDictionary *constNodes;
@property (class, readonly, nonatomic) NSDictionary *commonConstNodes;
@property (class, readonly, nonatomic) NSDictionary *identifierNodes;
@property (class, readonly, nonatomic) IESECSliceXExprCoreBaseNode *centerSplitNode;
@property (class, readonly, nonatomic) IESECSliceXExprCoreBaseNode *leftSquareBracketSplitNode;
@property (class, readonly, nonatomic) IESECSliceXExprCoreBaseNode *leftParentheseSplitNode;
@property (class, readonly, nonatomic) IESECSliceXExprCoreBaseNode *rightSquareBracketSplitNode;
@property (class, readonly, nonatomic) IESECSliceXExprCoreBaseNode *rightParentheseSplitNode;

+ (void)initialize;

@end
