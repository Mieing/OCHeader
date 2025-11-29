@class NSArray, AUCDTOBasicCamera, AUCDTOFeatureCamera, NSString, ACCRecordViewControllerInputData;
@protocol ACCRepoCreationToolData;

@interface AWEVideoOpenRecorderTemplate : NSObject <AWEVideoRecordTemplateTarget, ACCBusinessTemplate>

@property (retain, nonatomic) id<ACCRepoCreationToolData> creationModel;
@property (retain, nonatomic) AUCDTOBasicCamera *basicConfig;
@property (retain, nonatomic) AUCDTOFeatureCamera *featureConfig;
@property (copy, nonatomic) NSArray *customComponentDescription;
@property (copy, nonatomic) NSArray *customComponent;
@property (copy, nonatomic) NSArray *customPlugin;
@property (weak, nonatomic) ACCRecordViewControllerInputData *inputData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEVideoRecordTemplateLiteAdapterClass;

- (id)componentClasses;
- (id)componentPluginClasses;
- (id)componentConfigMap;
- (void)recorderTemplateWithFeaturesConfigs:(id)a0;
- (void)checkCameraConfigBeforeConstructTemplate:(id)a0;
- (id)componentAssemblerWithContext:(id)a0;
- (id)componentPluginAssemblerWithContext:(id)a0;
- (id)cameraBasicArchClassesWithContext:(id)a0;
- (id)cameraBasicFuncClassesWithContext:(id)a0;
- (id)cameraExtraFuncClassesWithContext:(id)a0;
- (id)liteClassesWithContext:(id)a0;
- (id)cameraImageAlbumClassesWithContext:(id)a0;
- (id)musicClassesWithContext:(id)a0;
- (id)propClassesWithContext:(id)a0 effect:(id)a1;
- (id)beautyFilterClassesWithContext:(id)a0;
- (id)storyClassesWithContext:(id)a0;
- (id)bottomModeAlbumClassesWithContext:(id)a0;
- (id)combineArrays:(id)a0;
- (id)cameraBasicArchPluginClassesWithContext:(id)a0;
- (id)cameraBasicFuncPluginClassesWithContext:(id)a0;
- (id)cameraExtraFuncPluginClassesWithContext:(id)a0;
- (id)litePluginClassesWithContext:(id)a0;
- (id)musicPluginClassesWithContext:(id)a0;
- (id)propPluginClassesWithContext:(id)a0;
- (id)beautyFilterPluginClassesWithContext:(id)a0;
- (id)storyPluginClassesWithContext:(id)a0;
- (id)aAWEVideoRecordTemplateLiteAdapter;
- (void).cxx_destruct;
- (id)init;

@end
