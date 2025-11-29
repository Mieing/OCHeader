@class NSString, NSMutableDictionary, DataReportSubstitutePageStack, DataReportSubstitutePage, NSMutableArray;
@protocol DataReportStandardEventDelegate;

@interface DataReportEventMonitor : MMUserService <DataReportViewExposeExt, MMUIViewControllerExt, DataReportMultiEventDelegate, DataReportPageEventExt, DataReportViewOperateExt, MMServiceProtocol> {
    NSMutableArray *m_backgroundEventBuffers;
    NSMutableDictionary *m_viewExposeTime;
    DataReportSubstitutePageStack *m_pageStack;
    DataReportSubstitutePage *m_curBizPage;
    unsigned long long m_curBizGroupId;
    BOOL m_isFront;
    unsigned long long m_appInTime;
    NSMutableArray *m_viewExpInfos;
    NSMutableArray *m_curExpViewUniqueIds;
    unsigned long long m_appInOutType;
    NSMutableDictionary *m_pageAppearTimes;
    NSString *m_appIoMethod;
}

@property (retain, nonatomic) id<DataReportStandardEventDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)startMonitor;
- (void)stopMonitor;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)appEnterForeground;
- (void)appEnterBackground;
- (void)MMUIViewControllerDidAppear:(id)a0;
- (void)MMUIViewControllerDidDisappear:(id)a0;
- (void)MMUIViewControllerDidBePopOrDismiss:(id)a0;
- (void)checkStackTopPage:(id)a0;
- (void)topViewControllerDidAppear:(id)a0;
- (void)onPageEventAppear:(id)a0;
- (void)onPageEventDisappear:(id)a0;
- (void)onPageEventAppear:(id)a0 hash:(unsigned long long)a1 pageId:(unsigned long long)a2 bizGroupId:(unsigned long long)a3;
- (void)onPageEventDisappear:(id)a0 hash:(unsigned long long)a1 pageId:(unsigned long long)a2 bizGroupId:(unsigned long long)a3;
- (void)clearPage:(id)a0 time:(unsigned long long)a1;
- (void)onVCExpose:(id)a0 checkType:(unsigned long long)a1;
- (void)onVCUnExpose:(id)a0 checkType:(unsigned long long)a1;
- (void)subPageEvent:(id)a0 vc:(id)a1 checkType:(unsigned long long)a2;
- (void)onViewExpose:(id)a0 checkType:(unsigned long long)a1;
- (void)onViewUnExpose:(id)a0 checkType:(unsigned long long)a1;
- (void)onViewClick:(id)a0;
- (void)onViewDoubleTap:(id)a0;
- (void)onViewLongPress:(id)a0;
- (void)onPbCgiReq:(id)a0 cgiName:(id)a1;
- (void)onPbCgiResq:(id)a0 cgiName:(id)a1 errCode:(unsigned int)a2 errMsg:(id)a3;
- (void)appForeground:(unsigned long long)a0;
- (void)appBackground:(unsigned long long)a0;
- (void)triggerSubPageEvent:(id)a0 page:(id)a1 time:(unsigned long long)a2;
- (void)pageAppear:(id)a0 time:(unsigned long long)a1;
- (void)setPageInfoWhenVcAppear:(id)a0;
- (void)fillPageInfo:(id)a0;
- (void)checkBizIn:(id)a0 time:(unsigned long long)a1;
- (void)checkBizOut:(id)a0 time:(unsigned long long)a1;
- (void)viewClk:(id)a0 time:(unsigned long long)a1 otherParams:(id)a2;
- (void)viewDoubleTap:(id)a0 time:(unsigned long long)a1 otherParams:(id)a2;
- (void)viewLongPress:(id)a0 time:(unsigned long long)a1 otherParams:(id)a2;
- (void)viewExp:(id)a0 time:(unsigned long long)a1 otherParams:(id)a2;
- (void)viewUnExp:(id)a0 time:(unsigned long long)a1 otherParams:(id)a2;
- (void)checkViewExp:(id)a0;
- (void)cgiReq:(id)a0 cgiParams:(id)a1 routeRules:(id)a2 time:(unsigned long long)a3;
- (void)cgiResp:(id)a0 errCode:(unsigned int)a1 errMsg:(id)a2 cgiParams:(id)a3 routeRules:(id)a4 time:(unsigned long long)a5;
- (void).cxx_destruct;

@end
