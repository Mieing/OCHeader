@class IESGCPTrackerTapGestureRecognizer;

@interface IESGCPTrackerUIViewInterceptor : IESGCPTrackerInterceptor

@property (nonatomic) BOOL isExposed;
@property (nonatomic) BOOL hadReportPageExposed;
@property (nonatomic) BOOL hadMonitorSuperViewAction;
@property (retain, nonatomic) IESGCPTrackerTapGestureRecognizer *trackerTapGesture;
@property (nonatomic) unsigned long long firstClickTriggerType;

- (void)startInterceptor;
- (void)stopInterceptor;
- (BOOL)couldInterceptTraceView;
- (void)didRecevieClickEvent:(unsigned long long)a0;
- (BOOL)getViewIsCurrentExposed:(id)a0;
- (void)hookUIViewStatusChangeEvents;
- (void)hookUIViewGestureClickEvent;
- (void)didReceviePageExposedChangeEvent:(BOOL)a0 triggerType:(unsigned long long)a1;
- (void)hookPageDestoryEvents;
- (id)findoutViewOwnerWith:(id)a0;
- (BOOL)isTriggerByPushViewController:(id)a0;
- (void)hookPageExposeEvents;
- (BOOL)couldHookForGesture:(id)a0;
- (void)insertTrackerTapGestureIfNeeded;
- (void)observeGestureClickEvent:(id)a0;
- (void)didRecevieGestureClickEvent:(id)a0;
- (void)iesgcp_didTap:(id)a0;
- (void)trackerViewDidTap;
- (void).cxx_destruct;

@end
