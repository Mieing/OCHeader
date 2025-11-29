@class NSString, MultiMediaUploadTask, CMessageWrap, NSMutableArray;

@interface TaskListUploadProcessor : UploadStateProcessor <MultiMediaUploadTaskDelegate>

@property (retain, nonatomic) CMessageWrap *msgWrap;
@property (nonatomic) unsigned long long uploadTaskTotalSize;
@property (retain, nonatomic) NSMutableArray *uploadTaskList;
@property (retain, nonatomic) MultiMediaUploadTask *currentTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0;
- (void)start;
- (void)stop;
- (id)getStateName;
- (void)checkUploadQueue;
- (unsigned long long)remainUploadSize:(id)a0 exceptTask:(id)a1;
- (unsigned long long)getUploadTaskTotalSize;
- (void)OnMultiMediaUploadTaskFail:(id)a0;
- (void)OnMultiMediaUploadTaskSucc:(id)a0;
- (void)OnMultiMediaUploadTask:(id)a0 progressChange:(unsigned long long)a1 total:(unsigned long long)a2;
- (void).cxx_destruct;

@end
