@interface FileUploadingTransfer : NSObject

- (id)init;
- (void)dealloc;
- (id)genTaskFromMessageWrap:(id)a0;
- (void)OnAddMsg:(id)a0 MsgWrap:(id)a1;
- (void)OnFileMsgOtherUploadFinished:(id)a0;
- (void)OnDelMsg:(id)a0 MsgWrap:(id)a1;
- (void)OnRevokeMsg:(id)a0 MsgWrap:(id)a1 ResultCode:(unsigned int)a2 ResultMsg:(id)a3 EducationMsg:(id)a4;

@end
