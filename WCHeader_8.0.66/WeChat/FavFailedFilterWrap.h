@class NSDate, FavSourceIdFiltersAndCtx;

@interface FavFailedFilterWrap : NSObject

@property (retain, nonatomic) FavSourceIdFiltersAndCtx *failedFilter;
@property (retain, nonatomic) NSDate *failedTime;

- (void).cxx_destruct;

@end
