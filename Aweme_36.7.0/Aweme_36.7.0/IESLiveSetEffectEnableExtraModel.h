@class NSNumber, NSString;

@interface IESLiveSetEffectEnableExtraModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *isSingleInputMode;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) BOOL force;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
