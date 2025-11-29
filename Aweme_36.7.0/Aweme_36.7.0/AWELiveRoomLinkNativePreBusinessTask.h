@class AWELiveRoomLinkNativeEnterPreParam;

@interface AWELiveRoomLinkNativePreBusinessTask : IESLiveLinkTask

@property (retain, nonatomic) AWELiveRoomLinkNativeEnterPreParam *enterParam;

- (void)p_checkHTTPDNSEnableOrNot;
- (BOOL)p_isNeedChildModeMonitorWithEnterFrom:(id)a0 enterMethod:(id)a1;
- (void)childModeMonitor;
- (void)updateContextParam:(id)a0;
- (void).cxx_destruct;
- (void)run;

@end
