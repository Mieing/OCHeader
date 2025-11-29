@class ACCRecordViewControllerInputData, AWEStudioComposerRecordPageConfig, NSString;

@interface AWEVideoRecorderTemplateCommon : NSObject <ACCBusinessTemplate>

@property (readonly, nonatomic) AWEStudioComposerRecordPageConfig *pageConfig;
@property (weak, nonatomic) ACCRecordViewControllerInputData *inputData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)componentClasses;
- (id)componentPluginClasses;
- (id)componentConfigMap;
- (id)initWithPageConfig:(id)a0;
- (void).cxx_destruct;

@end
