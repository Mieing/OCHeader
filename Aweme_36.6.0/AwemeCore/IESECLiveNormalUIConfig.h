@class IESECLiveImageConfigModel, IESECLiveTextConfigModel, IESECLiveLayoutConfig, IESECLiveBorderConfigModel, IESECLiveBgConfigModel, NSNumber;

@interface IESECLiveNormalUIConfig : IESECLiveBaseViewUIConfig

@property (retain, nonatomic) IESECLiveTextConfigModel *textConfig;
@property (retain, nonatomic) IESECLiveImageConfigModel *imageConfig;
@property (retain, nonatomic) IESECLiveBgConfigModel *bgConfig;
@property (retain, nonatomic) IESECLiveBorderConfigModel *borderConfig;
@property (retain, nonatomic) IESECLiveLayoutConfig *layoutConfig;
@property (retain, nonatomic) NSNumber *alpha;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
