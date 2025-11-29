@interface AWELifeFeedsDiggInfo : AWEBaseApiModel

@property (nonatomic) BOOL userDigged;
@property (nonatomic) long long diggCount;

+ (id)JSONKeyPathsByPropertyKey;

@end
