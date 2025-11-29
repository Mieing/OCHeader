@class NSObject;
@protocol FlutterTextureRegistry;

@interface FLTFrameUpdater : NSObject

@property (nonatomic) long long textureId;
@property (readonly, weak, nonatomic) NSObject<FlutterTextureRegistry> *registry;

- (id)initWithRegistry:(id)a0;
- (void)onDisplayLink:(id)a0;
- (void).cxx_destruct;

@end
