@protocol AWEIMAlbumAssetPreprocessorProtocol;

@interface AWEIMResendRefreshStage : AWEIMStage

@property (retain, nonatomic) id<AWEIMAlbumAssetPreprocessorProtocol> preProcessor;

+ (void)updateLivePhotoAttachmentWithLoad:(id)a0 loadContext:(id)a1 completion:(id /* block */)a2;
+ (void)writeDataToDiskWithData:(id)a0 relativeFilePath:(id)a1 completion:(id /* block */)a2;
+ (void)updateMessageLocalExtWithMessageId:(id)a0 conversationId:(id)a1 filePathInfo:(id)a2 completion:(id /* block */)a3;
+ (int)getCoverFileTypeWithContextMessageType:(long long)a0;
+ (void)updateAttachmentDataInfoWithContext:(id)a0 loadContext:(id)a1 dbModel:(id)a2 fileType:(int)a3 completion:(id /* block */)a4;
+ (int)getAssetFileTypeWithContextMessageType:(long long)a0;
+ (void)updateVideoFirstFrameWithContext:(id)a0 loadContext:(id)a1 dbModel:(id)a2 completion:(id /* block */)a3;
+ (void)updateVideoAttachmentWithContext:(id)a0 loadContext:(id)a1 dbModel:(id)a2 completion:(id /* block */)a3;
+ (void)updateImageAttachmentWithContext:(id)a0 loadContext:(id)a1 dbModel:(id)a2 completion:(id /* block */)a3;
+ (void)updateVideoCoverWithContext:(id)a0 loadContext:(id)a1 completion:(id /* block */)a2;

- (BOOL)isSupportRefreshWithMessageType;
- (void)p_markError:(id)a0 inConversation:(id)a1;
- (void)startUploadProgressWithContextIfNeed:(id)a0 dbModel:(id)a1;
- (void).cxx_destruct;
- (void)start;

@end
