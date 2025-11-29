@class NSString;

@interface ACCEditorOneClickFilmUtils : NSObject <ACCEditorOneClickFilmUtilsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getFirstImageResourceFromProject:(id)a0;
+ (id)deepCopyWithOriginalMaterials:(id)a0;
+ (void)bindNLEAndFeatures:(id)a0 withRepository:(id)a1;
+ (id)getFirstVideoResourceFromProject:(id)a0;
+ (void)putProject:(id)a0 assetIdentifierDict:(id)a1 taskId:(id)a2;
+ (id)generateMaterials:(id)a0;
+ (id)generateMaterialsFromNleWithPublishModel:(id)a0;
+ (id)generateAssetIdentifierDict:(id)a0;
+ (id)UUIDStringWithFilePath:(id)a0 resource:(id)a1 taskId:(id)a2 mutableAssetIdentifierDict:(id)a3;
+ (void)updateAsestID:(id)a0 filePath:(id)a1 taskId:(id)a2 mutableAssetIdentifierDict:(id)a3;


@end
