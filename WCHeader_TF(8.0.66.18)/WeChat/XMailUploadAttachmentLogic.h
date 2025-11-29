@class OrderedDictionary, XMailUploadAttachmentTask;

@interface XMailUploadAttachmentLogic : NSObject <ICdnComMgrExt>

@property (retain, nonatomic) XMailUploadAttachmentTask *curTask;
@property (retain, nonatomic) OrderedDictionary *taskList;
@property (nonatomic) BOOL shouldAlertErrMsg;
@property (copy, nonatomic) id /* block */ uploadResultBlock;

- (BOOL)addUploadAttachmentTaskWithFileName:(id)a0 filePath:(id)a1;
- (void)checkQueue;
- (void)startUploadCurTask;
- (void)endCurTask;
- (void)OnCdnUpload:(id)a0;
- (void).cxx_destruct;

@end
