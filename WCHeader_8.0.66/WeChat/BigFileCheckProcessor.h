@class NSString, NSMutableArray, CMessageWrap;

@interface BigFileCheckProcessor : UploadStateProcessor <MMAppAttachFileMgrExt>

@property (retain, nonatomic) CMessageWrap *msgWrap;
@property (retain, nonatomic) NSMutableArray *bigFileTasks;
@property (retain, nonatomic) NSMutableArray *uploadTaskList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0;
- (void)start;
- (void)stop;
- (id)getStateName;
- (void)transformToNextState;
- (void)onBatchCheckBigFileUploadResult:(BOOL)a0 respList:(id)a1 wrapMsg:(id)a2 errMsg:(id)a3;
- (void)convertUploadBigFileRecordData:(id)a0;
- (void).cxx_destruct;

@end
