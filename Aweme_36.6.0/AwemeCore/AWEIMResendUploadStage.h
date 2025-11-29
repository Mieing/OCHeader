@class FBKVOController;

@interface AWEIMResendUploadStage : AWEIMStage

@property (retain, nonatomic) FBKVOController *uploaderKVO;

- (void)moveOrCopyFromPath:(id)a0 toPath:(id)a1 complete:(id /* block */)a2;
- (BOOL)moveOrCopyFromPath:(id)a0 toPath:(id)a1;
- (id)quickDataForOriginData:(id)a0;
- (void)p_asyncGenerateInlineDataWithData:(id)a0 complete:(id /* block */)a1;
- (void)p_uploadFileAndUpdateAttachmentDBWithFileID:(id)a0 quickData:(id)a1 message:(id)a2 completion:(id /* block */)a3;
- (void)p_uploadFileAndUpdateAttachmentDBWithFileIDArray:(id)a0 quickDataDict:(id)a1 message:(id)a2 content:(id)a3 conversation:(id)a4;
- (BOOL)p_shouldAddInlinePic;
- (void)p_asyncGenerateHmacSHA256WithKey:(id)a0 oid:(id)a1 messageContent:(id)a2 content:(id)a3 complete:(id /* block */)a4;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)start;

@end
