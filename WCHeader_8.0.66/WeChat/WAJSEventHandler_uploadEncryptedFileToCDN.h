@class NSString, WebResourceCDNUploadHelper, MMTimer;

@interface WAJSEventHandler_uploadEncryptedFileToCDN : WAJSEventHandler_BaseEvent <WebResourceCDNUploadHelperDelegate> {
    WebResourceCDNUploadHelper *_cdnUploadHelper;
    MMTimer *uploadTimer;
}

@property (copy, nonatomic) NSString *tempFilePath;
@property (nonatomic) BOOL isShowProgressTips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)handleJSEvent:(id)a0;
- (void)setTimeoutTimer;
- (void)stopUpload;
- (BOOL)uploadLocalResItem:(id)a0;
- (id)assembleResItem:(id)a0;
- (void)onItemUploadProgressWithoutMediaId:(int)a0 Item:(id)a1;
- (void)onItemUploadCDNFinishedWithoutMediaId:(int)a0 Item:(id)a1;
- (void).cxx_destruct;

@end
