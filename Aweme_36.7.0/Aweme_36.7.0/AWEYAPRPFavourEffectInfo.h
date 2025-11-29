@class NSString;

@interface AWEYAPRPFavourEffectInfo : AWEBaseApiModel

@property (nonatomic) BOOL hasEffect;
@property (copy, nonatomic) NSString *effectKey;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
