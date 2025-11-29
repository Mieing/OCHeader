@class NSString, NSProgress, NSArray, TTHttpTask;
@protocol IESLivePublishMediaService;

@interface IESLiveBackRecordDownload : NSOperation

@property (nonatomic, getter=isFinished) BOOL finished;
@property (nonatomic, getter=isExecuting) BOOL executing;
@property (copy, nonatomic) id /* block */ processBlock;
@property (copy, nonatomic) id /* block */ errorBlock;
@property (copy, nonatomic) id /* block */ m3u8ResponseBlock;
@property (retain, nonatomic) TTHttpTask *downloadTask;
@property (retain, nonatomic) NSProgress *progress;
@property (nonatomic) int index;
@property (nonatomic) BOOL hadRegisterOberver;
@property (retain, nonatomic) id<IESLivePublishMediaService> publishMediaService;
@property (copy, nonatomic) NSString *downloadUrl;
@property (copy, nonatomic) NSString *m3u8Url;
@property (copy, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSArray *localTsUrls;
@property (nonatomic) unsigned long long actionType;

- (void)safeRemoveObserver;
- (void)startDownloadTask;
- (void)startDownloadM3U8Content;
- (void)startTsCoverToMp4;
- (void)errorAction:(unsigned long long)a0;
- (void)progressAction:(double)a0 index:(long long)a1;
- (void)parseM3U8Content:(id)a0;
- (void)m3u8ResponseAction:(id)a0;
- (id)initWithProgressCallback:(id /* block */)a0 erroCallback:(id /* block */)a1 index:(int)a2;
- (id)initWithM3U8Callback:(id /* block */)a0 erroCallback:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)isConcurrent;
- (void)done;
- (void)start;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)cancel;

@end
