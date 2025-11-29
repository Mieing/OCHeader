@class NSMutableArray, WebviewLocalResItem;
@protocol WebResourceCDNUploadHelperDelegate;

@interface WebResourceCDNUploadHelper : MMObject <ICdnComMgrExt, PBMessageObserverDelegate> {
    BOOL _isUploading;
    NSMutableArray *_uploadArray;
    WebviewLocalResItem *_curUploadingItem;
}

@property (weak, nonatomic) id<WebResourceCDNUploadHelperDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)addUploadCDNItem:(id)a0;
- (BOOL)startUpload;
- (BOOL)stopUpload;
- (void)sendUploadRequest;
- (void)sendGetMediaIdRequest;
- (void)sendNextResItemGetMediaIdRequest;
- (void)handleGetMediaIdResp:(id)a0;
- (void)OnCdnUploadProgress:(id)a0;
- (void)OnCdnUpload:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
