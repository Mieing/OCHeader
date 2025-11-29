@class NSArray;

@interface ACCImageTemplateStickerContainerConfig : NSObject <ACCStickerContainerConfigProtocol>

@property (copy, nonatomic) NSArray *stickerPlugins;
@property (retain, nonatomic) id contextId;
@property (copy, nonatomic) id /* block */ stickerHierarchyComparator;
@property (nonatomic) BOOL needAdaptScreen;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } standPlayerFrame;
@property (nonatomic) BOOL ignoreMaskRadiusForXScreen;

+ (id)pluginList;

- (Class)stickerFactoryClass;
- (Class)stickerPluginConfigClass;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addPlugin:(id)a0;

@end
