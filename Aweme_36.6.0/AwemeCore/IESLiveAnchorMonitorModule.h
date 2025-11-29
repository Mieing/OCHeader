@class IESLiveFullLinkMonitorImp;

@interface IESLiveAnchorMonitorModule : IESLiveAnchorExecutionModule

@property (retain, nonatomic) IESLiveFullLinkMonitorImp *fullLinkMonitor;

- (void)trackLiveCreateDuration;
- (id)logLiveType:(long long)a0;
- (void).cxx_destruct;
- (void)setup;

@end
