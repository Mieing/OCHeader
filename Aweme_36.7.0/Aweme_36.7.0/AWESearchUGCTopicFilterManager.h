@interface AWESearchUGCTopicFilterManager : NSObject

@property (nonatomic) long long sortType;
@property (readonly, nonatomic) BOOL isFilteredSearch;

- (void)resetFilters;
- (void)updateSortType:(long long)a0;
- (BOOL)getIsFilteredSearch;
- (id)getFilterParams;
- (id)init;

@end
