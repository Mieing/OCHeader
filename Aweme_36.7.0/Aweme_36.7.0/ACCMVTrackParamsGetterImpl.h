@class NSString;

@interface ACCMVTrackParamsGetterImpl : ACCUseCase <ACCMVTrackParamsGetter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mvId;
- (BOOL)isAIMemoriesTemplate:(id)a0;
- (BOOL)currentIsAIMemoriesTemplate;
- (id)templateCommonTrackParams;
- (id)templateMusicId;
- (id)bringInTemplateInfo;
- (id)bringInTemplateInfoWithTemplateId:(id)a0;
- (id)softBringInTemplateInfo;
- (id)softBringInTemplateInfoWithTemplateId:(id)a0;
- (id)isNonPortrait;
- (id)getAIMemoriesTemplateTrackParamsForTemplate:(id)a0;
- (id)getCurrentAIMemoriesTemplateTrackParams;

@end
