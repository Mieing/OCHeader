@class FinderLiveDiscoverPreloadInfo, NSData, ClientSpecificConfig;

@interface WCFinderNavLiveStreamRequestModel : WCFinderLiveStreamRequestModel

@property (retain, nonatomic) FinderLiveDiscoverPreloadInfo *discoverPreloadInfo;
@property (retain, nonatomic) NSData *preNavliveMoreLiveObjectsBuffer;
@property (nonatomic) BOOL isPreRecommendRequest;
@property (retain, nonatomic) NSData *jumpNavliveBuffer;
@property (nonatomic) unsigned long long homePageScene;
@property (retain, nonatomic) ClientSpecificConfig *clientSpecConfig;
@property (nonatomic) unsigned int nextPagePullType;

- (void).cxx_destruct;

@end
