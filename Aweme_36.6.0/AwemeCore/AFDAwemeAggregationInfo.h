@class NSString;

@interface AFDAwemeAggregationInfo : AWEBaseApiModel

@property (nonatomic) unsigned long long type;
@property (nonatomic) long long maxCount;
@property (copy, nonatomic) NSString *resourceID;
@property (nonatomic) long long realCount;
@property (copy, nonatomic) NSString *fromAwemeID;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
