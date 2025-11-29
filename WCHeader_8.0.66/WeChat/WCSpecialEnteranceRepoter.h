@class NSString, NSMutableDictionary, NSMutableSet, NSMutableArray;

@interface WCSpecialEnteranceRepoter : NSObject <WCSessionFlowMonitorExt, SessionFinderTabSwitchExt, SessionFinderTopicListExt, SessionNearbyTabSwitchExt, SessionFinderPOISwitchExt, SessionFinderPageExt, WCAccountSwitchProtocol> {
    unsigned long long _nearbyTabType;
    unsigned long long _nearbySubTabType;
    NSString *_finderTabSessionID;
    NSString *_finderContextID;
    NSMutableDictionary *_specialSessionDatas;
    NSMutableDictionary *_specialPageDatas;
    NSMutableArray *_specialSessionConfig;
    NSMutableArray *_specialPageConfig;
    BOOL m_isReplenishPopEvent;
    NSMutableSet *_finderPhotoWallConfig;
    NSString *_cacheAppearPageName;
    unsigned long long _cacheAppearHashCode;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onInit;
- (void)onClearData;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (void)onEnterPage:(id)a0 withVC:(id)a1 withHashCode:(unsigned long long)a2;
- (void)onQuitPage:(id)a0 withVC:(id)a1 withHashCode:(unsigned long long)a2;
- (void)onAppearPage:(id)a0 withVC:(id)a1 withHashCode:(unsigned long long)a2;
- (void)onDisappearPage:(id)a0 withVC:(id)a1 withHashCode:(unsigned long long)a2;
- (void)onSpecialSessionEnter:(id)a0 withHashCode:(unsigned long long)a1;
- (void)onSpecialSessionQuit:(id)a0 withHashCode:(unsigned long long)a1;
- (BOOL)onSpecialPageAppear:(id)a0;
- (void)onSpecialPageDisappear:(id)a0;
- (BOOL)checkTopViewControllerIsHalfPage:(id)a0;
- (BOOL)isHalfFinderPoiDetailVC:(id)a0;
- (BOOL)checkIsFinderInPhotoWall:(id)a0;
- (BOOL)checkIsNeedFixFinderEventByPhotoWall:(id)a0 withVC:(id)a1 withHashCode:(unsigned long long)a2;
- (void)reportSpecialPageData:(id)a0;
- (void)reportSpecialSessionData:(id)a0;
- (void)initSpecialSessionConfigs;
- (void)initSpecialPageConfigs;
- (id)getSpecialSessionConfig:(id)a0;
- (id)getSpecialPageConfig:(id)a0;
- (BOOL)isSepecialSessionReportConflict;
- (void)onFinderPageAppear:(id)a0 logID:(unsigned long long)a1;
- (void)onFinderPageDisappear:(id)a0 logID:(unsigned long long)a1;
- (void)onFinderPageQuit:(id)a0 vc:(id)a1;
- (void)onFinderPageEnter:(id)a0 vc:(id)a1;
- (void)onFinderTabAppear:(long long)a0;
- (void)onFinderTabDisappear:(long long)a0;
- (void)onNearbyTabAppear:(unsigned long long)a0;
- (void)onNearbyTabDisappear:(unsigned long long)a0;
- (void)onNearbyLiveSubTabAppear:(unsigned long long)a0 withScene:(unsigned long long)a1;
- (void)onNearbyLiveSubTabDisappear:(unsigned long long)a0 withScene:(unsigned long long)a1;
- (void)onNearbyLifeSubTabAppear:(unsigned long long)a0;
- (void)onNearbyLifeSubTabDisappear:(unsigned long long)a0;
- (void)onFinderTopicListEnter:(unsigned long long)a0 withHashCode:(unsigned long long)a1;
- (void)onFinderTopicListQuit:(unsigned long long)a0 withHashCode:(unsigned long long)a1;
- (void)onFinderTopicListAppear:(unsigned long long)a0;
- (void)onFinderTopicListDisappear:(unsigned long long)a0;
- (void)onFinderPOIPush:(id)a0;
- (void)onFinderPOIPop:(id)a0;
- (void)onFinderPOIAppear:(id)a0;
- (void)onFinderPOIDisappear:(id)a0;
- (void).cxx_destruct;

@end
