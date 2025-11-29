@class NSString;

@interface IESLiveLiveOpenLiveEffectSelectPanelParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *panel;
@property (copy, nonatomic) NSString *categoryKey;
@property (copy, nonatomic) NSString *selectEffectID;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
