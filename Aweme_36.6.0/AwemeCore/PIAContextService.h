@class NSString, PIABiMapTable, YYMemoryCache;

@interface PIAContextService : NSObject <PIAContextService>

@property (retain, nonatomic) PIABiMapTable *contextMap;
@property (retain, nonatomic) YYMemoryCache *contextCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executePrepareServiceTask;

- (void)releaseContext:(id)a0;
- (id)initService;
- (id)createPIAContextWithURL:(id)a0;
- (id)createPIAContextWithInstance:(id)a0 URL:(id)a1;
- (id)getPIAContextWithInstance:(id)a0;
- (void)releaseContextForKey:(id)a0;
- (void).cxx_destruct;

@end
