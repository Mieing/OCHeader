@class NSString, AWEFeedSchedulePostBarView;
@protocol AWEFeedViewedViewBarContextProtocol;

@interface AWEFeedSchedulePostBarController : NSObject <AWEAwemeDetailBottomBarController>

@property (retain, nonatomic) id<AWEFeedViewedViewBarContextProtocol> context;
@property (retain, nonatomic) AWEFeedSchedulePostBarView *bottomBarView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBottomBarWithAweme:(id)a0 updateTiming:(long long)a1;
- (BOOL)canShowBottomBarForAweme:(id)a0;
- (void)trackBarShow:(id)a0;
- (void).cxx_destruct;
- (Class)contextClass;

@end
