@class NSString, NSMapTable, NSHashTable, NSNumber, UIViewController;

@interface WCGeneralExposeMonitor : MMUserService <MMUIViewControllerExt, DataReportViewHookExt, MMServiceProtocol> {
    NSNumber *m_monitorSwitch;
    NSHashTable *m_monitorViews;
    NSHashTable *m_curExpViews;
    NSMapTable *m_monitorViewBlocks;
    NSMapTable *m_monitorPageBlocks;
    NSMapTable *m_monitorViewToPageMap;
    UIViewController *m_curPage;
    NSMapTable *m_viewExposeRates;
    NSMapTable *m_viewExposeMinTimes;
    double m_lastOffsetX;
    double m_lastOffsetY;
    unsigned long long m_lastScrollTimeMS;
    unsigned long long m_runTaskTimeMS;
    double m_statusHeight;
    double m_navigationHeight;
    double m_screenWidth;
    double m_screenHeight;
    BOOL m_isForeground;
    NSHashTable *m_curDelayExpViews;
    NSMapTable *m_delayExpViewsQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (BOOL)isOpenMonitor;
- (void)addMonitorView:(id)a0 exposeBlock:(id /* block */)a1 exposeRate:(double)a2 exposeMinTime:(unsigned long long)a3;
- (void)removeMonitorViewBlock:(id)a0;
- (void)addMonitorVC:(id)a0 exposeBlock:(id /* block */)a1 exposeRate:(double)a2 exposeMinTime:(unsigned long long)a3;
- (void)removeMonitorVCBlock:(id)a0;
- (void)addViewDeallocListener:(id)a0;
- (void)hookUIView:(id)a0;
- (void)viewExpose:(id)a0 checkType:(unsigned long long)a1;
- (void)viewUnExpose:(id)a0 checkType:(unsigned long long)a1;
- (void)appForeground;
- (void)appBackground;
- (void)pageChange:(id)a0;
- (void)onDidMoveToSuperview:(id)a0;
- (void)onDidMoveToWindow:(id)a0;
- (void)onBringSubviewToFront:(id)a0;
- (void)onSendSubviewToBack:(id)a0;
- (void)onInsertSubview:(id)a0 aboveSubview:(id)a1;
- (void)onInsertSubview:(id)a0 belowSubview:(id)a1;
- (void)onSetHidden:(BOOL)a0 withView:(id)a1;
- (void)onSetAlpha:(double)a0 withView:(id)a1;
- (void)onLayoutSubviews:(id)a0;
- (void)onRemoveFromSuperview:(id)a0;
- (void)onWillRemoveSubview:(id)a0;
- (void)onScrollViewDidScroll:(id)a0;
- (void)postTraverseView:(unsigned long long)a0 delay:(double)a1;
- (void)forceChangeExpState:(id)a0 isExp:(BOOL)a1;
- (void)checkView:(id)a0 checkType:(unsigned long long)a1;
- (void)traverseViews:(unsigned long long)a0;
- (id)getVisiableViews:(id)a0;
- (BOOL)isViewVisiable:(id)a0 withCurPage:(id)a1;
- (BOOL)rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isInOther:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getViewExposeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 isNavigationBar:(BOOL)a2;
- (double)getViewExposeRate:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 originRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)traverseDelayExpViews:(id)a0 checkType:(unsigned long long)a1;
- (BOOL)addDelayExpViewsQueue:(id)a0 checkType:(unsigned long long)a1 time:(unsigned long long)a2;
- (void)removeDelayExpViewsQueue:(id)a0;
- (void)clearDelayExpViewsQueue;
- (void)checkDelayExpViewsQueue;
- (void).cxx_destruct;

@end
