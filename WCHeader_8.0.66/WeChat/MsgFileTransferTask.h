@class CMessageWrap;

@interface MsgFileTransferTask : FileTransferTask

@property (retain, nonatomic) CMessageWrap *messageWrap;

+ (id)taskIdForMessageWrap:(id)a0;
+ (id)taskFromMessageWrap:(id)a0;
+ (id)taskFromMessageWrap:(id)a0 type:(unsigned long long)a1;

- (id)initWithMessageWrap:(id)a0 type:(unsigned long long)a1;
- (void)calcInitialState;
- (void)fixState;
- (id)taskName;
- (unsigned long long)fileSize;
- (id)filePath;
- (id)fileExt;
- (long long)secondsBeforeExpired;
- (BOOL)isFileExpired;
- (BOOL)canResumeTransfer;
- (void)startTransfer;
- (void)stopTransfer;
- (id)taskSvrId;
- (BOOL)isOnlinePreviewEnabeld;
- (void).cxx_destruct;

@end
