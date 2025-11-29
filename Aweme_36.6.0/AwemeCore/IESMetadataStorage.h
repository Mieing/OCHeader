@class IESMetadataStorageConfiguration, IESMetadataIndexesMap, IESMetadataStorageInfo, IESMetadataMappedFile;

@interface IESMetadataStorage : NSObject

@property (retain, nonatomic) IESMetadataStorageConfiguration *configuration;
@property (retain, nonatomic) IESMetadataStorageInfo *storageInfo;
@property (retain, nonatomic) IESMetadataMappedFile *mappedFile;
@property (retain, nonatomic) IESMetadataIndexesMap *indexesMap;
@property (readonly, nonatomic) int version;

+ (id)storageWithConfiguration:(id)a0;

- (id)metadatasArrayWithTransformBlock:(id /* block */)a0 compareBlock:(id /* block */)a1;
- (void)setupStorageIfNeeded;
- (void)saveStorageInfoToLocal;
- (id)metadataContentDataAtIndex:(int)a0 offset:(int)a1;
- (int)indexForMetadata:(struct NSObject { Class x0; } *)a0;
- (void)resetFileWithMetadatasArray:(id)a0;
- (BOOL)writeMetadata:(struct NSObject { Class x0; } *)a0 index:(int)a1 error:(id *)a2;
- (id)storageInfoFromLocal;
- (BOOL)writeMetadataBinaryData:(id)a0 index:(int)a1 offset:(int)a2 error:(id *)a3;
- (id)metadatasArrayWithTransformBlock:(id /* block */)a0;
- (int)writeMetadata:(struct NSObject { Class x0; } *)a0 error:(id *)a1;
- (void)deleteMetadata:(struct NSObject { Class x0; } *)a0;
- (void)deleteAllMetadata;
- (void)setNeedCheckDuplicatedMetadatas;
- (void).cxx_destruct;

@end
