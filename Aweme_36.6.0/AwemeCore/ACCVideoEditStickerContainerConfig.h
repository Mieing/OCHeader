@class NSArray;
@protocol ACCEditStickerProtocol;

@interface ACCVideoEditStickerContainerConfig : NSObject <ACCStickerContainerConfigProtocol>

@property (copy, nonatomic) NSArray *stickerPlugins;
@property (weak, nonatomic) id<ACCEditStickerProtocol> editStickerService;
@property (retain, nonatomic) id contextId;
@property (copy, nonatomic) id /* block */ stickerHierarchyComparator;
@property (nonatomic) BOOL needAdaptScreen;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } standPlayerFrame;
@property (nonatomic) BOOL ignoreMaskRadiusForXScreen;

+ (id)pluginList;

- (void)removeAdsorbingPlugin;
- (void)removePreviewViewPlugin;
- (void)updateMusicCoverWithMusicModel:(id)a0;
- (void)removeDeleteViewPlugin;
- (void)removeSafeAreaPlugin;
- (void)removePluginsExceptEditLyrics;
- (void)changeAlbumImagePluginsWithMaterialSize:(struct CGSize { double x0; double x1; })a0;
- (Class)stickerFactoryClass;
- (Class)stickerPluginConfigClass;
- (void)setDeletePluginDelegate:(id)a0;
- (void)removePluginWithClass:(Class)a0;
- (void)removePluginExceptClasses:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addPlugin:(id)a0;

@end
