@class NSMutableArray, NSMutableDictionary;

@interface WCFinderNativeDramaPromotionDataService : NSObject

@property (retain, nonatomic) NSMutableArray *lruIDs;
@property (retain, nonatomic) NSMutableDictionary *dataItemCache;
@property (retain, nonatomic) NSMutableDictionary *cgiCache;
@property (retain, nonatomic) NSMutableDictionary *succeededBlocks;
@property (retain, nonatomic) NSMutableDictionary *failedBlocks;
@property (nonatomic) BOOL isFetching;

- (id)init;
- (id)getPromotionForIdentifier:(id)a0;
- (void)getPromotionForIdentifier:(id)a0 scene:(int)a1 nativeDramaContext:(id)a2 succeeded:(id /* block */)a3 failed:(id /* block */)a4;
- (void)_enqueuedIdentifier:(id)a0;
- (void)_enqueuedIdentifier:(id)a0 succeeded:(id /* block */)a1 failed:(id /* block */)a2;
- (void)_successWithIdentifier:(id)a0 dataItem:(id)a1;
- (void)_failWithIdentifier:(id)a0 errorType:(int)a1 errorMsg:(id)a2;
- (void).cxx_destruct;

@end
