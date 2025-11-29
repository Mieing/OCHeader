@class NSString, NSObject;
@protocol FlutterTextureRegistry;

@interface FlutterTextureRegistryRelay : NSObject <FlutterTextureRegistry>

@property (weak, nonatomic) NSObject<FlutterTextureRegistry> *parent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParent:(id)a0;
- (long long)registerTexture:(id)a0;
- (void)textureFrameAvailable:(long long)a0;
- (void)unregisterTexture:(long long)a0;
- (void).cxx_destruct;

@end
