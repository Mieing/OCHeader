@class NSMapTable, BDPNovelLRUCache, NSOperationQueue, NSString;

@interface BDPNovelLayoutManager : NSObject <BDPNovelLayoutDelegate>

@property (retain, nonatomic) NSOperationQueue *layoutQueue;
@property (retain, nonatomic) BDPNovelLRUCache *lruDataCache;
@property (retain, nonatomic) NSMapTable *weakDataMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)silentRefreshCurrentContent:(id)a0;
- (void)parseAndLayoutWithContentMeta:(id)a0 priority:(long long)a1 componentModel:(id)a2 layoutCallbackDelegate:(id)a3;
- (void)dropAllLayoutData;
- (void)cancelAllLayoutOperation;
- (id)getContentDataWithMeta:(id)a0;
- (id)prepareDataForContentMeta:(id)a0 componentModel:(id)a1;
- (void)notifyAllDelegateForData:(id)a0 onPageLayouted:(id)a1;
- (void)notifyAllDelegateForMeta:(id)a0 onPageLayouted:(id)a1;
- (void)layoutFinished:(id)a0;
- (void)onPageLayouted:(id)a0 meta:(id)a1 isLast:(BOOL)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCacheCapacity:(long long)a0;
- (long long)cacheCapacity;

@end
