@class EcHttpTask, NSString, NSProgress, EcClient;

@interface EcDownloadItemTask : EcTaskUnit

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *taskKey;
@property (nonatomic) unsigned long long cloudId;
@property (nonatomic) unsigned long long linkId;
@property (nonatomic) long long offset;
@property (copy, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSProgress *progress;
@property (copy, nonatomic) id /* block */ complete;
@property (copy, nonatomic) id /* block */ progressCallback;
@property (weak, nonatomic) EcClient *client;
@property (retain, nonatomic) EcHttpTask *httpTask;

- (id)initWithUrl:(id)a0 filePath:(id)a1 taskKey:(id)a2 cloudId:(unsigned long long)a3 linkId:(unsigned long long)a4 offset:(long long)a5 client:(id)a6 progress:(id /* block */)a7 complete:(id /* block */)a8;
- (id)uniqueTaskKey;
- (void).cxx_destruct;
- (void)finish;
- (void)run;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)cancel;

@end
