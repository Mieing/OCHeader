@class UIWindow, NSString, AmoebaGeneralMonitorDelegateProxy, NSMutableDictionary, UIScrollView, NSMutableArray, NSHashTable;

@interface AmoebaGeneralMonitor : NSObject <UIGestureRecognizerDelegate> {
    AmoebaGeneralMonitorDelegateProxy *m_monitorDelegateProxy;
    UIScrollView *m_scrollView;
    UIWindow *m_uiWindow;
    NSMutableArray *m_lastVisiableItems;
    NSMutableArray *m_lastVisiableIds;
    NSMutableDictionary *m_lastVisiableCellBizIds;
    NSHashTable *m_lastVisiableCells;
    double m_lastOffsetX;
    double m_lastOffsetY;
    unsigned long long m_lastTimeMS;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } m_statusRect;
    double m_statusNavHeight;
    BOOL m_isInPage;
    BOOL m_isInScreem;
    BOOL m_isInitMonitor;
    BOOL m_isCheckItemExposed;
    unsigned long long m_nearbyLiveSubTabIndex;
    unsigned long long m_nearbyLiveSubTabScene;
    unsigned long long m_totalCostTime;
    unsigned long long m_totalCostCount;
    BOOL m_isHidden;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithView:(id)a0 observerType:(unsigned long long)a1;
- (void)initMonitor;
- (void)dealloc;
- (void)setMonitorDelegate:(id)a0;
- (id)monitorDelegate;
- (void)onViewDidAppear:(id)a0;
- (void)onViewDidDisappear:(id)a0;
- (void)onNearbySubTabAppear:(unsigned long long)a0 withScene:(unsigned long long)a1;
- (void)onNearbySubTabDisappear:(unsigned long long)a0 withScene:(unsigned long long)a1;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)onReloadData:(id)a0;
- (void)onReloadRowsAtIndexPaths:(id)a0;
- (void)onReloadSections:(id)a0;
- (void)onReloadItemsAtIndexPaths:(id)a0;
- (void)onInsertSectionsWithRowAnimation:(id)a0;
- (void)onDeleteSectionsWithRowAnimation:(id)a0;
- (void)onInsertRowsAtIndexPathsWithRowAnimation:(id)a0;
- (void)onDeleteRowsAtIndexPathsWithRowAnimation:(id)a0;
- (void)onInsertSections:(id)a0;
- (void)onDeleteSections:(id)a0;
- (void)onInsertItemsAtIndexPaths:(id)a0;
- (void)onDeleteItemsAtIndexPaths:(id)a0;
- (void)onSetHidden:(id)a0 hidden:(BOOL)a1;
- (void)onDidEndDisplayingCell:(id)a0 forRowAtIndexPath:(id)a1;
- (void)onScrollViewDidScroll:(id)a0;
- (void)onScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)onScrollViewDidEndDecelerating:(id)a0;
- (void)onCellForRowAtIndexPath:(id)a0 indexPath:(id)a1;
- (void)checkItemExposed:(id)a0 unVisibleIndexPaths:(id)a1;
- (BOOL)isInScreem:(id)a0;
- (BOOL)isEqualCellBizId:(id)a0 lastCellBizId:(id)a1;
- (BOOL)isNeedMonitor:(id)a0;
- (id)getVisibleIndexPaths;
- (void)triggerCheckIfNeededWithScrollView:(id)a0;
- (void)triggerCheck:(id)a0;
- (void)setIsInPage:(BOOL)a0;
- (void)setNearbyLiveSubTabIndex:(unsigned long long)a0;
- (void)setNearbyLiveSubTabScene:(unsigned long long)a0;
- (id)getMonitorCellId:(id)a0;
- (id)getMonitorCell:(id)a0 withIndexPath:(id)a1;
- (void).cxx_destruct;

@end
