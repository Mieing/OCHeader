@interface AWEIMAttachmentDBModelStage : AWEIMStage

- (void)p_initDBModelWithAttachment:(id)a0 index:(long long)a1 dbModelArray:(id)a2 completion:(id /* block */)a3;
- (BOOL)p_isSupportGenerateThumbnailWithFileType:(int)a0;
- (void)p_insertThumbnailDBModel:(id)a0 needWriteData:(id)a1 absoluteFilePath:(id)a2;
- (BOOL)p_writeDataToDiskWithMessageId:(id)a0 data:(id)a1 absoluteFilePath:(id)a2;
- (void)p_storeThumbnailIfNeedWithAttachmentObject:(id)a0 dbModel:(id)a1;
- (void)p_moveFileToSendDirWithDBModel:(id)a0 attachment:(id)a1 writeFlags:(BOOL *)a2;
- (void)start;

@end
