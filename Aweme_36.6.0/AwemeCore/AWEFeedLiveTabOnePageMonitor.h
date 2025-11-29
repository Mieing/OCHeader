@class NSString, NSMutableDictionary;

@interface AWEFeedLiveTabOnePageMonitor : NSObject <AWEFeedLiveTabViewControllerLifeCycleAction>

@property (nonatomic) BOOL hasReport;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) double createTime;
@property (retain, nonatomic) NSMutableDictionary *params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)feedLiveTabDidLeave;
- (void)recordEnterMethod:(id)a0;
- (void)recordPreviewFirstFrame;
- (void)recordPreviewTabId:(long long)a0 tabName:(id)a1;
- (void)recordPreviewResponse:(id)a0 error:(id)a1;
- (void)recordPreviewNetCostTime:(double)a0;
- (void)reportCountDown;
- (void)recordPreloadScene:(long long)a0;
- (void)recordRevisitResponse:(id)a0 error:(id)a1;
- (void)recordRevisitNetCostTime:(double)a0;
- (void)recordRevisitFirstShowStatus:(BOOL)a0;
- (void).cxx_destruct;
- (void)report;
- (id)init;
- (void)setup;

@end
