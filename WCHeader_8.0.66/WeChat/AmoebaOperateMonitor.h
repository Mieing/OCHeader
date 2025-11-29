@class NSString, NSHashTable, UIView, NSNumber;

@interface AmoebaOperateMonitor : NSObject <AmoebaEventSwizzleExt, AmoebaGestureSwizzleExt> {
    NSNumber *m_monitorSwitch;
    NSNumber *m_monitorType;
    NSNumber *m_isOpenDebugToast;
    unsigned long long m_toastIndex;
    NSHashTable *m_monitorViews;
    unsigned long long m_touchBeganTimestamp;
    unsigned long long m_lastClickTimestamp;
    unsigned long long m_doubleTapFirstTimestamp;
    struct CGPoint { double x; double y; } m_touchBeganPosi;
    BOOL m_isTouchMoved;
    UIView *m_touchBeganView;
    UIView *m_longPressView;
    UIView *m_doubleTapView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (id)init;
- (void)startMonitor;
- (void)stopMonitor;
- (BOOL)isOpenMonitor;
- (unsigned long long)getMonitorType;
- (BOOL)isOpenDebugToast;
- (void)addMonitorView:(id)a0;
- (void)removeMonitorView:(id)a0;
- (void)onSendEvent:(id)a0;
- (void)onSendAction:(SEL)a0 to:(id)a1 from:(id)a2 forEvent:(id)a3;
- (void)onGesture:(id)a0 withTarget:(id)a1 withAction:(id)a2;
- (void)onTouchBegan:(id)a0 touch:(id)a1;
- (void)onTouchMoved:(id)a0 touch:(id)a1;
- (void)onTouchEnded:(id)a0 touch:(id)a1;
- (void)onSendEventBegan:(id)a0;
- (void)onSendEventEnded:(id)a0;
- (void)viewClick:(id)a0;
- (void)viewDoubleTap:(id)a0;
- (void)viewLongPressTask;
- (id)getRealisticOperateView:(id)a0;
- (BOOL)isControlClickEvent:(id)a0;
- (void)setViewOperateVisiableToolsSwitch:(BOOL)a0;
- (void)showDebugToast:(id)a0 text:(id)a1;
- (void)showDebugInfoSheetView:(id)a0;
- (void)clearViewId:(id)a0;
- (void).cxx_destruct;

@end
