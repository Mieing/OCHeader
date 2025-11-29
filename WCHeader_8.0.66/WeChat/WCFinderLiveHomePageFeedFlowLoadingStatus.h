@interface WCFinderLiveHomePageFeedFlowLoadingStatus : NSObject

@property (nonatomic) unsigned long long loadingStartTimeMS;
@property (nonatomic) unsigned long long loadingEndTimeMS;
@property (nonatomic) int loadingType;
@property (weak, nonatomic) id loadingContext;

- (id)description;
- (void).cxx_destruct;

@end
