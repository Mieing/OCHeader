@class NSString, LLPOISkeletonExpressionResult;

@interface LLPOISkeletonExpression : NSObject

@property (retain, nonatomic) NSString *rawData;
@property (retain, nonatomic) LLPOISkeletonExpressionResult *result;

- (id)calculateWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithRawData:(id)a0;

@end
