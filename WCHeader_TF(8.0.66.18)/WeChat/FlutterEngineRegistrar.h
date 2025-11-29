@class NSString, FlutterEngine;

@interface FlutterEngineRegistrar : NSObject <FlutterPluginRegistrar> {
    NSString *_pluginKey;
}

@property (weak, nonatomic) FlutterEngine *flutterEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPlugin:(id)a0 flutterEngine:(id)a1;
- (id)messenger;
- (id)textures;
- (void)publish:(id)a0;
- (void)addMethodCallDelegate:(id)a0 channel:(id)a1;
- (void)addApplicationDelegate:(id)a0;
- (id)lookupKeyForAsset:(id)a0;
- (id)lookupKeyForAsset:(id)a0 fromPackage:(id)a1;
- (void)registerViewFactory:(id)a0 withId:(id)a1;
- (void)registerViewFactory:(id)a0 withId:(id)a1 gestureRecognizersBlockingPolicy:(int)a2;
- (void).cxx_destruct;

@end
