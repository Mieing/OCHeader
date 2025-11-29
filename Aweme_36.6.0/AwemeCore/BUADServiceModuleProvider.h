@class NSHashTable;

@interface BUADServiceModuleProvider : NSObject

@property (retain, nonatomic) NSHashTable *delegates;

+ (id)provider;

- (id)getAllProvidedModules;
- (void)destroyProvider;
- (void).cxx_destruct;
- (void)addProvider:(id)a0;

@end
