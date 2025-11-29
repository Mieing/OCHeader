@class NSString;

@interface AWEStudioAssetMetadataUtils : HTSService <AWEStudioAssetMetadataUtils>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aigcMetaDictionaryWithProductId:(id)a0;
+ (id)propListWithAsset:(id)a0 metadata:(id)a1;
+ (id)jsonStringWithMetaModel:(id)a0 index:(long long)a1;
+ (void)addMetadataWithFilePath:(id)a0 outputPath:(id)a1 meta:(id)a2 completion:(id /* block */)a3;
+ (void)loadMetadataWithVideo:(id)a0 completion:(id /* block */)a1;
+ (id)uploadOriginWithAssetMediaType:(long long)a0 metadata:(id)a1;
+ (id)aigcMarkMetaWithAssetMediaType:(long long)a0 metadata:(id)a1;
+ (id)metaModelWithAssetMediaType:(long long)a0 metadata:(id)a1;
+ (id)metaModelWithAsset:(id)a0 metadata:(id)a1;
+ (id)uploadOriginWithAsset:(id)a0 metadata:(id)a1;
+ (id)productIdWithMetaValue:(id)a0 isValidJson:(BOOL *)a1;
+ (id)metaModelWithJsonString:(id)a0;
+ (void)addMetadataWithProject:(id)a0 results:(id)a1 completion:(id /* block */)a2;
+ (id)aiMetaForModel:(id)a0;
+ (id)autoCaptionTemplateIdWithAsset:(id)a0 metadata:(id)a1;
+ (id)autoCaptionTemplateNameWithAsset:(id)a0 metadata:(id)a1;
+ (id)duetOriginIDWithAsset:(id)a0 metadata:(id)a1;
+ (id)duetFromWithAsset:(id)a0 metadata:(id)a1;
+ (id)aigcMarkMetaWithAsset:(id)a0 metadata:(id)a1;
+ (id)jsonStringWithMomentMetaModel:(id)a0;
+ (id)momentMetaModelWithJsonString:(id)a0;
+ (id)aigcWaterMarkMetaDictForModel:(id)a0 withIdx:(long long)a1;
+ (id)aigcWaterMarkMetaStringForModel:(id)a0 withIdx:(long long)a1;
+ (void)addVideoMetadataForModel:(id)a0;
+ (void)logMergeVideoAIMeta:(id)a0;
+ (id)aigcPublishParamsWithModel:(id)a0;
+ (void)asyncReadAIGCMark:(id)a0 completion:(id /* block */)a1;
+ (void)initialize;
+ (void)loadMetadataForAsset:(id)a0 completion:(id /* block */)a1;
+ (id)imageProperties:(id)a0;
+ (void)loadMetadataWithImage:(id)a0 completion:(id /* block */)a1;


@end
