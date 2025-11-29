@class MsgRecordDataWrap, NSString;

@interface RecordFileTransferTask : FileTransferTask

@property (retain, nonatomic) MsgRecordDataWrap *recordDataWrap;
@property (copy, nonatomic) NSString *dataId;

+ (id)taskIdForMessageWrap:(id)a0 dataId:(id)a1;
+ (id)findDataItemForId:(id)a0 inList:(id)a1 index:(int *)a2;
+ (id)taskFromMessageWrap:(id)a0 dataId:(id)a1 type:(unsigned long long)a2;
+ (id)taskIdForRecordDataWrap:(id)a0;
+ (id)taskFromRecordDataWrap:(id)a0 type:(unsigned long long)a1;

- (id)initWithRecordDataWrap:(id)a0 type:(unsigned long long)a1;
- (id)taskName;
- (unsigned long long)fileSize;
- (id)filePath;
- (long long)secondsBeforeExpired;
- (BOOL)isFileExpired;
- (void)startTransfer;
- (void)stopTransfer;
- (id)taskSvrId;
- (BOOL)isOnlinePreviewEnabeld;
- (void).cxx_destruct;

@end
