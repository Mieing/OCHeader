@interface AWEIMResendCombineMsgUploadStage : AWEIMStage

+ (BOOL)needReuploadCombineShareMsg:(id)a0;

- (void)updateMessageStatusWithResendMsg:(id)a0;
- (void)start;

@end
