@class NSString, NSDictionary, WAAppConfirmWindow, WAAutoFillDataAuthorizePageSheet;

@interface WAJSEventHandler_requestAuthUserAutoFillData : WAJSEventHandler_BaseEvent <WAWebViewPlugin_ApiQueueProtocol, WAAppConfirmWindowDelegate, WAAutoFillDataAuthorizePageSheetDelegate> {
    WAAppConfirmWindow *_confirmWindow;
    WAAutoFillDataAuthorizePageSheet *_pageSheet;
}

@property (nonatomic) unsigned int clientVersion;
@property (retain) NSDictionary *dicInputParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)onHandleApiEvent:(id)a0;
- (void)onConfirm:(BOOL)a0;
- (void)onClickLink;
- (void)closeConfirmWindow;
- (void)onWAAutoFillDataAuthorizePageSheetDidClickAcceptButton:(id)a0;
- (void)onWAAutoFillDataAuthorizePageSheetDidClickRejectButton:(id)a0;
- (void)dismissPageSheet:(id)a0;
- (void)onWAAutoFillDataAuthorizePageSheet:(id)a0 didClickTextViewLinkURL:(id)a1;
- (void)_handleUserSelect:(BOOL)a0;
- (void)requestAutoFillAuthorize:(id)a0 allow:(BOOL)a1 authStatus:(unsigned int)a2 clientVersion:(unsigned int)a3;
- (void)handleApiEventEnd;
- (void)onCgiResponse:(id)a0 forEvent:(unsigned int)a1;
- (void).cxx_destruct;

@end
