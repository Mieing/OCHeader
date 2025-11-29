@class NSString;

@interface AWEFollowFeedSortEmptyMonitor : NSObject <AWEFollowFeedSortEmptyMonitorProtocol>

@property (nonatomic) BOOL preSortHasMore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)awemeStatsParamsWithAweme:(id)a0;
+ (void)followFeedStatsWithScene:(unsigned long long)a0 completionBlock:(id /* block */)a1;
+ (void)followFeedStats:(unsigned long long)a0 awemeModel:(id)a1 isShowSortEnd:(BOOL)a2;
+ (void)trackHasMoreSort:(BOOL)a0 itemIDs:(id)a1 scene:(unsigned long long)a2 intervalTime:(double)a3 isShowSortEnd:(BOOL)a4;
+ (void)fetchSortHasMore;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
