@interface AWEIMAttachmentOnScreenStage : AWEIMStage

- (void)createUploadFileViewModelIfNeed;
- (void)p_updateMessageIDWithDBModelArray:(id)a0 index:(long long)a1 messageID:(id)a2 con:(id)a3 completion:(id /* block */)a4;
- (void)start;

@end
