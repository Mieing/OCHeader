@class NSString;

@interface AWEFavoriteGoodsGuideTopBarModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *guideText;
@property (copy, nonatomic) NSString *buttonText;
@property (nonatomic) unsigned long long collectType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
