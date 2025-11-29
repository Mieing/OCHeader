@class NSString;

@interface ACCPropTrackParamsGetterImpl : ACCUseCase <ACCPropTrackParamsGetter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)filterList;
- (id)fromPropId;
- (id)metricsDict;
- (id)editPropProvider;
- (id)propList;
- (id)getCurrentPropAIGCInfo;
- (id)propListInRecordPage;
- (id)propListInEditPage;
- (id)propRecIdList;
- (id)propSelectedFromList;
- (id)propSelectedFromListForEnterEditorPage:(BOOL)a0;
- (id)propImprPosList;
- (id)propTabOrderList;
- (id)propTabTypeList;
- (id)propSourceList;
- (id)toolMusicPropTypeList;
- (id)customPropList;
- (id)propProviderList;
- (id)propZipSizeList;
- (BOOL)isUseDefaultProp;
- (BOOL)isSelfSufficient;
- (BOOL)isSelfSufficientWithPropID:(id)a0;
- (BOOL)hasImageTemplate;
- (BOOL)isApplyEffectInEditPage;
- (id)parentEffectList;
- (id)editorPicTemplateApplyed;
- (BOOL)p_shouldInsertFollowProp;
- (BOOL)p_shouldInsertRecordCustomProp;
- (id)toolMusicPropTypeListInRecordPage;

@end
