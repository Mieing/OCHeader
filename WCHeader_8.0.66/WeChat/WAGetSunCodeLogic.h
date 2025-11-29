@class MMLRUCache;

@interface WAGetSunCodeLogic : NSObject

@property (nonatomic) BOOL isRunning;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (nonatomic) BOOL isFetching;
@property (retain, nonatomic) MMLRUCache *cache;

- (id)init;
- (id)cacheKeyForPath:(id)a0;
- (void)getSunCodeWithAppId:(id)a0 scene:(unsigned int)a1 path:(id)a2 success:(id /* block */)a3 fail:(id /* block */)a4;
- (BOOL)isFetchingSunCode;
- (void).cxx_destruct;

@end
