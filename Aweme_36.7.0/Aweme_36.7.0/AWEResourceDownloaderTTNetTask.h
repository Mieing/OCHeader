@class NSString, TTHttpTask, NSFileHandle;

@interface AWEResourceDownloaderTTNetTask : NSObject

@property (nonatomic) BOOL cancelFlag;
@property (copy, nonatomic) NSString *savePath;
@property (copy, nonatomic) NSString *channel;
@property (nonatomic) long long currentLength;
@property (nonatomic) long long totalLength;
@property (retain, nonatomic) NSFileHandle *fileHandle;
@property (weak, nonatomic) TTHttpTask *downloadTask;
@property (nonatomic) float lastProgressValue;

- (id)initWithChannel:(id)a0 savePath:(id)a1;
- (id)receiveDataAndWriteToFileEnd:(id)a0;
- (id)finishAndCheckFile:(id)a0;
- (id)tempSavePath:(id)a0;
- (void)closeFileHandle;
- (void)removeTempFileAndCloseFileHandle;
- (void).cxx_destruct;
- (void)reset;
- (void)cancel;
- (BOOL)isCancel;

@end
