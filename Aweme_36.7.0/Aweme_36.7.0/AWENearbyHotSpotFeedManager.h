@class NSArray, AWENearbyHotSpotFeedListResponse;
@protocol AWEHttpTask;

@interface AWENearbyHotSpotFeedManager : NSObject

@property (retain, nonatomic) id<AWEHttpTask> requestTask;
@property (copy, nonatomic) AWENearbyHotSpotFeedListResponse *preHotSpotModel;
@property (copy, nonatomic) NSArray *JSBHotSpotList;
@property (copy, nonatomic) NSArray *JSBFirstHotSpotList;
@property (nonatomic) BOOL isMaskPublishTime;
@property (nonatomic) long long postExpiredTime;

+ (id)sharedManager;

- (void)updateCollectionStatus:(id)a0;
- (void)preloadWithCursor:(long long)a0 count:(long long)a1 scene:(long long)a2 extraParams:(id)a3;
- (void).cxx_destruct;
- (id)init;

@end
