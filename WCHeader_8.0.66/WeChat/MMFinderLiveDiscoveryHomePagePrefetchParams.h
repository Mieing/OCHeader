@class WCFinderRedDotCtrlInfo, FinderRedDotExtInfo;

@interface MMFinderLiveDiscoveryHomePagePrefetchParams : NSObject

@property (nonatomic) unsigned long long prefetchType;
@property (nonatomic) BOOL isHomePageVCCached;
@property (retain, nonatomic) WCFinderRedDotCtrlInfo *redDotCtrlInfo;
@property (retain, nonatomic) FinderRedDotExtInfo *redDotExtInfo;

- (void).cxx_destruct;

@end
