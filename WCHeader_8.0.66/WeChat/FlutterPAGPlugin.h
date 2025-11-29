@class NSString, NSMutableDictionary, NSObject;
@protocol FlutterBinaryMessenger, FlutterPluginRegistrar, FlutterTextureRegistry;

@interface FlutterPAGPlugin : NSObject <FlutterPlugin, PAGViewApi>

@property (readonly, nonatomic) NSObject<FlutterTextureRegistry> *registry;
@property (readonly, nonatomic) NSObject<FlutterPluginRegistrar> *registrar;
@property (readonly, nonatomic) NSObject<FlutterBinaryMessenger> *messenger;
@property (readonly) NSMutableDictionary *controllerMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setLogFunc:(id /* block */)a0;
+ (void)registerWithRegistry:(id)a0;
+ (void)registerWithRegistrar:(id)a0;

- (id)initWithRegistry:(id)a0 registrar:(id)a1 messenger:(id)a2;
- (void)dealloc;
- (void)createInfo:(id)a0 completion:(id /* block */)a1;
- (id)pagViewStartPlayPagId:(long long)a0 error:(id *)a1;
- (id)pagViewStopPagId:(long long)a0 error:(id *)a1;
- (void)pagViewReleasePagId:(long long)a0 error:(id *)a1;
- (id)replaceImagePagId:(long long)a0 index:(long long)a1 filepath:(id)a2 error:(id *)a3;
- (id)setSolidLayerColorPagId:(long long)a0 name:(id)a1 color:(long long)a2 error:(id *)a3;
- (id)flushPagId:(id)a0 error:(id *)a1;
- (void)flushPagId:(long long)a0 completion:(id /* block */)a1;
- (void)seekPagId:(long long)a0 timeMs:(long long)a1 error:(id *)a2;
- (id)replaceTextPagId:(long long)a0 index:(long long)a1 text:(id)a2 error:(id *)a3;
- (void).cxx_destruct;

@end
