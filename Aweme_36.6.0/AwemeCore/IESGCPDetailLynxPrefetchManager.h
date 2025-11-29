@class NSMutableDictionary, NSDictionary, NSArray, NSString;

@interface IESGCPDetailLynxPrefetchManager : NSObject <IESGCPDIContextSubscriber, IESGCPDetailLynxPrefetchService>

@property (retain, nonatomic) NSMutableDictionary *cacheLynxPools;
@property (retain, nonatomic) NSDictionary *queryItems;
@property (retain, nonatomic) NSDictionary *schemaQueryItems;
@property (retain, nonatomic) NSArray *preloadLynxCardIds;
@property (retain, nonatomic) NSDictionary *lynxPreloadConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getPreloadConfig;

- (void)didSetGameCPDIContext;
- (BOOL)enableAnnieXCard;
- (void)startPrefetchDetailLynxPages;
- (id)initWithDetailViewModel:(id)a0;
- (id)popHybridViewFromLynxSchema:(id)a0;
- (void)cleanCachePool;
- (void)startPrefetchLynxViewFrom:(id)a0 isPage:(BOOL)a1;
- (id)getPrefetchLynxPages;
- (id)cacheKeyFromLynxSchema:(id)a0;
- (id)preloadBaseDataPuzzleViewWith:(id)a0 isPage:(BOOL)a1;
- (void).cxx_destruct;

@end
