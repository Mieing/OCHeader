@class NSMutableDictionary;

@interface CommonHybridRouterParamsBase : CommonHybridRouterParamsObjc

@property (readonly, nonatomic) NSMutableDictionary *customArgs;

- (id)init;
- (id)getPlatformKey;
- (id)getPlatformArgs;
- (void).cxx_destruct;

@end
