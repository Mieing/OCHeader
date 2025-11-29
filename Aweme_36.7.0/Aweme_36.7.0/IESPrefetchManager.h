@class NSMutableDictionary, NSLock, NSMutableArray;

@interface IESPrefetchManager : NSObject

@property (class, readonly, nonatomic) IESPrefetchManager *sharedInstance;

@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSMutableDictionary *loaderDictionary;
@property (retain, nonatomic) NSMutableArray *schemaResolvers;

- (id)loaderForBusiness:(id)a0;
- (id)registerCapability:(id)a0 forBusiness:(id)a1;
- (void)bindGeckoAccessKey:(id)a0 channels:(id)a1 forBusiness:(id)a2;
- (void)prefetchDataWithWebUrl:(id)a0;
- (id)allBiz;
- (void)registerSchemaResolver:(id)a0;
- (void)addDefaultSchemaResolver;
- (void)removeLoaderForBusiness:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
