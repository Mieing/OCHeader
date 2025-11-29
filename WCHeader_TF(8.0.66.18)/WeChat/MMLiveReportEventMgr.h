@class NSString, NSMutableDictionary;

@interface MMLiveReportEventMgr : MMUserService <MMServiceProtocol, ClickStatSwizzleExt>

@property (retain, nonatomic) NSMutableDictionary *handlerObjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)registerNotification;
- (void)unRegisterNotification;
- (void)bindSessionId:(id)a0 withHandlerClass:(Class)a1;
- (id)sessionIdOfHandlerClass:(Class)a0;
- (void)registerReportHandlerClass:(Class)a0;
- (void)unRegisterReportHandlerClass:(Class)a0;
- (void)onSendEvent:(id)a0;
- (void)onSendAction:(SEL)a0 to:(id)a1 from:(id)a2 forEvent:(id)a3;
- (void)onActionSheetClicked:(id)a0 buttonAtIndex:(long long)a1 controller:(id)a2;
- (void)onUIOrientationChanged:(id)a0;
- (void).cxx_destruct;

@end
