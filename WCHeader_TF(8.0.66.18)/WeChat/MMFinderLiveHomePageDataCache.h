@class MMFinderLiveNavLiveStreamBaseModel;

@interface MMFinderLiveHomePageDataCache : NSObject

@property (retain, nonatomic) MMFinderLiveNavLiveStreamBaseModel *model;
@property (nonatomic) unsigned long long cacheTimeSec;
@property (nonatomic) unsigned long long cacheMaxTtlSec;

+ (id)cacheWithModel:(id)a0;

- (BOOL)valid;
- (void).cxx_destruct;

@end
