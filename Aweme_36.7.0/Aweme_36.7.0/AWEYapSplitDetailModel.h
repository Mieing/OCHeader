@interface AWEYapSplitDetailModel : AWEBaseApiModel

@property (nonatomic) long long totalAmount;
@property (nonatomic) long long yapCount;
@property (nonatomic) long long unYapCount;

+ (id)JSONKeyPathsByPropertyKey;

@end
