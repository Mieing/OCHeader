@class EcTaskUnit, NSString, EcUniformAsset, EcDownloadAssetEncModel, NSError, NSObject, EcClient;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface EcDownloadItemModel : NSObject

@property (weak, nonatomic) EcClient *client;
@property (nonatomic) long long state;
@property (retain, nonatomic) EcUniformAsset *uniformAsset;
@property (copy, nonatomic) NSString *assetId;
@property (nonatomic) unsigned long long cloudId;
@property (nonatomic) unsigned long long linkId;
@property (nonatomic) unsigned long long tagId;
@property (copy, nonatomic) NSString *subType;
@property (copy, nonatomic) NSString *taskKey;
@property (copy, nonatomic) NSString *downloadFolder;
@property (copy, nonatomic) NSString *downloadFilePath;
@property (nonatomic) long long bytesDone;
@property (nonatomic) long long bytesTotal;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long cacheSize;
@property (retain, nonatomic) EcDownloadAssetEncModel *downloadEncModel;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (copy, nonatomic) id /* block */ complete;
@property (copy, nonatomic) id /* block */ progress;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *itemGroup;
@property (retain, nonatomic) EcTaskUnit *queryTask;

- (id)taskItemState;
- (id)chunPath:(id)a0;
- (void)downloadFinish;
- (void)startDownloadItem:(id)a0;
- (id)initWithTaskKey:(id)a0 downloadFolder:(id)a1 tagId:(unsigned long long)a2 uniformAsset:(id)a3 client:(id)a4 progress:(id /* block */)a5 complete:(id /* block */)a6;
- (void)retryProgress:(id /* block */)a0 complete:(id /* block */)a1;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;

@end
