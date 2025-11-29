@class IESLiveInnerFeedContext, NSString, IESLiveInnerFeedEventMonitorQueue;

@interface IESLiveInnerFeedEventMonitor : NSObject <IESLiveInnerFeedDataControlAction, IESLiveInnerFeedDisplayAction>

@property (retain, nonatomic) IESLiveInnerFeedContext *context;
@property (nonatomic) double initTime;
@property (nonatomic) double viewLoadTime;
@property (retain, nonatomic) IESLiveInnerFeedEventMonitorQueue *mountQueue;
@property (retain, nonatomic) IESLiveInnerFeedEventMonitorQueue *unMountQueue;
@property (nonatomic) BOOL hasReport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)innerFeedDidLoad;
- (void)innerFeedDidEndUnmount;
- (void)innerFeedWillMountObject:(id)a0 atIndex:(long long)a1 currentIndex:(long long)a2;
- (void)innerFeedDidMountObject:(id)a0 atIndex:(long long)a1 lastIndex:(long long)a2;
- (void)innerFeedWillUnMountObject:(id)a0 atIndex:(long long)a1 unmountType:(long long)a2;
- (void)innerFeedDidUnMountObject:(id)a0 atIndex:(long long)a1 unmountType:(long long)a2;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;
- (void)reportEvent;

@end
