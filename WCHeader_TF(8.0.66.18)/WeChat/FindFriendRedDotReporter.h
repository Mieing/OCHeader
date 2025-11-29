@class FindFriendBussReporter, NSString, NSMutableDictionary, SessionReportInfo, MMMainTableView;

@interface FindFriendRedDotReporter : NSObject <WCSessionFlowMonitorExt, IExptServiceExt> {
    long long m_exptFlag;
    SessionReportInfo *m_reportInfo;
    FindFriendBussReporter *m_bussReporter;
    NSMutableDictionary *m_providers;
    BOOL m_init;
    MMMainTableView *m_tableView;
    void *m_mapSectionType;
    void *m_mapRowToRowTypeAlbum;
    void *m_mapRowToRowTypeSocial;
    void *m_mapRowToRowTypeMotion;
    void *m_mapRowToRowTypeSearch;
    void *m_mapRowToRowTypeOpen;
    void *m_mapRowToRowTypeWCO;
    void *m_mapRowToRowTypeAppBrand;
    void *m_mapRowToRowTypeFinder;
    NSMutableDictionary *m_cellCGRectCache;
    NSMutableDictionary *m_cellExposeFlag;
    NSMutableDictionary *m_flatMapCache;
    BOOL m_isAppearing;
    unsigned long long m_exposeType;
    unsigned long long m_checkExposeTimeMs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)reset;
- (BOOL)needReport;
- (void)readExptConfig;
- (void)onExptItemListChange;
- (void)initProvider;
- (void)putCommonProvider:(unsigned long long)a0 andPaths:(id)a1;
- (void)put:(id)a0 andEntryRowType:(unsigned long long)a1;
- (void)setMapRowPointer:(void *)a0 andSectionType:(unsigned long long)a1;
- (void)setMTableView:(id)a0 andMapRowPointer:(void *)a1 andVC:(id)a2;
- (void)enterFindFriendsTopVcPage:(id)a0 andPageId:(unsigned long long)a1;
- (void)onFindFriendEntryViewControllWillAppear;
- (void)onEnterForeground;
- (void)exitFindFriendsTopVcPage:(id)a0 andPageId:(unsigned long long)a1;
- (void)onFindFriendEntryViewControllDidDisappear;
- (void)onEnterBackground;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)onFindFriendEntryViewControllAppear;
- (void)onFindFriendEntryViewControllWillDisappear;
- (void)onFindFriendEntryViewControllScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)onFindFriendEntryViewControllScrollViewDidEndDecelerating:(id)a0;
- (void)onFindFriendEntryViewControllScrollViewDidScroll:(id)a0;
- (void)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)getEntryRowType:(id)a0;
- (void)getRedDotInfo:(id)a0;
- (BOOL)checkEntryRowIsExpose:(id)a0 andReason:(unsigned long long)a1;
- (void)checkAllEntryRowsIsExpose:(unsigned long long)a0;
- (id)getAllRowDataFromCache;
- (id)flatAllRowData;
- (BOOL)initWCAopVc:(id)a0;
- (void).cxx_destruct;

@end
