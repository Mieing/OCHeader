@class NSString;

@interface WebviewJSEventHandler_uploadEncryptMediaFile : WebviewJSEventHandlerBase <IWebviewResourceManagerExt> {
    NSString *_localId;
    BOOL _isShowProgressTips;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (id)getAppId:(id)a0;
- (void)onLocalResourceUploadFinished:(id)a0 SvrId:(id)a1 ErrCode:(int)a2;
- (void)onLocalResourceUploadProgress:(int)a0 LocalId:(id)a1;
- (void).cxx_destruct;

@end
