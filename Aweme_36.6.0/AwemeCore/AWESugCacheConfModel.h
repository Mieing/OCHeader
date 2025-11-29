@interface AWESugCacheConfModel : AWEBaseApiModel

@property (nonatomic) BOOL enable;
@property (nonatomic) int maxCount;
@property (nonatomic) unsigned long long endTime;
@property (nonatomic) unsigned long long tabType;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isValidNow;
- (id)init;

@end
