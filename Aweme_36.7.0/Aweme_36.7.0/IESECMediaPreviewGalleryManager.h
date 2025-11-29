@class NSMutableArray, NSMutableDictionary, NSMapTable;

@interface IESECMediaPreviewGalleryManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *serviceMap;
@property (retain, nonatomic) NSMapTable *weakTable;
@property (readonly, nonatomic) NSMutableArray *components;

- (id)stringFromClassOrProtocol:(id)a0;
- (id)implForProtocol:(id)a0;
- (void)registerService:(id)a0 forProtocol:(id)a1 weak:(BOOL)a2;
- (void)registerComponent:(id)a0;
- (void)registerComponentWithRequest:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
