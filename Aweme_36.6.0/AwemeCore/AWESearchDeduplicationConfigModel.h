@class NSArray;

@interface AWESearchDeduplicationConfigModel : AWEBaseApiModel

@property (nonatomic) long long resultTriggerTime;
@property (nonatomic) long long detailTriggerTime;
@property (retain, nonatomic) NSArray *deduplicationTargets;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
