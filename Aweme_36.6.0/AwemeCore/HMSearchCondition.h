@class NSString;

@interface HMSearchCondition : NSObject

@property (nonatomic) long long judgeType;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) double threshold;
@property (copy, nonatomic) NSString *stringValue;

- (void).cxx_destruct;

@end
