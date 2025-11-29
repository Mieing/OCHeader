@class WATexturePlugin, WANativeViewTexture, NSString, UIView, NSObject, CIContext;
@protocol WANativeViewTextureInterface, FlutterPluginRegistrar;

@interface WATextureContainer : NSObject <FlutterTexture>

@property (weak, nonatomic) WATexturePlugin *plugin;
@property (weak, nonatomic) NSObject<FlutterPluginRegistrar> *registrar;
@property (nonatomic) long long textureId;
@property (nonatomic) struct __CVBuffer { } *availablePixelBuffer;
@property (nonatomic) unsigned int lastPixelFormatType;
@property (nonatomic) long long lastContentMode;
@property (nonatomic) struct CGSize { double width; double height; } lastTextureSize;
@property (retain, nonatomic) CIContext *ciContext;
@property (nonatomic) struct __CVBuffer { } *ciContextOutBuffer;
@property (nonatomic) struct CGSize { double width; double height; } ciContextOutBufferSize;
@property (retain, nonatomic) WANativeViewTexture *lastNativeViewTexture;
@property (retain, nonatomic) UIView<WANativeViewTextureInterface> *nativeView;
@property (nonatomic) long long viewId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)destroy;
- (void)dealloc;
- (struct __CVBuffer { } *)copyPixelBuffer;
- (void)onTextureUnregistered:(id)a0;
- (void)checkTextureAvailable;
- (void)checkContentMode:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
