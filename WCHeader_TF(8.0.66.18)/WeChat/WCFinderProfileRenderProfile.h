@class WCFinderCoverLoadCostTime, NSMutableArray;

@interface WCFinderProfileRenderProfile : NSObject

@property (retain, nonatomic) WCFinderCoverLoadCostTime *coverCost;
@property (nonatomic) BOOL needRecord;
@property (nonatomic) double beginTime;
@property (nonatomic) double allCGIFinishTime;
@property (retain, nonatomic) NSMutableArray *profileArray;
@property (nonatomic) BOOL hasFristPageLoading;
@property (nonatomic) BOOL hasHomePageLoading;
@property (nonatomic) BOOL hasFeedPageLoading;
@property (nonatomic) double headerLoadingEndTime;
@property (nonatomic) double homePageLoadingEndTime;
@property (nonatomic) double feedPageLoadingEndTime;

- (id)init;
- (void).cxx_destruct;

@end
