@class WCFinderProfilePreloadCGIInfo;

@interface WCFinderProfilePreloadInfo : NSObject

@property (retain, nonatomic) WCFinderProfilePreloadCGIInfo *header;
@property (retain, nonatomic) WCFinderProfilePreloadCGIInfo *userpage;
@property (retain, nonatomic) WCFinderProfilePreloadCGIInfo *homepage;

- (id)toReportJson;
- (void).cxx_destruct;

@end
