@class AWELiveCameraPaidInfo_PriceInfo, AWELivePaidLiveBaseInfo, AWELiveCameraPaidInfoPaidLiveBizExtra;

@interface AWELiveCameraPaidInfo : AWEBaseApiModel

@property (nonatomic) int maxDuration;
@property (nonatomic) long long duration;
@property (retain, nonatomic) AWELiveCameraPaidInfo_PriceInfo *priceInfo;
@property (retain, nonatomic) AWELivePaidLiveBaseInfo *paidLiveBaseInfo;
@property (retain, nonatomic) AWELiveCameraPaidInfoPaidLiveBizExtra *paidLiveBizExtra;

+ (id)priceInfoJSONTransformer;
+ (id)paidLiveBaseInfoJSONTransformer;
+ (id)paidLiveBizExtraJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
