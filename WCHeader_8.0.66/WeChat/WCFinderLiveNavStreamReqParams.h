@class FinderLiveDiscoverPreloadConfig, NSString, WCFinderLiveTabInfo, NSData, ClientSpecificConfig, NSMutableArray, WCFinderRedDotCtrlInfo;

@interface WCFinderLiveNavStreamReqParams : NSObject

@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned long long pullType;
@property (retain, nonatomic) NSMutableArray *markUnreadList;
@property (nonatomic) int fromScene;
@property (retain, nonatomic) NSString *fromSceneStr;
@property (nonatomic) int commentScene;
@property (retain, nonatomic) NSString *byPass;
@property (nonatomic) unsigned long long containerId;
@property (nonatomic) unsigned long long relatedObjectId;
@property (retain, nonatomic) NSMutableArray *containerContext;
@property (retain, nonatomic) WCFinderRedDotCtrlInfo *redDotCtrlInfo;
@property (retain, nonatomic) WCFinderLiveTabInfo *liveTabInfo;
@property (nonatomic) unsigned long long cacheDurationInSeconds;
@property (nonatomic) BOOL isPreRecommendRequest;
@property (nonatomic) float predictScore;
@property (retain, nonatomic) FinderLiveDiscoverPreloadConfig *preloadConfig;
@property (nonatomic) BOOL parallelCgiWithLite;
@property (retain, nonatomic) NSData *jumpNavliveBuffer;
@property (nonatomic) unsigned long long homePageScene;
@property (retain, nonatomic) NSData *prefetchObjectsBuffer;
@property (retain, nonatomic) ClientSpecificConfig *clientSpecConfig;
@property (nonatomic) unsigned int nextPagePullType;

- (void).cxx_destruct;

@end
