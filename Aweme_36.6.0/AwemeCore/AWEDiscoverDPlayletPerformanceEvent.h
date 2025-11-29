@class NSString, AWEDiscoverDPlayletPerformanceEventVideoUnit, NSDictionary, AWEDiscoverDPlayletPerformanceEventRequestUnit, AWEDiscoverDPlayletPerformanceEventUnit;

@interface AWEDiscoverDPlayletPerformanceEvent : NSObject

@property (readonly, nonatomic) double initTime;
@property (copy, nonatomic) NSString *awemeId;
@property (copy, nonatomic) NSString *pageName;
@property (copy, nonatomic) NSString *prePageClassName;
@property (copy, nonatomic) NSString *clickEntranceMode;
@property (copy, nonatomic) NSString *playletId;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *scrollInitId;
@property (nonatomic) BOOL isReusePlayer;
@property (nonatomic) BOOL reusePlayerIsHasFirstFrame;
@property (nonatomic) double transtionTime;
@property (retain, nonatomic) AWEDiscoverDPlayletPerformanceEventRequestUnit *detailRequestUnit;
@property (retain, nonatomic) AWEDiscoverDPlayletPerformanceEventRequestUnit *awemeListRequestUnit;
@property (retain, nonatomic) AWEDiscoverDPlayletPerformanceEventRequestUnit *relativeAwemeListRequestUnit;
@property (retain, nonatomic) AWEDiscoverDPlayletPerformanceEventRequestUnit *setDataPannelUnit;
@property (retain, nonatomic) AWEDiscoverDPlayletPerformanceEventUnit *vcInitUnit;
@property (retain, nonatomic) AWEDiscoverDPlayletPerformanceEventUnit *viewLoadUnit;
@property (retain, nonatomic) AWEDiscoverDPlayletPerformanceEventVideoUnit *firstFrameInFirstVideoUnit;
@property (retain, nonatomic) AWEDiscoverDPlayletPerformanceEventRequestUnit *awemePreListRequestUnit;
@property (retain, nonatomic) AWEDiscoverDPlayletPerformanceEventUnit *viewWillAppearUnit;
@property (retain, nonatomic) AWEDiscoverDPlayletPerformanceEventUnit *viewDidAppearUnit;
@property (retain, nonatomic) AWEDiscoverDPlayletPerformanceEventUnit *playletStayTimeUnit;
@property (retain, nonatomic) NSDictionary *firstModelTrackerParams;

- (double)fromContianerInitTimeWithUnit:(double)a0;
- (id)useOutsideDataStr;
- (id)toParams;
- (void).cxx_destruct;
- (id)init;

@end
