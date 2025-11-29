@class NSString, NSArray, NSMutableSet, NSMutableDictionary, NSMutableArray;

@interface ACCImageImportAdaptor : NSObject <ACCAssetImportDataConsumerProtocol>

@property (retain, nonatomic) NSString *taskID;
@property (retain, nonatomic) NSArray *assetModels;
@property (retain, nonatomic) NSMutableArray *outputInfoList;
@property (retain, nonatomic) NSMutableSet *assetIDSet;
@property (retain, nonatomic) NSMutableDictionary *assetIndexDictionary;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) BOOL didFinished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configWithTaskID:(id)a0 assetModel:(id)a1;
+ (void)configImportConfigCommonWithImportConfig:(id)a0 taskID:(id)a1 assetModel:(id)a2;
+ (id)configWithLivePhotoTaskID:(id)a0 assetModel:(id)a1;

- (void)doFetchCompletion;
- (void)taskCompletion:(id)a0;
- (void)configWithTaskID:(id)a0 assetModels:(id)a1;
- (void)fetchOutputsWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)checkCompletion;

@end
