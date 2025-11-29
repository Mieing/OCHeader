@class NSString, NSNumber;

@interface AWETopicShootPopupFrequencyModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *storageKey;
@property (retain, nonatomic) NSNumber *totalCount;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
