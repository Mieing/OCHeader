@class NSDictionary;

@interface AWEAwemeLazyParseModelBase : AWEAwemeModel

@property (copy, nonatomic) NSDictionary *lazyParseJSONDictionary;
@property unsigned long long lazyParseState;

+ (id)supportedLazyParseJsonKeyPaths;
+ (id)supportedLazyParsePropertyKeysByJsonKeyPath;
+ (id)lazyParseAwemeModelConfig;
+ (void)addLazyPropertyGetterToSubClass:(Class)a0 lazyParseJsonKeyBlackList:(id)a1 resultCallback:(id /* block */)a2;
+ (id)modelsFromJSONArray:(id)a0 error:(id *)a1;
+ (void)asyncParseLazyModels:(id)a0;
+ (long long)mergeModelCountPerloop;
+ (unsigned int)asyncParseQueueQos;
+ (id)modelFromJSONDictionary:(id)a0 error:(id *)a1;

- (void)addLazyParseJSONDictionary:(id)a0;
- (void)asyncParseLazyPropertyIfNeeded;
- (void).cxx_destruct;

@end
