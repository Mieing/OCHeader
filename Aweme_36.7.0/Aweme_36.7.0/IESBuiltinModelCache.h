@class NSMutableDictionary, NSRecursiveLock;

@interface IESBuiltinModelCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *modelCache;
@property (retain, nonatomic) NSRecursiveLock *modelCacheLock;
@property (nonatomic) long long modelsCount;

+ (id)sharedCache;

- (void)scanModelsInDirectory:(id)a0;
- (void)processModelPath:(id)a0 fullPath:(id)a1 relativePath:(id)a2;
- (id)parseModelFileName:(id)a0 fullPath:(id)a1;
- (id)getAllModelCache;
- (void)loadBuiltinModels:(id)a0;
- (id)builtinModelForName:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
