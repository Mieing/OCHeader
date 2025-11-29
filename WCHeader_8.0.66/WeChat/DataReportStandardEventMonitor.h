@class NSString, NSMutableDictionary, DataReportStayInfo, NSMutableArray;

@interface DataReportStandardEventMonitor : NSObject <DataReportStandardEventDelegate> {
    NSMutableArray *m_sessionStayInfosList;
    NSMutableDictionary *m_sessionStayInfos;
    NSMutableArray *m_pageStayInfosList;
    NSMutableDictionary *m_pageStayInfos;
    DataReportStayInfo *m_curBizStayInfo;
    unsigned long long m_lastAppInTime;
    float m_lastAppInBatteryLevel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onAppIn:(unsigned long long)a0;
- (void)onAppOut:(unsigned long long)a0;
- (void)onSessionIn:(unsigned long long)a0 page:(id)a1;
- (void)onSessionOut:(unsigned long long)a0 page:(id)a1;
- (void)onPageIn:(unsigned long long)a0 page:(id)a1 isSubPage:(BOOL)a2;
- (void)onPageOut:(unsigned long long)a0 page:(id)a1 isSubPage:(BOOL)a2;
- (void)onBizIn:(unsigned long long)a0 page:(id)a1;
- (void)onBizOut:(unsigned long long)a0 page:(id)a1;
- (void)onViewClk:(unsigned long long)a0 viewParams:(id)a1 routeRules:(id)a2;
- (void)onViewDoubleTap:(unsigned long long)a0 viewParams:(id)a1 routeRules:(id)a2;
- (void)onViewLongPress:(unsigned long long)a0 viewParams:(id)a1 routeRules:(id)a2;
- (void)onViewExp:(unsigned long long)a0 viewParams:(id)a1 routeRules:(id)a2;
- (void)onViewUnExp:(unsigned long long)a0 viewParams:(id)a1 routeRules:(id)a2;
- (void)onVideoPlay:(unsigned long long)a0;
- (void)onVideoPause:(unsigned long long)a0;
- (void)onVideoStop:(unsigned long long)a0;
- (void)onAudioPlay:(unsigned long long)a0;
- (void)onAudioPause:(unsigned long long)a0;
- (void)onAudioStop:(unsigned long long)a0;
- (void)onCgiReq:(id)a0 cgiParams:(id)a1 routeRules:(id)a2 time:(unsigned long long)a3;
- (void)onCgiResp:(id)a0 errCode:(long long)a1 errMsg:(id)a2 cgiParams:(id)a3 routeRules:(id)a4 time:(unsigned long long)a5;
- (void)onReset;
- (void).cxx_destruct;

@end
