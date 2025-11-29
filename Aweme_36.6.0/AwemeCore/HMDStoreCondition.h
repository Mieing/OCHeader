@class NSString;

@interface HMDStoreCondition : NSObject

@property (nonatomic) long long judgeType;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) double threshold;
@property (copy, nonatomic) NSString *stringValue;

- (void).cxx_destruct;
- (id)init;

@end
