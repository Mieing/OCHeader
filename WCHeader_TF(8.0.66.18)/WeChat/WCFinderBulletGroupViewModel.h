@class WCFinderBulletGeneralConfig, NSArray, WCFinderFeedContentVM, WCFinderBulletConfig, NSMutableSet, NSMutableArray;

@interface WCFinderBulletGroupViewModel : NSObject

@property (retain, nonatomic) WCFinderBulletConfig *config;
@property (retain, nonatomic) WCFinderBulletGeneralConfig *generalConfig;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (nonatomic) int commentScene;
@property (retain, nonatomic) NSArray *lines;
@property (retain, nonatomic) NSMutableSet *bulletIds;
@property (retain, nonatomic) NSMutableSet *requestCommentIds;
@property (nonatomic) BOOL lineUpdating;
@property (retain, nonatomic) NSMutableArray *calculatePendingQueue;
@property (retain, nonatomic) NSMutableArray *aggregatedItems;
@property (nonatomic) BOOL enableFetch;
@property (nonatomic) double containerWidth;

- (id)init;
- (void)updateConfig:(id)a0 contentVM:(id)a1 commentScene:(int)a2;
- (void)addItems:(id)a0;
- (void)addItem:(id)a0;
- (void)removeItem:(id)a0;
- (void)removeAllItems;
- (void)_resolvedItems:(id)a0 bulletIds:(id)a1 lines:(id)a2 aggregatedItems:(id)a3;
- (void)_resolvedAggregatedItems:(id)a0 aggregatedItems:(id)a1;
- (BOOL)_itemValid:(id)a0;
- (long long)insertItemToLine:(id)a0 force:(BOOL)a1;
- (void)resolvedItemLayoutContext:(id)a0;
- (void)_resolvedItemDateWithItem:(id)a0;
- (id)willAppearItemsForTime:(double)a0;
- (long long)_insertItem:(id)a0 atLines:(id)a1 aggregatedItems:(id)a2 remainingTimes:(long long)a3;
- (BOOL)_hasTimeRangeOverlapWithAggregatedItems:(id)a0 startTime:(double)a1 endTime:(double)a2;
- (id)getCache;
- (void)applyCache:(id)a0;
- (void)followAggregateBulletWithItem:(id)a0;
- (void)fetchDataWithTimestamp:(double)a0 needCommentIds:(id)a1;
- (void).cxx_destruct;

@end
