@protocol IESIMEnvConfigService;

@interface IESIMEnvConfigSyntacticSugar : NSObject

@property (weak) id<IESIMEnvConfigService> service;

+ (id)shared;

- (void).cxx_destruct;

@end
