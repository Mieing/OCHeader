@interface BDARVAdDataMappingManager : NSObject

+ (id)safeDictionary:(id)a0;
+ (id)parseAdDataWithItemDic:(id)a0;
+ (id)parseStyleTemplateWithItemDic:(id)a0;
+ (id)makeDataWithAdDataModel:(id)a0 logExtra:(id)a1;
+ (id)mappingComponentMetaWitCode:(id)a0 styleTemplateModel:(id)a1;
+ (id)mappingGeneralComponentDataWithStyleTemplateModel:(id)a0;
+ (id)mappingPicAndTextComponentDataWithStyleTemplateModel:(id)a0;
+ (id)mappingNotDownloadComponentDataWithStyleTemplateModel:(id)a0;
+ (id)mappingDownloadBasicInfoComponentDataWithStyleTemplateModel:(id)a0;
+ (id)mappingBottomBigCardComponentDataWithStyleTemplateModel:(id)a0;
+ (id)mappingFinishPlayMaskComponentDataWithStyleTemplateModel:(id)a0;
+ (id)mappingLiveComponentDataWithStyleTemplateModel:(id)a0;
+ (id)mappingInteractiveCardComponentDataWithStyleTemplateModel:(id)a0;
+ (id)mappingBenefitComponentDataWithStyleTemplateModel:(id)a0;
+ (void)mappingTrackUrlListWithTargetDataDic:(id)a0;
+ (void)mappingRawDataTrackListWithAdDataDic:(id)a0 componentDataDic:(id)a1;
+ (id)urlArrayTransform:(id)a0;
+ (BOOL)styleSameWithJsonObj:(id)a0;
+ (id)mappingToOriginalWithItemDic:(id)a0;
+ (id)mappingRawDataWithItemDic:(id)a0;

@end
