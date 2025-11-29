@interface DetectionMetricsWrapper : NSObject

@property (nonatomic) long long textLength;
@property (nonatomic) long long sensitiveDuration;
@property (nonatomic) BOOL isMatched;
@property (nonatomic) long long sensitiveMatchedNum;

@end
