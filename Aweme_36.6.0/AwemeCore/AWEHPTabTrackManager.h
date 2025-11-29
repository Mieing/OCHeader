@class NSMutableDictionary, NSString, AWEHPTabStayTimeTrackController, AWEHPEntranceStayTimeTrackController;

@interface AWEHPTabTrackManager : NSObject <AWEHPTabTrackManagerProtocol, AWEHPLifeCycleProtocol>

@property (retain, nonatomic) NSMutableDictionary *enterCounts;
@property (retain, nonatomic) AWEHPTabStayTimeTrackController *tabTimingController;
@property (retain, nonatomic) AWEHPEntranceStayTimeTrackController *entranceTimingController;
@property (retain, nonatomic) NSMutableDictionary *currentEnterTabParamsDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mergeTwoBizParams:(id)a0 bizParams2:(id)a1;
+ (id)sharedInstance;

- (void)enterHPSearchEntrance;
- (void)leaveHPSearchEntrance;
- (void)enterPublishEntrance;
- (void)leavePublishEntrance;
- (void)trackEnterTabWithModel:(id)a0;
- (void)trackLeaveTabWithModel:(id)a0;
- (id)getTabStayTimeTrackController;
- (long long)getTimingStayDurationWithTabID:(id)a0;
- (void)trakEnterHomePageTabWithTabID:(id)a0 trackModel:(id)a1;
- (id)getBizEnterTrackEventNameWithTabId:(id)a0;
- (id)getEnterTabParamsWithTabID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
