@class WCFinderProfilePreloadInfo, WCFinderProfilePreloadParams, NSMutableArray;

@interface WCFinderProfilePreloadTask : NSObject

@property (retain, nonatomic) WCFinderProfilePreloadParams *params;
@property (retain, nonatomic) WCFinderProfilePreloadInfo *filledPreloadInfo;
@property (nonatomic) long long state;
@property (nonatomic) unsigned long long startTime;
@property (retain, nonatomic) NSMutableArray *pendingFetchCGI;

- (void).cxx_destruct;

@end
