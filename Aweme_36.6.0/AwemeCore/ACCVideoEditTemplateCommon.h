@class NSString, AWEStudioComposerEditPageConfig;

@interface ACCVideoEditTemplateCommon : NSObject <AWEVideoEditTemplate>

@property (retain, nonatomic) AWEStudioComposerEditPageConfig *pageConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)basicComponentClasses:(id)a0;
+ (id)stickerComponentClasses:(id)a0;
+ (id)toolBarComponentClasses:(id)a0;
+ (id)musicComponentClasses:(id)a0;
+ (id)effectComponentClasses:(id)a0;
+ (id)hashtagComponentClasses:(id)a0;
+ (id)brushComponentClasses:(id)a0;
+ (id)livePhotoComponentClasses:(id)a0;
+ (id)unclassifiedComponentClasses:(id)a0;
+ (id)composerComponentClasses:(id)a0;
+ (id)publishComponentClasses:(id)a0;

- (id)componentClasses;
- (id)componentPluginClasses;
- (id)componentConfigMap;
- (BOOL)slidesEditPagePreUpload;
- (void)prepareComponentConfigMap:(id)a0 featureConfig:(id)a1 featureClasses:(id)a2;
- (void).cxx_destruct;

@end
