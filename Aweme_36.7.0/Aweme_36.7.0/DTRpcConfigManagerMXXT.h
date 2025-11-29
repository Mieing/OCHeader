@class NSMutableDictionary, DTRpcConfigMXXT;

@interface DTRpcConfigManagerMXXT : NSObject

@property (retain, nonatomic) DTRpcConfigMXXT *globalConfig;
@property (retain, nonatomic) NSMutableDictionary *operationTypeConfigs;

- (id)configForScope:(int)a0;
- (void)setConfig:(id)a0 forScope:(int)a1;
- (id)preferredConfig:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
