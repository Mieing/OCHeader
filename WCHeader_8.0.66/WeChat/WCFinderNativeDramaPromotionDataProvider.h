@class NSMutableArray, NSMutableDictionary;

@interface WCFinderNativeDramaPromotionDataProvider : NSObject

@property (retain, nonatomic) NSMutableArray *lruIDs;
@property (retain, nonatomic) NSMutableDictionary *cache;
@property (retain, nonatomic) NSMutableDictionary *cgiCache;
@property (retain, nonatomic) NSMutableDictionary *succeededBlocks;
@property (retain, nonatomic) NSMutableDictionary *failedBlocks;
@property (readonly, nonatomic) BOOL isFetching;
@property (nonatomic) int scene;

- (id)initWithScene:(int)a0;
- (id)promotionForIdentifier:(id)a0;
- (void)getPromotionForIdentifier:(id)a0 nativeDramaContext:(id)a1 succeeded:(id /* block */)a2 failed:(id /* block */)a3;
- (void)_enqueuedIdentifier:(id)a0;
- (void)_enqueuedIdentifier:(id)a0 succeeded:(id /* block */)a1 failed:(id /* block */)a2;
- (void)_successWithIdentifier:(id)a0 dataItem:(id)a1;
- (void)_failWithIdentifier:(id)a0 errorType:(int)a1 errorMsg:(id)a2;
- (id)_contentVMWithDataItem:(id)a0;
- (void).cxx_destruct;

@end
