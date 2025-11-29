@class NSArray;

@interface WCSQLiteLintConfig : MatrixPluginConfig

@property (retain, nonatomic) NSArray *ennableCheckers;

+ (id)defaultConfiguration;

- (void).cxx_destruct;

@end
