@class NSArray, NSString;

@interface AWECodeGenAdSettingInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSArray *midAdsIndexArray;
@property (copy, nonatomic) NSArray *rewardedAdsIndexArray;
@property (copy, nonatomic) NSString *bizExtra;
@property (nonatomic) int rit;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
