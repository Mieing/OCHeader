@class NSDictionary, AWETrackerContext;

@interface SearchCachalotContext : CachalotContext

@property (retain, nonatomic) AWETrackerContext *trackerContext;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) BOOL isRefresh;
@property (nonatomic) unsigned long long bindDataCount;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
