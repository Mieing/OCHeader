@class NSObject;
@protocol FlutterTextureRegistry;

@interface LiteAppVideoPlayerFrameUpdater : NSObject

@property (nonatomic) BOOL isDisposed;
@property (nonatomic) long long textureId;
@property (readonly, weak, nonatomic) NSObject<FlutterTextureRegistry> *registry;

- (id)initWithRegistry:(id)a0;
- (void)refreshDisplay;
- (void).cxx_destruct;

@end
