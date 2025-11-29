@class NSDictionary, NSMutableDictionary, WCFinderGlobalWordingIconConfig;

@interface WCFinderWordingIconConfigGroup : NSObject

@property (retain, nonatomic) NSMutableDictionary *serverFieldSetterMap;
@property (retain, nonatomic) NSDictionary *localDefaultConfigs;
@property (copy, nonatomic) id /* block */ serverConfigSetter;
@property (retain, nonatomic) WCFinderGlobalWordingIconConfig *globalConfig;
@property (copy, nonatomic) id /* block */ globalConfigSetter;

+ (id)generatorGroupConfig;

- (void)doSomethingMagicLogic;
- (void).cxx_destruct;

@end
