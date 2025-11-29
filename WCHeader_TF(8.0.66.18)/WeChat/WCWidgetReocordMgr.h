@class NSString, NSMutableArray;

@interface WCWidgetReocordMgr : MMRootService <MMServiceProtocol, ClickStatSwizzleExt> {
    NSMutableArray *_eventList;
    struct CGPoint { double x; double y; } _touchBeginPoint;
    struct timeval { long long tv_sec; int tv_usec; } _touchBeginTimeStamp;
    BOOL _bSensitive;
    BOOL _bNeedDebugInfo;
}

@property (nonatomic) BOOL needRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceMemoryWarning;
- (void)dealloc;
- (void)recordEvent:(id)a0;
- (id)getAndRemoveWidgetRecord;
- (void)onSendEvent:(id)a0;
- (void)onSendAction:(SEL)a0 to:(id)a1 from:(id)a2 forEvent:(id)a3;
- (void)recordTouchEvent:(id)a0;
- (BOOL)isKindOfMonitorGesture:(id)a0;
- (BOOL)saveWidgetRecordForPage:(id)a0 andTimeStamp:(unsigned int)a1;
- (id)getWidgetRecordForPage:(id)a0 andTimeStamp:(unsigned int)a1;
- (BOOL)removeWidgetRecordForPage:(id)a0 andTimeStamp:(unsigned int)a1;
- (BOOL)isSensitiveWidget:(id)a0;
- (void)keyboardDidShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)printWidgetEvent:(id)a0;
- (void).cxx_destruct;

@end
