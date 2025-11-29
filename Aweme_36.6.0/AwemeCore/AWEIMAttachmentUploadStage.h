@class FBKVOController;

@interface AWEIMAttachmentUploadStage : AWEIMStage

@property (retain, nonatomic) FBKVOController *uploaderKVO;

- (BOOL)p_shouldGenerateInlinePic;
- (void)p_asyncGenerateInlineDataComplete:(id /* block */)a0;
- (void)p_realDoUpload:(id)a0 dbModelArray:(id)a1 content:(id)a2;
- (void)p_trackUploadFileObj:(id)a0 withViewModel:(id)a1;
- (void)p_updateContent:(id)a0 response:(id)a1 content:(id)a2 dbModel:(id)a3;
- (void)p_trackSendMessageResponseError;
- (void)p_uploadFileAndUpdateAttachmentDBWithFileID:(id)a0 quickData:(id)a1 MD5:(id)a2 completion:(id /* block */)a3;
- (void)p_asyncGenerateHmacSHA256WithKey:(id)a0 oid:(id)a1 content:(id)a2 complete:(id /* block */)a3;
- (void)p_updateLocalFilePath:(id)a0 fileType:(int)a1 cachePath:(id)a2;
- (void)moveOrCopyFromPath:(id)a0 toPath:(id)a1 complete:(id /* block */)a2;
- (void)p_uploadErrorContentLog:(id)a0 messageType:(long long)a1;
- (id)p_getEnterFromWithAweType:(long long)a0;
- (BOOL)moveOrCopyFromPath:(id)a0 toPath:(id)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)start;

@end
