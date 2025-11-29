@class NSString, CMessageWrap, UploadStateProcessor, NSMutableArray;
@protocol MultiMediaUploadProcessControllerDelegate;

@interface MultiMediaUploadProcessController : MMObject <UploadStateProcessorDelegate>

@property (nonatomic) BOOL isStopped;
@property (retain, nonatomic) UploadStateProcessor *state;
@property (retain, nonatomic) NSMutableArray *uploadTaskList;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) CMessageWrap *msgWrap;
@property (nonatomic) BOOL bJustUploadDataWithoutMD5Hit;
@property (weak, nonatomic) id<MultiMediaUploadProcessControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMsgWrap:(id)a0;
- (void)startTask;
- (void)stopTask;
- (id)getMediaWrap;
- (id)getDataList;
- (id)getUploadTaskList;
- (void)updateUploadTaskList:(id)a0;
- (void)changeToState:(id)a0;
- (void)onStateProcessFinished:(BOOL)a0;
- (void)onHistoryRecordDataUploadFinishWithCdnInfo:(id)a0 errorMsg:(id)a1;
- (void)updateMediaWrapWithBitset:(int)a0;
- (void)updateUploadProgressWithTotal:(unsigned long long)a0 remain:(unsigned long long)a1;
- (void)onMediaDataUploadSuccess:(id)a0;
- (void).cxx_destruct;

@end
