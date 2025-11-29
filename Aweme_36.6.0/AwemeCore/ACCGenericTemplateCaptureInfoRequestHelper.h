@interface ACCGenericTemplateCaptureInfoRequestHelper : NSObject

+ (id)convertToGenericTemplateCustomInfoModelsWithCaptureInfo:(id)a0 slotInfo:(id)a1 infoFormat:(id)a2;
+ (id)formatCaptureInfo:(id)a0 formatStr:(id)a1;
+ (BOOL)nextCharacterIsN:(id)a0 index:(unsigned long long)a1;
+ (void)fetchCaptureInfoWithSlotInfo:(id)a0 phAsset:(id)a1 infoFormat:(id)a2 completion:(id /* block */)a3;

@end
