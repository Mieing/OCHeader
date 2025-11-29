@class LZDownloadTaskItem;

@interface MMKSBasicMusicDownloader : LZAudioDataDownloader

@property (retain, nonatomic) LZDownloadTaskItem *taskItem;
@property (nonatomic) long long statusCode;
@property (nonatomic) long long continuousLengh;
@property (nonatomic) double startTime;
@property (nonatomic) double downloadSpeed;
@property (nonatomic) double downloadCostTime;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } downloadRange;

- (BOOL)isErrorCanRetry:(id)a0;
- (BOOL)ParseRangeInfo:(id)a0 Result:(id)a1;
- (void)handlerReceiveRespons:(id)a0 error:(id *)a1;
- (BOOL)isMineTypeErrorWithHeaders:(id)a0;
- (BOOL)isStatusCodeSuccess:(int)a0;
- (id)buildHTTPHeaderFields;
- (void)setupDictionaryIntoTarget:(id)a0 withSource:(id)a1;
- (id)buildHTTPHeaderRangeField;
- (id)buildHTTPHeaderQQMusicRelatedField;
- (void)reportDownloadStartWithIsWholeRange:(BOOL)a0;
- (void)reportContentRangeNotFoundInResponse;
- (void)reportContentLengthNotFoundInResponse;
- (void)reportInvalidContantTypeInResponse;
- (void)reportDownloadCompleteWithSuccess:(BOOL)a0;
- (void).cxx_destruct;

@end
