@class NSString;

@interface LLPOISkeletonExpressionResult : NSObject

@property (retain, nonatomic) NSString *errorDescription;
@property (retain, nonatomic) id resultValue;

+ (id)emptyResult;

- (void).cxx_destruct;

@end
