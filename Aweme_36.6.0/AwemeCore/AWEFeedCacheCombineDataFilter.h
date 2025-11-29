@class NSArray, NSString;

@interface AWEFeedCacheCombineDataFilter : NSObject <AWEFeedCacheDataFilter>

@property (copy, nonatomic) NSArray *dataFilters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isFilterWithModel:(id)a0;
- (id)initWithDataFilters:(id)a0;
- (void).cxx_destruct;

@end
