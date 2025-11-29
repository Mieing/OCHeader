@class AWEStudioComposerScenarioConfig;
@protocol AWEStudioCameraCustomization;

@interface ASCFeatureCustomizationInternalHandler : NSObject

@property (retain, nonatomic) id<AWEStudioCameraCustomization> customization;
@property (retain, nonatomic) AWEStudioComposerScenarioConfig *scenarioConfig;
@property (retain, nonatomic) AWEStudioComposerScenarioConfig *mainCameraScenarioConfig;

- (id)p_customizedDraftWithDTOModel:(id)a0;
- (void)prepareWithCustomization:(id)a0;
- (void)resetCameraCustomizationToDefault;
- (void)prepareWithDTOModel:(id)a0;
- (id)currentCameraCustomization;
- (id)currentScenarioConfig;
- (void).cxx_destruct;
- (void)synchronize:(id)a0;

@end
