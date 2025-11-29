@class NSArray, NSString, AWEStudioComposerEditPageConfig;

@interface AWECreativeToolsEditDynamicTemplate : NSObject <ACCBusinessTemplate>

@property (copy, nonatomic) NSArray *componentClasses;
@property (copy, nonatomic) NSArray *componentPluginClasses;
@property (retain, nonatomic) AWEStudioComposerEditPageConfig *pageConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)editorTemplateWithFeaturesConfigs:(id)a0 customizedComponents:(id)a1 customizedComponentPlugins:(id)a2 shouldUseImageAlbumEditor:(BOOL)a3 mediaType:(id)a4 pageConfig:(id)a5;

- (id)componentConfigMap;
- (id)initWithComponentClasses:(id)a0 componentPlugins:(id)a1 pageConfig:(id)a2;
- (void).cxx_destruct;

@end
