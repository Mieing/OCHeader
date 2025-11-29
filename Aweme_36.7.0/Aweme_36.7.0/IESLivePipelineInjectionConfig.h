@class NSString, NSArray;

@interface IESLivePipelineInjectionConfig : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) Class injectionClass;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSArray *modules;
@property (readonly, nonatomic) NSArray *stages;

- (id)initWithName:(id)a0 injectionClass:(Class)a1 injectionType:(unsigned long long)a2 injectionModules:(id)a3 injectionStages:(id)a4;
- (BOOL)appliesToStage:(id)a0 moduleName:(id)a1;
- (void).cxx_destruct;

@end
