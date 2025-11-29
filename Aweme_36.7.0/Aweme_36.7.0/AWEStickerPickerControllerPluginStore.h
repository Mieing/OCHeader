@class ACCRecordViewControllerInputData, NSMapTable;
@protocol ACCPropPickerService, IESServiceProvider, AWEStickerViewLayoutManagerProtocol, ACCRecordPropService;

@interface AWEStickerPickerControllerPluginStore : NSObject

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) NSMapTable *pluginMap;
@property (retain, nonatomic) NSMapTable *pluginCreatorMap;
@property (weak, nonatomic) ACCRecordViewControllerInputData *inputData;
@property (weak, nonatomic) id<ACCPropPickerService> propPickerServcie;
@property (weak, nonatomic) id<ACCRecordPropService> propService;
@property (weak, nonatomic) id<AWEStickerViewLayoutManagerProtocol> lastLayoutManager;

- (void)setLayoutManager:(id)a0 forPlugins:(id)a1;
- (id)loadAllPluginsWithForceCreate:(BOOL)a0;
- (id)initWithServiceProvider:(id)a0 inputData:(id)a1;
- (id)loadPluginsWithClasses:(id)a0 forceCreate:(BOOL)a1;
- (id)loadAllSideslipPluginsWithConfig:(id)a0;
- (void)p_registerPluginCreators;
- (id)p_switchCameraPlugin;
- (id)p_collectionStickerPlugin;
- (id)p_schemaStickerPlugin;
- (id)p_sliderPlugin;
- (id)p_mvTemplatePlugin;
- (id)p_favoritePlugin;
- (void)registerPluginClass:(Class)a0 lazyCreator:(id /* block */)a1;
- (void).cxx_destruct;
- (void)registerPlugin:(id)a0;

@end
