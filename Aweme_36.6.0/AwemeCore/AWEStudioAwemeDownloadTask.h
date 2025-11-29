@class NSNumber, NSURLSessionDownloadTask;

@interface AWEStudioAwemeDownloadTask : NSObject

@property (nonatomic) double receivedImageCount;
@property (nonatomic) double expectedImageCount;
@property (weak, nonatomic) NSURLSessionDownloadTask *task;
@property unsigned long long status;
@property (nonatomic) long long taskCount;
@property (retain, nonatomic) NSNumber *progressValue;
@property (readonly) double progress;

+ (id)fakeTaskWithStatus:(unsigned long long)a0;

- (void).cxx_destruct;
- (BOOL)isCancelled;
- (void)cancel;

@end
