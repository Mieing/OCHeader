@interface AWEIMAttachmentRefreshAssetStage : AWEIMStage

+ (id)getCoverAttachmentObjectWithSendObject:(id)a0;
+ (id)getCoverDBModelWithSendContext:(id)a0;
+ (void)updateAttachmentDataInfoWithContext:(id)a0 loadContext:(id)a1 attachObject:(id)a2 dbModel:(id)a3 completion:(id /* block */)a4;
+ (id)getAssetAttachmentObjectWithSendObject:(id)a0;
+ (id)getAssetDBModelWithSendContext:(id)a0;
+ (void)updateLivePhotoAttachmentWithLoad:(id)a0 loadContext:(id)a1 completion:(id /* block */)a2;
+ (id)getVideoQuickAttachmentObjectWithSendObject:(id)a0;
+ (id)getVideoQuickDataDBModelWithSendContext:(id)a0;
+ (void)updateVideoFirstFrameWithContext:(id)a0 loadContext:(id)a1 attachment:(id)a2 dbModel:(id)a3 completion:(id /* block */)a4;
+ (void)updateVideoAttachmentWithContext:(id)a0 loadContext:(id)a1 attachment:(id)a2 dbModel:(id)a3 completion:(id /* block */)a4;
+ (void)updateImageAttachmentWithLoadContext:(id)a0 sendObj:(id)a1 attachment:(id)a2 dbModel:(id)a3 completion:(id /* block */)a4;
+ (void)updateVideoCoverWithContext:(id)a0 loadContext:(id)a1 sendObj:(id)a2 attachment:(id)a3 completion:(id /* block */)a4;
+ (void)writeDataToDiskWithData:(id)a0 relativeFilePath:(id)a1 completion:(id /* block */)a2;
+ (void)updateMessageLocalExtWithMessageId:(id)a0 conversationId:(id)a1 filePathInfo:(id)a2 completion:(id /* block */)a3;
+ (BOOL)isSendAssetWithFileType:(int)a0;
+ (BOOL)isCoverWithFileType:(int)a0;

- (id)p_mediaTypeWithContext:(id)a0;
- (BOOL)isSupportRefreshWithMessageType;
- (void)p_trackRefreshAssetFinishWithEvent:(id)a0 context:(id)a1 result:(BOOL)a2;
- (void)p_markError;
- (void)startUploadProgressWithContextIfNeed:(id)a0;
- (void)start;

@end
