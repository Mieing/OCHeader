@class NSString, NSNumber;

@interface AWEDiscoverDPlayletRankCardModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *rankCardText;
@property (retain, nonatomic) NSNumber *rank;
@property (copy, nonatomic) NSString *rankType;
@property (copy, nonatomic) NSString *rankSchema;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
