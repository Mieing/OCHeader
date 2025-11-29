@class NSDictionary, NSString, NSRecursiveLock;

@interface AWEFeedAdClientAICache : HTSService <AWEFeedAdClientAICacheProtocol>

@property (retain, nonatomic) NSDictionary *slots;
@property (nonatomic) unsigned long long totalCost;
@property (nonatomic) unsigned long long totalCount;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)saveFeedWithScene:(id)a0 feed:(id)a1 slotId:(id)a2 cost:(unsigned long long)a3;
- (id)feedWithScene:(id)a0 itemId:(id)a1;
- (id)slotIdWithScene:(id)a0 itemId:(id)a1;
- (id)fetchItemId:(id)a0;
- (void)removeSlotFeedsWithScene:(id)a0 slotId:(id)a1;
- (BOOL)containsFeedWithScene:(id)a0 itemId:(id)a1;
- (id)outsideFeedWithScene:(id)a0 insideItemId:(id)a1;
- (id)slotFeedsWithScene:(id)a0 itemId:(id)a1;
- (id)slotFeedsGroupBySlotId:(id)a0;
- (void)removeSlotFeedsWithScene:(id)a0 itemId:(id)a1;
- (void)removeAll:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
