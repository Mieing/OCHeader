@class NSString, MFRTimelineReportInfo;

@interface WCMomentsFinderRecommendationReporter : MMUserService <MMServiceProtocol>

@property (readonly, nonatomic) MFRTimelineReportInfo *timelineReportInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginNewTimelineReportSession;
- (void)endLastTimelineReportSession;
- (void)didBeginNewSession:(BOOL)a0;
- (void)updateCurrentItemReportInfoWithRecommendationInfo:(id)a0;
- (void)updateCurrentItemReportInfoWithUnexposureReason:(long long)a0 isFinalReason:(BOOL)a1;
- (void)didClickFinderRecommendationButton:(int)a0;
- (void)willEnterTimelineViewController:(id)a0 cachedRecommendationInfo:(id)a1;
- (void)didLeaveTimelineViewController:(id)a0;
- (void)timelineViewControllerWillDisplayDataItem:(id)a0;
- (void)didClickMissReadButton;
- (void).cxx_destruct;

@end
