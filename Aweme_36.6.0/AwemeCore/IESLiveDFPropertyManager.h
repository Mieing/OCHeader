@class NSMutableDictionary;

@interface IESLiveDFPropertyManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *properties;

+ (id)hanlderWithType:(long long)a0;
+ (id)shared;

- (void)configLayerProperties;
- (id /* block */)valueCompatibleBlockWithObjectType:(const char *)a0;
- (void)registerRead:(id /* block */)a0 update:(id /* block */)a1 compatible:(id /* block */)a2 forType:(long long)a3;
- (void)registerRead:(id /* block */)a0 bezierUpdate:(id /* block */)a1 compatible:(id /* block */)a2 forType:(long long)a3;
- (id)hanlderWithType:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
