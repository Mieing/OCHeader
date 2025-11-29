@class NSString, NSObject;
@protocol OMJTextureHolder, FlutterTextureRegistry;

@interface OWXTextureRegister : NSObject <FlutterTexture, OMJTextureRegister>

@property (retain, nonatomic) NSObject<FlutterTextureRegistry> *textures;
@property (retain, nonatomic) id<OMJTextureHolder> textureHolder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTextures:(id)a0;
- (long long)registerTextureWithHolder:(id)a0;
- (void)unregisterTextureWithID:(long long)a0;
- (void)textureFrameAvailableWithID:(long long)a0;
- (struct __CVBuffer { } *)copyPixelBuffer;
- (void).cxx_destruct;

@end
