@class NSString, CMessageWrap, MsgDataDownloadLogic, MMCommonCgiUploader;
@protocol MessageCommonUploaderDelegate;

@interface MessageCommonUploader : NSObject <MMCommonCgiUploaderDelegate, MsgDataDownloadDelegate, MMAppAttachFileMgrExt>

@property (retain, nonatomic) MMCommonCgiUploader *fileUploader;
@property (nonatomic) long long currUploadFileType;
@property (nonatomic) BOOL hasCheckBigFile;
@property (retain, nonatomic) MsgDataDownloadLogic *msgDownloadLogic;
@property (nonatomic) double progress;
@property (nonatomic) unsigned long long uploadTotalSize;
@property (retain, nonatomic) NSString *uploadMd5;
@property (retain, nonatomic) NSString *thumbFileId;
@property (retain, nonatomic) NSString *thumbAesKey;
@property (retain, nonatomic) NSString *midFileId;
@property (retain, nonatomic) NSString *midFileAesKey;
@property (nonatomic) long long midFileType;
@property (retain, nonatomic) NSString *liveImgFileId;
@property (weak, nonatomic) id<MessageCommonUploaderDelegate> delegate;
@property (retain, nonatomic) CMessageWrap *messageWrap;
@property (nonatomic) long long scene;
@property (nonatomic) long long fileType;
@property (nonatomic) BOOL useWxam;
@property (retain, nonatomic) NSString *bigFileSignature;
@property (retain, nonatomic) NSString *bigFileAesKey;
@property (readonly, nonatomic) NSString *imageMd5;
@property (readonly, nonatomic) NSString *liveVideoMd5;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMessageWrap:(id)a0;
- (void)startUpload;
- (void)stopUpload;
- (void)startUploadWithCheckDownload:(BOOL)a0;
- (void)startUploadFileType:(long long)a0;
- (long long)getLiveType;
- (void)uploadMidLiveVideo;
- (void)uploadHDLiveVideo;
- (void)uploadThumbImg;
- (void)uploadMidImg;
- (void)uploadBigImg;
- (void)uploadVideoFile;
- (void)uploadNormalFile;
- (void)onCheckBigFileUploadResult:(BOOL)a0 resp:(id)a1 wrapMsg:(id)a2 errMsg:(id)a3;
- (void)callbackSuccessWithResult:(id)a0;
- (void)callbackFailureWithUploadId:(id)a0;
- (void)onUploadSuccess:(id)a0 result:(id)a1;
- (void)onUploadFail:(id)a0 uploadId:(id)a1 retCode:(long long)a2;
- (void)onUploadProgress:(id)a0 uploadProgress:(double)a1;
- (void)startDownloadMsgResource;
- (BOOL)isMsgResourceExist;
- (void)onDownloadSuccess:(id)a0;
- (void)onDownloadCommonFail:(id)a0;
- (void)onDownloadExpireFail:(id)a0;
- (void)onDownloadCancel:(id)a0;
- (void)onDownloadAnyFail:(id)a0;
- (void).cxx_destruct;

@end
