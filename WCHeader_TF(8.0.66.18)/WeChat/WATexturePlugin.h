@class NSString, WANativeViewPlugin, NSObject, FlutterMethodChannel;
@protocol FlutterPluginRegistrar;

@interface WATexturePlugin : NSObject <FlutterPlugin>

@property (weak, nonatomic) NSObject<FlutterPluginRegistrar> *registrar;
@property (weak, nonatomic) WANativeViewPlugin *nativeViewPlugin;
@property (retain, nonatomic) FlutterMethodChannel *channel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerWithRegistrar:(id)a0;

- (id)initWithFlutterEngine:(id)a0 nativeViewPlugin:(id)a1;
- (void)dealloc;
- (void)updateTextureInfo:(long long)a0 contentMode:(long long)a1 textureSize:(struct CGSize { double x0; double x1; })a2;
- (void)handleMethodCall:(id)a0 result:(id /* block */)a1;
- (void).cxx_destruct;

@end
