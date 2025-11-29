@class NSString;

@interface IESLiveUpdateLivePanelEffectParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *panel;
@property (copy, nonatomic) NSString *effectId;
@property (nonatomic) BOOL isApplied;
@property (copy, nonatomic) NSString *extra;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
