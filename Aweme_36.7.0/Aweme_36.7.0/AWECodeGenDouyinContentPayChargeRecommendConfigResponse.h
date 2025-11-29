@class NSArray, NSString, AWECodeGenDouyinContentPayChargeRecommendConfig, AWECodeGenTrailTimeThresholdModel;

@interface AWECodeGenDouyinContentPayChargeRecommendConfigResponse : AWEBaseResponseModel

@property (retain, nonatomic) AWECodeGenDouyinContentPayChargeRecommendConfig *recommendConfig;
@property (copy, nonatomic) NSArray *trialTimeArray;
@property (copy, nonatomic) NSArray *priceArray;
@property (retain, nonatomic) AWECodeGenTrailTimeThresholdModel *minTrailTimeModel;
@property (retain, nonatomic) AWECodeGenTrailTimeThresholdModel *maxTrailTimeModel;
@property (nonatomic) long long recommendTrailTime;
@property (nonatomic) long long chargeEditLimitNum;
@property (copy, nonatomic) NSString *chargeExtra;

+ (id)defaultConfig;
+ (id)JSONKeyPathsByPropertyKey;

- (id)limitMinTrailTimeToastContent;
- (id)limitMaxTrailTimeToastContent;
- (void)setMinTrailTimeSeconds:(double)a0;
- (double)minTrailTimeSeconds;
- (void)setMaxTrailTimeSeconds:(double)a0;
- (double)maxTrailTimeSeconds;
- (double)minTrailTimeSecondsForVideoDuration:(long long)a0;
- (double)maxTrailTimeSecondsForVideoDuration:(long long)a0;
- (void).cxx_destruct;

@end
