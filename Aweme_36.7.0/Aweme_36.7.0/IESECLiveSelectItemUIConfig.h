@class IESECLiveNormalUIConfig;

@interface IESECLiveSelectItemUIConfig : IESECLiveBaseViewUIConfig

@property (retain, nonatomic) IESECLiveNormalUIConfig *selectedConfig;
@property (retain, nonatomic) IESECLiveNormalUIConfig *unselectedConfig;
@property (retain, nonatomic) IESECLiveNormalUIConfig *disabledConfig;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
