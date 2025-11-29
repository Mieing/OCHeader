@class NSMutableDictionary;

@interface FLTStatusCallbackProcessor : NSObject

@property (retain, nonatomic) NSMutableDictionary *command2CallbackGenerator;
@property (retain, nonatomic) NSMutableDictionary *command2ApiList;

+ (Class)generatorClassForCommand:(id)a0;

- (id)init;
- (void)registerCommonApi:(id)a0 forCommandList:(id)a1;
- (void)unregisterCommonApi:(id)a0 forCommandList:(id)a1;
- (void)unregisterCommonApiForAllCommands:(id)a0;
- (id)generatorForCommand:(id)a0;
- (id)createGeneratorForCommand:(id)a0;
- (void).cxx_destruct;

@end
