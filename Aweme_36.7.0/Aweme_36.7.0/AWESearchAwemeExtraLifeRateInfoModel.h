@class NSNumber, NSString, AWESearchAwemeExtraLifeRateLevelIconInfoModel;

@interface AWESearchAwemeExtraLifeRateInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSNumber *reduceVideoCardDescMaxTextLinesValue;
@property (copy, nonatomic) NSString *strRateDescription;
@property (retain, nonatomic) AWESearchAwemeExtraLifeRateLevelIconInfoModel *rateLevelIconInfo;

+ (id)rateLevelIconInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
