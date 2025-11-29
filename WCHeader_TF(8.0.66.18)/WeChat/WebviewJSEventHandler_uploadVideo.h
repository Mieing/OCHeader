@class NSString, NSMutableArray;

@interface WebviewJSEventHandler_uploadVideo : WebviewJSEventHandlerBase <IWebviewResourceManagerExt> {
    BOOL _isShowProgressTips;
    NSMutableArray *arrLocalIDs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)doUploadVideo;
- (void)onLocalResourceUploadProgress:(int)a0 LocalId:(id)a1;
- (void)onLocalResourceUploadFinished:(id)a0 SvrId:(id)a1 ErrCode:(int)a2;
- (void)doDelayCancel;
- (void).cxx_destruct;

@end
