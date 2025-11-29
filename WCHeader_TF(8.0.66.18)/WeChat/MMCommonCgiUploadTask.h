@class MMCommonCgiUploadInfo, NSString, WCBaseCgi, ParallelUploadRequest_Param;
@protocol MMCommonCgiUploadTaskDelegate;

@interface MMCommonCgiUploadTask : NSObject <WCBaseCgiDelegate>

@property (nonatomic) BOOL isRunning;
@property (nonatomic) long long maxRetryCount;
@property (weak, nonatomic) id<MMCommonCgiUploadTaskDelegate> delegate;
@property (retain, nonatomic) WCBaseCgi *uploadCgi;
@property (retain, nonatomic) NSString *taskId;
@property (nonatomic) long long retryCount;
@property (retain, nonatomic) MMCommonCgiUploadInfo *taskInfo;
@property (retain, nonatomic) ParallelUploadRequest_Param *initialParam;
@property (retain, nonatomic) NSString *uploadId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskInfo:(id)a0 delegate:(id)a1;
- (void)startUploadTask;
- (void)stopUploadTask;
- (id)createUploadCgi;
- (void)baseCgi:(id)a0 didGetResponse:(id)a1;
- (void)baseCgi:(id)a0 didFailWithError:(id)a1 response:(id)a2;
- (void).cxx_destruct;

@end
