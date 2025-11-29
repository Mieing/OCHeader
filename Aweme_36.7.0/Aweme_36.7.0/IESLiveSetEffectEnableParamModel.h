@class IESLiveSetEffectEnableExtraModel;

@interface IESLiveSetEffectEnableParamModel : IESLiveBridgeModel

@property (nonatomic) BOOL enable;
@property (retain, nonatomic) IESLiveSetEffectEnableExtraModel *extra;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
