@class NSString, AWEStudioComposerEditPageConfig;
@protocol AWEVideoEditTemplate;

@interface ACCVideoEditTemplateDouyin : NSObject <AWEVideoEditTemplate>

@property (retain, nonatomic) id<AWEVideoEditTemplate> commonTemplate;
@property (retain, nonatomic) AWEStudioComposerEditPageConfig *pageConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)componentClasses;
- (id)componentPluginClasses;
- (id)componentConfigMap;
- (void).cxx_destruct;
- (id)init;

@end
