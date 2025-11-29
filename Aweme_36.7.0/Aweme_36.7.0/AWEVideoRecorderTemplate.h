@class AWEVideoRecorderTemplateCommon, NSString, AWEStudioComposerRecordPageConfig, ACCRecordViewControllerInputData;

@interface AWEVideoRecorderTemplate : NSObject <AWEVideoRecordTemplateTarget, ACCBusinessTemplate>

@property (readonly, nonatomic) AWEStudioComposerRecordPageConfig *pageConfig;
@property (retain, nonatomic) AWEVideoRecorderTemplateCommon *commonTemplate;
@property (weak, nonatomic) ACCRecordViewControllerInputData *inputData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aACCMidVideoCreationProtocolClass;
+ (Class)aAWEVideoRecordTemplateLiteAdapterClass;

- (id)componentClasses;
- (id)componentPluginClasses;
- (id)componentConfigMap;
- (id)aACCMidVideoCreationProtocol;
- (void)configWithInputData:(id)a0;
- (id)aAWEVideoRecordTemplateLiteAdapter;
- (id)initWithPageConfig:(id)a0;
- (id)originalComponentClasses;
- (id)originalComponentPluginClasses;
- (void).cxx_destruct;

@end
