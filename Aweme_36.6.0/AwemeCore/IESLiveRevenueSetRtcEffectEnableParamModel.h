@class NSString, IESLiveRevenueSetRtcEffectEnableExtraModel;

@interface IESLiveRevenueSetRtcEffectEnableParamModel : IESLiveBridgeModel

@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSString *scene;
@property (retain, nonatomic) IESLiveRevenueSetRtcEffectEnableExtraModel *extra;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
