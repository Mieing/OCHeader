@class NSString, NSArray;

@interface IESLiveLiveGetLiveEffectInfoParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *panel;
@property (copy, nonatomic) NSArray *effectIDList;
@property (copy, nonatomic) NSArray *effectResourceIDList;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
