@class NSString;

@interface AWEPOISkeletonExpressionResult : NSObject

@property (retain, nonatomic) NSString *errorDescription;
@property (retain, nonatomic) id resultValue;

+ (id)emptyResult;

- (void).cxx_destruct;

@end
