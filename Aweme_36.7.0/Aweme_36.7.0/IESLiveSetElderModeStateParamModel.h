@class NSString;

@interface IESLiveSetElderModeStateParamModel : IESLiveBridgeModel

@property (nonatomic) BOOL toState;
@property (nonatomic) BOOL shouldDelayEffect;
@property (copy, nonatomic) NSString *enterFrom;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
