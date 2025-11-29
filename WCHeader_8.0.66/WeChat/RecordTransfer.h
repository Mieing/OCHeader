@interface RecordTransfer : NSObject

+ (id)genTaskFromMessageWrap:(id)a0 dataId:(id)a1 type:(unsigned long long)a2;

- (void)onRecordMsgUploadCreated:(id)a0 dataId:(id)a1;
- (void)onRecordMsgUploadStart:(id)a0 dataId:(id)a1;
- (void)onRecordMsgUploadStop:(id)a0 dataId:(id)a1;
- (void)onRecordMsgUpload:(id)a0 dataId:(id)a1 progressChanged:(int)a2;
- (void)onRecordMsgUploadCompleted:(id)a0 dataId:(id)a1 error:(id)a2;
- (void)onRecordMsgDownloadCreated:(id)a0 dataId:(id)a1;
- (void)onRecordMsgDownloadStart:(id)a0 dataId:(id)a1;
- (void)onRecordMsgDownloadStop:(id)a0 dataId:(id)a1;
- (void)onRecordMsgDownload:(id)a0 dataId:(id)a1 progressChanged:(int)a2;
- (void)onRecordMsgDownloadCompleted:(id)a0 dataId:(id)a1 error:(id)a2;

@end
