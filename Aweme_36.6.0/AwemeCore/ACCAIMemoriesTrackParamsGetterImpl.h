@class NSString;

@interface ACCAIMemoriesTrackParamsGetterImpl : ACCUseCase <ACCAIMemoriesTrackParamsGetter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonTrackParams;
- (id)originalTemplateID;
- (id)commonTrackParamsWithIgnoreTemplate;
- (id)commonTrackParamsForTemplate:(id)a0;
- (id)commonTrackParamsForTemplate:(id)a0 isIgnoreTemplate:(BOOL)a1;
- (BOOL)isAIMemoriesTemplate:(id)a0;
- (BOOL)currentIsAIMemoriesTemplate;

@end
