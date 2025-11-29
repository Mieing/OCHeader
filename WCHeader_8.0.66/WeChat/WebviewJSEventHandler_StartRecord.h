@class NSString;

@interface WebviewJSEventHandler_StartRecord : WebviewJSEventHandlerBase <IRecordPermissionCheckExt, IWebviewRecorderManagerExt>

@property (nonatomic) BOOL isCheckingPermission;
@property (nonatomic) unsigned long long duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)realStartRecord;
- (void)updateWebviewTitle;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void)onStartRecord:(long long)a0;
- (void)onFinishedRecord:(id)a0 ErrCode:(int)a1 stopReason:(long long)a2;

@end
