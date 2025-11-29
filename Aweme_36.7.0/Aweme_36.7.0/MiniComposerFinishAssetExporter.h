@class NSString, ACCImageImportTask, ACCVideoImportTask, AWEAssetModel;

@interface MiniComposerFinishAssetExporter : NSObject

@property (retain, nonatomic) ACCVideoImportTask *videoTask;
@property (retain, nonatomic) ACCImageImportTask *imageTask;
@property (readonly, nonatomic) NSString *UUIDString;
@property (readonly, nonatomic) NSString *taskID;
@property (readonly, nonatomic) AWEAssetModel *assetModel;
@property (nonatomic) BOOL importQueueEnabled;

- (id)initWithAsset:(id)a0 taskID:(id)a1;
- (void).cxx_destruct;
- (void)startWithCompletion:(id /* block */)a0;
- (id)createResultObject;

@end
