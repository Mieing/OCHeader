@class NSString, AWEPOISkeletonExpressionResult;

@interface AWEPOISkeletonExpression : NSObject

@property (retain, nonatomic) NSString *rawData;
@property (retain, nonatomic) AWEPOISkeletonExpressionResult *result;

- (id)calculateWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithRawData:(id)a0;

@end
