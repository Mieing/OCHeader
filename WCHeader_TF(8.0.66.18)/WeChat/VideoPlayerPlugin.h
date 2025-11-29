@class NSString, NSMutableDictionary, NSObject;
@protocol FlutterPluginRegistrar, FlutterBinaryMessenger, FlutterTextureRegistry;

@interface VideoPlayerPlugin : NSObject <FlutterPlugin>

@property (readonly, weak, nonatomic) NSObject<FlutterTextureRegistry> *registry;
@property (readonly, weak, nonatomic) NSObject<FlutterBinaryMessenger> *messenger;
@property (readonly, nonatomic) NSMutableDictionary *players;
@property (readonly, nonatomic) NSObject<FlutterPluginRegistrar> *registrar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setPluginImplClass:(Class)a0;
+ (void)registerWithRegistrar:(id)a0;

- (id)initWithRegistrar:(id)a0;
- (void)detachFromEngineForRegistrar:(id)a0;
- (void)onPlayerSetup:(id)a0 frameUpdater:(id)a1 result:(id /* block */)a2;
- (void)handleMethodCall:(id)a0 result:(id /* block */)a1;
- (void).cxx_destruct;

@end
