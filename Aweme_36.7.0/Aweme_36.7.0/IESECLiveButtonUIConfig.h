@class IESECLiveNormalUIConfig;

@interface IESECLiveButtonUIConfig : IESECLiveBaseViewUIConfig

@property (retain, nonatomic) IESECLiveNormalUIConfig *enabledConfig;
@property (retain, nonatomic) IESECLiveNormalUIConfig *disabledConfig;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
