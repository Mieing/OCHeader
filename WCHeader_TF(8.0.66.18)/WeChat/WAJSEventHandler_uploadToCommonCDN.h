@class NSString;

@interface WAJSEventHandler_uploadToCommonCDN : WAJSEventHandler_BaseEvent <ICdnComMgrExt, IWAUploadToCommonCDNExt>

@property (retain, nonatomic) NSString *fileKey;
@property (nonatomic) long long finishedLength;

- (void)dealloc;
- (void)handleJSEvent:(id)a0;
- (void)startUpload:(id)a0;
- (void)cancelUpload:(id)a0;
- (void)onWACDNUploadCancel:(id)a0;
- (void)OnCdnUploadProgress:(id)a0;
- (void)OnCdnUpload:(id)a0;
- (void).cxx_destruct;

@end
