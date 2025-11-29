@class NSString, NSMutableDictionary;

@interface LiteAppDynamicModuleConfig : NSObject

@property (copy, nonatomic) NSString *moduleName;
@property (copy, nonatomic) NSString *className;
@property (retain, nonatomic) NSMutableDictionary *syncMethods;
@property (retain, nonatomic) NSMutableDictionary *asyncMethods;

- (id)initWithModuleName:(id)a0 forClass:(id)a1;
- (void)registerMethods;
- (void).cxx_destruct;

@end
