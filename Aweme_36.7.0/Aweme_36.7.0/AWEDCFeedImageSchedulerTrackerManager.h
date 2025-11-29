@class NSMutableDictionary, NSMutableArray;

@interface AWEDCFeedImageSchedulerTrackerManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *imageCostDict;
@property (nonatomic) long long maxBatchCount;
@property (nonatomic) long long minBatchCount;
@property (retain, nonatomic) NSMutableDictionary *batchCountDict;
@property (retain, nonatomic) NSMutableArray *firstMixedIDArray;
@property (retain, nonatomic) NSMutableDictionary *itemIDList;
@property (retain, nonatomic) NSMutableDictionary *itemIDBatchCountMap;

+ (BOOL)enableSchedulerTracker:(id)a0;
+ (double)timeDiffBetweenImages;
+ (id)enableTrackerList;
+ (id)sharedInstance;

- (void)recordBatchCount:(long long)a0 cellIndex:(long long)a1 costTime:(double)a2 itemID:(id)a3;
- (void)trackerReverseOrder;
- (long long)batchCountWithItemID:(id)a0;
- (void)recordItemID:(id)a0 batchCount:(long long)a1;
- (long long)mixedCount:(id)a0 itemList:(id)a1;
- (void).cxx_destruct;
- (void)resetState;
- (id)init;

@end
