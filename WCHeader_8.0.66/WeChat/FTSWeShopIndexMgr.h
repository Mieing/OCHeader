@class FTSWeShopDB;

@interface FTSWeShopIndexMgr : FTSIndexMgr

@property (retain, nonatomic) FTSWeShopDB *ftsWeShopDB;
@property (nonatomic) BOOL isIndexing;

- (id)initWithFTSDB:(id)a0;
- (void)iFTSIndexingInit;
- (void)iFTSIndexingFireTask:(int)a0;
- (void)iFTSIndexingFinish;
- (void)iFTSIndexingMemoryWarning;
- (void)iFTSClearIndex;
- (void)fireWeShopIndexingTaskLoop;
- (BOOL)doWeShopIndexingTask;
- (void).cxx_destruct;

@end
