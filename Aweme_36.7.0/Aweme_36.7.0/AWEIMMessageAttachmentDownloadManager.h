@class NSString, NSMutableDictionary;

@interface AWEIMMessageAttachmentDownloadManager : NSObject <AWEIMFileAttachmentDownloaderProtocol, AWEUserMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableDictionary *downloaders;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain, nonatomic) NSMutableDictionary *downloadingProcessDic;
@property (retain, nonatomic) NSMutableDictionary *cancelProcessDic;
@property (retain, nonatomic) NSMutableDictionary *deleteProcessDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)updateMessageExtOnMessage:(id)a0 iesMsg:(id)a1 withSubType:(id)a2 DBModel:(id)a3;
+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (id)downloadFileWithMessage:(id)a0 resModel:(id)a1 optionalMD5:(id)a2;
- (void)cancelDownloadFileWithMessage:(id)a0 subType:(id)a1 resModel:(id)a2;
- (id)downloadingVideoViewModelWithMessage:(id)a0 resourceType:(unsigned long long)a1;
- (void)cancelDownloadVideoWithMessage:(id)a0 resModel:(id)a1;
- (id)downloadVideoWithMessage:(id)a0 resModel:(id)a1 decryptionKey:(id)a2;
- (id)checkHasLocalFileWithConfig:(id)a0;
- (id)cancelDownloadFileWithConfig:(id)a0;
- (id)downloadFileWithConfig:(id)a0;
- (id)deleteDownloadFileWithConfig:(id)a0;
- (BOOL)linkLocalFileWithMessage:(id)a0 subType:(id)a1 resModel:(id)a2 MD5:(id)a3;
- (id)downloadFileWithMessage:(id)a0 subType:(id)a1 resModel:(id)a2 optionalMD5:(id)a3;
- (int)p_convertResourceTypeToFileType:(unsigned long long)a0;
- (id)p_generateContextWithMessage:(id)a0 subType:(id)a1 resourceType:(unsigned long long)a2;
- (BOOL)p_tryLocalLoopFileWithMessage:(id)a0 subType:(id)a1 MD5:(id)a2 dbModel:(id)a3;
- (id)keyOfMessageID:(id)a0 conversationID:(id)a1 subType:(id)a2 resourceType:(unsigned long long)a3;
- (void)removeDownloader:(id)a0;
- (void)decryptVideoFileAtPath:(id)a0 downloadVM:(id)a1 toPath:(id)a2 decryptionKey:(id)a3 onCompletion:(id /* block */)a4;
- (void)p_realDownloadFile:(id)a0 targetPath:(id)a1 viewModel:(id)a2 key:(id)a3 secretKey:(id)a4 dbModel:(id)a5 md5:(id)a6 resModel:(id)a7 message:(id)a8 subType:(id)a9;
- (void)p_fetchUrlModelWithTosKey:(id)a0 urlPath:(id)a1 completion:(id /* block */)a2;
- (void)p_onDownloadCompleteWithRemoteURL:(id)a0 targetPath:(id)a1 viewModel:(id)a2 key:(id)a3 secretKey:(id)a4 dbModel:(id)a5 md5:(id)a6 resModel:(id)a7 message:(id)a8 subType:(id)a9 startTS:(double)a10 filePath:(id)a11 error:(id)a12;
- (BOOL)__needRefreshURLForError:(id)a0;
- (id)checkQuoteMessageHasLocalSendFilePathWithMessage:(id)a0 subType:(id)a1;
- (BOOL)p_checkDownloadNoNullableParamsWithConfig:(id)a0;
- (id)p_getLocalAbsoluteFilePathWithConfig:(id)a0 ignoreParamCheck:(BOOL)a1;
- (id)p_getLocalRelativeFilePathWithConfig:(id)a0 ignoreParamCheck:(BOOL)a1;
- (id)p_generateContextWithConfig:(id)a0;
- (id)p_generateDownloadVmWithCid:(id)a0 msgId:(id)a1 resModel:(id)a2;
- (id)p_generateDBModelWithMessageID:(id)a0 conversationID:(id)a1 context:(id)a2 resModel:(id)a3;
- (id)p_checkHasLocalFileWithConfig:(id)a0 ignoreParamCheck:(BOOL)a1;
- (void)p_updateFileDBModel:(id)a0 withLocalFilePath:(id)a1;
- (id)getDownloadUniqueIDWithConfig:(id)a0;
- (void)beginStageDownloadFile:(id)a0 config:(id)a1;
- (void)cancelAllOriginVideoDownload;
- (BOOL)checkContextCanCancelOrDeleteRequest:(id)a0;
- (void)beginCancelStageDownloadWithConfig:(id)a0 request:(id)a1 vm:(id)a2;
- (void)beginDeleteStageDownloadWithConfig:(id)a0 request:(id)a1 vm:(id)a2;
- (id)fastCheckHasLocalFileWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)p_lock;
- (void)p_unlock;

@end
