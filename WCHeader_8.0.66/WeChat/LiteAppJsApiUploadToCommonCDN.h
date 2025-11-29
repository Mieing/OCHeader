@class NSString;

@interface LiteAppJsApiUploadToCommonCDN : LiteAppJsApi <ICdnComMgrExt>

@property (retain, nonatomic) NSString *fileKey;

- (void)dealloc;
- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)startUpload:(id)a0;
- (void)cancelUpload:(id)a0;
- (void)OnCdnUpload:(id)a0;
- (void).cxx_destruct;

@end
