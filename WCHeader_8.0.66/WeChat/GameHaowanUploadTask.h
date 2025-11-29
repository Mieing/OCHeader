@class NSString, NSArray, NSDictionary, NSObject;
@protocol GameHaowanUploadTaskDelegate;

@interface GameHaowanUploadTask : MMObject {
    NSArray *_fileList;
    BOOL _isStarted;
    unsigned long long _currentRetryCount;
}

@property (retain, nonatomic) NSString *postId;
@property (readonly, nonatomic) NSArray *fileList;
@property (retain, nonatomic) NSObject *continueData;
@property (weak, nonatomic) id<GameHaowanUploadTaskDelegate> delegate;
@property (retain, nonatomic) NSDictionary *trackEventProps;

- (id)initWithFileList:(id)a0;
- (void)start;
- (void)stop;
- (void)startUpload;
- (void)retryUpload;
- (void)scheduleRetry;
- (void)handleUploadFailed:(int)a0 message:(id)a1 canRetry:(BOOL)a2;
- (void)handleUploadSucceed:(id)a0;
- (void)handleUploadProgress:(float)a0;
- (void)onStart;
- (void)onStop;
- (double)nextRetryDelay;
- (id)generateFileKey:(id)a0;
- (void)trackEventUploadAction:(long long)a0 block:(id /* block */)a1;
- (id)reportObjWithAction:(long long)a0;
- (void).cxx_destruct;

@end
