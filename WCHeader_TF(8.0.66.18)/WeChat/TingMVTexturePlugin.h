@class NSMutableDictionary, NSString, NSObject, TingMVTextureUpdateListenerApi;
@protocol FlutterTextureRegistry;

@interface TingMVTexturePlugin : NSObject <MMFlutterPlugin, TingMVTextureApi>

@property (readonly, nonatomic) NSObject<FlutterTextureRegistry> *registry;
@property (readonly, nonatomic) NSMutableDictionary *textureInfoMap;
@property (readonly, nonatomic) TingMVTextureUpdateListenerApi *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (void)disposeTaskId:(id)a0 listendId:(id)a1 error:(id *)a2;
- (id)getTextureTaskId:(id)a0 listendId:(id)a1 error:(id *)a2;
- (void).cxx_destruct;

@end
