@class NSString, NSData, AWEIMFileUploaderContext;
@protocol BDExternFileReaderInterface;

@interface AWEIMMessageUploadWaitQueueItem : NSObject

@property (nonatomic) BOOL isStreamUploadTask;
@property (nonatomic) BOOL isPureFileTask;
@property (retain, nonatomic) AWEIMFileUploaderContext *context;
@property (copy, nonatomic) NSString *fileID;
@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *taskID;
@property (nonatomic) long long messageType;
@property (retain, nonatomic) NSData *quickData;
@property (retain, nonatomic) id<BDExternFileReaderInterface> fileReader;

- (void).cxx_destruct;

@end
