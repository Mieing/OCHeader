@class NSString, NSMapTable, CADisplayLink;

@interface WANativeViewPlugin : NSObject <FlutterPlatformViewFactory>

@property (retain, nonatomic) NSMapTable *platformContainerViews;
@property (retain, nonatomic) NSMapTable *textureContainers;
@property (retain, nonatomic) NSMapTable *nativeViews;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)destroy;
- (void)registerEngine:(id)a0;
- (id)createWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewIdentifier:(long long)a1 arguments:(id)a2;
- (id)createArgsCodec;
- (void)insertNativeView:(id)a0 viewId:(long long)a1;
- (void)removeNativeView:(long long)a0;
- (void)addTextureContainer:(id)a0;
- (id)removeTextureContainer:(long long)a0;
- (void)updateDisplayLink;
- (void)refreshDisplay;
- (void)invalidateDisplayLink;
- (void)handleNativeViewPointerEvent:(id)a0;
- (void).cxx_destruct;

@end
