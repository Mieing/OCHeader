@class EcHttpTask, NSString, ECUploadItemModel, TTUploadTaskParam, EcClient;

@interface EcUploadItemTask : NSObject

@property (weak, nonatomic) EcClient *client;
@property (copy, nonatomic) NSString *taskKey;
@property (copy, nonatomic) NSString *uploadURL;
@property (retain, nonatomic) TTUploadTaskParam *taskParam;
@property (copy, nonatomic) id /* block */ progress;
@property (copy, nonatomic) id /* block */ resultBlock;
@property (retain, nonatomic) ECUploadItemModel *itemModel;
@property (retain, nonatomic) EcHttpTask *task;
@property (readonly, copy, nonatomic) NSString *md5;

- (void)uploadComplete:(id /* block */)a0;
- (void)taskCompleteResult:(id)a0;
- (id)initWithUploadURL:(id)a0 taskParam:(id)a1 itemModel:(id)a2 client:(id)a3 progress:(id /* block */)a4 result:(id /* block */)a5;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;

@end
