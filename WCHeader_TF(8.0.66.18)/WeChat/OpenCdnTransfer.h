@interface OpenCdnTransfer : NSObject

- (id)genTaskFromMessageWrap:(id)a0 type:(unsigned long long)a1;
- (void)onMsgCreateUpload:(id)a0;
- (void)onMsgStartUpload:(id)a0;
- (void)onMsgStopUpload:(id)a0;
- (void)onMsgUpload:(id)a0 progressChanged:(int)a1;
- (void)onMsgUploadCompleted:(id)a0 error:(id)a1;
- (void)onMsgCreateDownload:(id)a0;
- (void)onMsgStartDownload:(id)a0;
- (void)onMsgStopDownload:(id)a0;
- (void)onMsgDownload:(id)a0 progressChanged:(int)a1;
- (void)onMsgDownloadCompleted:(id)a0 error:(id)a1;

@end
