@class EcClient, NSString, WCTDatabase;

@interface EcWCDBManager : NSObject

@property (weak, nonatomic) EcClient *client;
@property (copy, nonatomic) NSString *path;
@property (retain, nonatomic) WCTDatabase *database;

- (void)runTransaction:(id /* block */)a0;
- (BOOL)insertOrReplaceObjects:(id)a0 into:(id)a1;
- (id)objectForTagId:(unsigned long long)a0;
- (id)tagRelationModelByCloudId:(unsigned long long)a0;
- (BOOL)deleteTagRelationModel:(id)a0;
- (BOOL)deleteAssetByTagId:(unsigned long long)a0;
- (id)tagRelationModelTagId:(unsigned long long)a0 linkId:(unsigned long long)a1;
- (id)tagRelationModelTagId:(unsigned long long)a0 addUTCMS:(unsigned long long)a1 updateUTCMS:(unsigned long long)a2 linkId:(unsigned long long)a3 limit:(long long)a4;
- (id)tagModelByCoverLinks:(id)a0;
- (id)tagModelByTagIds:(id)a0;
- (id)tagModelByCursor:(id)a0;
- (id)objectForlocalId:(id)a0;
- (id)fetchUpdateCursor;
- (void)updateNextCursor:(id)a0;
- (void)initEcDbTable;
- (id)objectForcloudId:(unsigned long long)a0;
- (id)objectForUid:(unsigned long long)a0;
- (id)tagRelationModelByTagId:(unsigned long long)a0 cloudId:(unsigned long long)a1;
- (BOOL)deleteLocalAssetByTagId:(unsigned long long)a0;
- (id)uploadItemModelByTaskKey:(id)a0;
- (BOOL)deleteUploadItemModelTask:(id)a0;
- (BOOL)deleteUploadItemModelTaskWithAssetId:(id)a0;
- (BOOL)deleteUploadItemModelTaskWithAssetIds:(id)a0 taskKey:(id)a1;
- (id)getAllNeedRemoveModel;
- (BOOL)deleteSourceFileWithAssetId:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (id)initWithClient:(id)a0;

@end
