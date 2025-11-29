@class NSString, NSArray, NSMapTable, NSMutableArray;

@interface ACCCreationToolDataAlbumExporter : NSObject

@property (retain, nonatomic) NSString *taskID;
@property (retain, nonatomic) NSArray *assetModelList;
@property (retain, nonatomic) NSMutableArray *exportModelArray;
@property (nonatomic) unsigned long long remainingTaskCount;
@property (retain, nonatomic) NSMapTable *taskTable;
@property (copy, nonatomic) id /* block */ completionHandler;

+ (id)batchTaskToken;

- (id)exportAlbumItemWithIndexList:(id)a0 onCompletion:(id /* block */)a1;
- (void)cancelWithToken:(id)a0;
- (id)initWithTaskID:(id)a0 assetModelList:(id)a1;
- (void)replaceIndex:(unsigned long long)a0 withExportModel:(id)a1;
- (void)callbackResults:(id)a0 error:(id)a1;
- (void)assetIndex:(unsigned long long)a0 onVideoTaskFinished:(id)a1;
- (void)assetIndex:(unsigned long long)a0 onImageTaskFinished:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
