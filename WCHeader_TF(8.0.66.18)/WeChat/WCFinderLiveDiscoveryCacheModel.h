@class WCFinderTabPageModel;

@interface WCFinderLiveDiscoveryCacheModel : NSObject

@property (retain, nonatomic) WCFinderTabPageModel *liveModel;
@property (nonatomic) double lastRefreshTime;
@property (nonatomic) BOOL isLocationServiceAuthrized;
@property (nonatomic) BOOL hasAlreadyExposed;
@property (nonatomic) unsigned long long selectTabId;

- (void).cxx_destruct;

@end
