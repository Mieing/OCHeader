@class EcClient, EcHttpTask;

@interface EcDownloadQueryTask : EcTaskUnit

@property (nonatomic) BOOL bCancel;
@property (retain, nonatomic) EcHttpTask *httpTask;
@property (weak, nonatomic) EcClient *client;
@property (nonatomic) unsigned long long cloudId;
@property (nonatomic) unsigned long long linkId;
@property (copy, nonatomic) id /* block */ complete;

- (id)initWithCloudId:(unsigned long long)a0 linkId:(unsigned long long)a1 client:(id)a2 complete:(id /* block */)a3;
- (id)uniqueTaskKey;
- (void).cxx_destruct;
- (void)finish;
- (void)run;
- (void)cancel;

@end
