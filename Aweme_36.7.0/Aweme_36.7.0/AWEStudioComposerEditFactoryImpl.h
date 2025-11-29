@class NSString;

@interface AWEStudioComposerEditFactoryImpl : NSObject <AWEStudioComposerEditFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)ultraCreationPageHandlerClass;
- (id)editorCommonTemplate;
- (id)featureConfigsWithFeatureTypes:(id)a0 mediaType:(id)a1 featureEditor:(id)a2;
- (Class)ultraCreationBackComponentClass;
- (Class)ultraCreationFinishComponentClass;
- (id)creativeToolEditConfigWithInputData:(id)a0 designatedMediaType:(id)a1 featureConfigs:(id)a2 customizedComponents:(id)a3 customizedComponentPlugins:(id)a4;

@end
