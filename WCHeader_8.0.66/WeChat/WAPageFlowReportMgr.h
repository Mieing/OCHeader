@class NSString, NSMutableDictionary, WAPageFlowSessionInfo, WAPageFlowAppInfo, WAPageFlowObject;

@interface WAPageFlowReportMgr : MMUserService <MMServiceProtocol> {
    WAPageFlowObject *m_currentPage;
    unsigned int m_EntranceWebviewID;
    unsigned int m_lastClickTime;
    unsigned long long m_lastClickTimeInMs;
    NSMutableDictionary *m_preSceneMap;
    NSMutableDictionary *m_preSceneInfoMap;
    NSMutableDictionary *m_codeSceneMap;
    NSString *m_weappUsername;
    unsigned long long m_weappFromScene;
    unsigned long long m_weappRealStartUpTimeInMs;
}

@property (retain, nonatomic) WAPageFlowAppInfo *currentAppInfo;
@property (retain, nonatomic) WAPageFlowSessionInfo *currentSessionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (id)currentPage;
- (id)currentPageReferPagePath;
- (unsigned int)lastClickTimeStamp;
- (unsigned long long)lastClickTimeStampInMs;
- (unsigned long long)weappStartUpTimeStampInMs;
- (void)onWeAppProcessBegin:(id)a0;
- (void)onWeAppProcessRelaunchHomeInSessionInfo:(id)a0;
- (void)onWeAppProcessTriggerDownload;
- (void)onWeAppStartUpProcessTerminate:(unsigned int)a0;
- (void)onWeAppBecomeActive:(id)a0 appInfo:(id)a1 openFromWeApp:(BOOL)a2;
- (void)onFirstPageInit:(id)a0 query:(id)a1 homeWebview:(id)a2;
- (void)onBackFromLauchWeApp;
- (void)onWebViewIndexFinished;
- (void)onTargetToPage:(id)a0 toWebviewIfExist:(id)a1;
- (void)onTargetToWeApp:(id)a0 appid:(id)a1;
- (void)onTargetToNativaPage:(id)a0;
- (void)onTargetToWebPage:(id)a0;
- (void)onBackOnPage:(id)a0 toPage:(id)a1;
- (void)onBackFromNative:(id)a0;
- (void)onAppExit:(unsigned int)a0 onPage:(id)a1;
- (void)onAppEnterBackground;
- (void)onFunctionalPageStartGame;
- (void)onUserOperate;
- (id)genDefaultPagePVItem;
- (void)rigisterPreScene:(unsigned long long)a0 preSourceInfo:(id)a1 forUrl:(id)a2;
- (unsigned long long)preSceneForUrlIfExist:(id)a0;
- (id)preSceneNoteForUrlIfExist:(id)a0;
- (void)registerCodeScene:(unsigned long long)a0 forUrl:(id)a1;
- (unsigned long long)codeSceneForUrlIfExist:(id)a0;
- (void)reprotWAWebViewPV:(id)a0;
- (id)genBasePath:(id)a0;
- (id)genQuery:(id)a0;
- (void).cxx_destruct;

@end
