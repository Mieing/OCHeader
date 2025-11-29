@class NSDictionary, NSMutableArray, NSMutableSet;

@interface WCFinderOtherTabPrefetchManager : NSObject

@property (retain, nonatomic) NSMutableArray *prefetchQueue;
@property (retain, nonatomic) NSMutableSet *requestingTabSet;
@property (retain, nonatomic) NSDictionary *conflictTabMap;

- (void)prefetchOtherTabAtProperTime:(int)a0;
- (void)startRequestNewDataWithPullType:(unsigned long long)a0 tabType:(int)a1;
- (void)requestNewDataFinishWithPullType:(unsigned long long)a0 tabType:(int)a1;
- (void)prefetchIfOk;
- (void)prefetchImmediatelyWithTab:(int)a0;
- (id)redDotPathWithTabType:(int)a0;
- (void).cxx_destruct;

@end
