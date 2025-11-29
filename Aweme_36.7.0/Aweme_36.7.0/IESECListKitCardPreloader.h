@class NSString, NSMutableArray, YYMemoryCache;
@protocol IESECListKitCardPreloaderTaskProvider;

@interface IESECListKitCardPreloader : NSObject <IESECListKitCardProvider>

@property (retain, nonatomic) YYMemoryCache *viewCache;
@property (retain, nonatomic) NSMutableArray *taskQueue;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (nonatomic) unsigned long long totleCount;
@property (nonatomic) unsigned long long successCount;
@property (nonatomic) BOOL stoped;
@property (copy, nonatomic) NSString *listCardsContextID;
@property (weak, nonatomic) id<IESECListKitCardPreloaderTaskProvider> preloadTaskProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startIfNeed;
- (id)cardWithSchema:(id)a0 itemType:(unsigned long long)a1 engineType:(unsigned long long)a2;
- (id)listEnvID;
- (void)preloadWithModels:(id)a0 complete:(id /* block */)a1;
- (id)cacheKeyWithSchema:(id)a0;
- (id)getFirst;
- (void)markReusable:(id)a0 schema:(id)a1 itemType:(unsigned long long)a2 engineType:(unsigned long long)a3;
- (void)enqueue:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (id)cacheKey:(id)a0;

@end
