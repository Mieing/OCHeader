@class NSString, NSNumber;

@interface APCDTOMergeConfigExtension : AWEBaseBizConfigModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *mergeVEConfigUpdaterClass;
@property (copy, nonatomic) NSNumber *skipCompressPhotoIfNotEdited;
@property (copy, nonatomic) NSNumber *disableSaveToAlbum;
@property (retain, nonatomic) NSNumber *disableSavePropOrTemplateToMetaData;
@property (retain, nonatomic) NSNumber *disableUseWaterMaskSaveLocal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
