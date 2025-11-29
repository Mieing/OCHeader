@interface ACCStickerDisplayContainerConfig : NSObject <ACCStickerContainerConfigProtocol>

@property (retain, nonatomic) id contextId;
@property (copy, nonatomic) id /* block */ stickerHierarchyComparator;
@property (nonatomic) BOOL needAdaptScreen;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } standPlayerFrame;
@property (nonatomic) BOOL ignoreMaskRadiusForXScreen;

- (id)stickerPlugins;
- (Class)stickerFactoryClass;
- (Class)stickerPluginConfigClass;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
