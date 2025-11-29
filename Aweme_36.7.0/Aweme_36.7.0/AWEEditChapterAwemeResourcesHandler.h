@class AWEStudioAwemeResourceModel, AWEStudioAwemeDownloadConfig, AWEVideoPublishViewModel, NSError;
@protocol ACCDownloadFileTask;

@interface AWEEditChapterAwemeResourcesHandler : NSObject

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) AWEStudioAwemeDownloadConfig *fetchAwemeConfig;
@property (retain, nonatomic) AWEStudioAwemeResourceModel *errorCollector;
@property (retain, nonatomic) id<ACCDownloadFileTask> mainVideoTask;
@property (nonatomic) BOOL hasDownloadCover;
@property (nonatomic) BOOL hasDownloadVideo;
@property (nonatomic) BOOL videoStartLoading;
@property (readonly, nonatomic) unsigned long long taskStatus;
@property (nonatomic) double requestStartTime;
@property (nonatomic) BOOL useMainResourceCache;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) id /* block */ coverHandler;
@property (copy, nonatomic) id /* block */ mainResourceHandler;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) id /* block */ requestConfig;

- (id)initWithPublishModel:(id)a0;
- (void)fetchAwemeResources;
- (void)configVideoDecryptionKey:(id)a0;
- (void)downloadAwemeMainResource;
- (void)handleCompletionIfNeeded;
- (void)savePublishViewModel:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;

@end
