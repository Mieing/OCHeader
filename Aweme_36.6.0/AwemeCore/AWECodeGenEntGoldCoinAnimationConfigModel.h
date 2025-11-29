@class NSString;

@interface AWECodeGenEntGoldCoinAnimationConfigModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *suffixText;
@property (nonatomic) int goldCoinNumber;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
