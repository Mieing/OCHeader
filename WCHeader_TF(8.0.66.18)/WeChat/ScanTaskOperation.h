@class NSMutableArray;

@interface ScanTaskOperation : WCSilentTask

@property (retain, nonatomic) NSMutableArray *sessionArray;
@property (nonatomic) unsigned int startTimestamp;
@property (nonatomic) unsigned int endTimestamp;

- (id)initWithSessionAndTime:(id)a0 StartTimestamp:(unsigned int)a1 EndTimestamp:(unsigned int)a2;
- (void)startOperation;
- (void)runLoop;
- (void)report:(unsigned int)a0 sourceType:(unsigned int)a1 size:(unsigned long long)a2 count:(unsigned long long)a3 date:(unsigned long long)a4 fileSizeList:(id)a5;
- (void)report35066:(id)a0 FileType:(unsigned int)a1 TalkerType:(unsigned int)a2 FileIsUploadType:(unsigned int)a3 MsgIsSendType:(unsigned int)a4 SendFileScene:(id)a5 StartTimeStamp:(unsigned long long)a6;
- (id)getSendFileScene:(unsigned int)a0 ForwardType:(unsigned int)a1;
- (void)addFileSize:(unsigned long long)a0 FileSizeList:(id)a1;
- (void)addReportDataItem:(id)a0 IsSend:(BOOL)a1 Type:(unsigned int)a2;
- (void)debugPrint;
- (void).cxx_destruct;

@end
