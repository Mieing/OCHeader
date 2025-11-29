@class NSString, NSObject;
@protocol FlutterBinaryMessenger;

@interface MagicBrushResponse : NSObject

@property (retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger;
@property (retain, nonatomic) NSString *messageChannelSuffix;

- (id)initWithBinaryMessenger:(id)a0;
- (id)initWithBinaryMessenger:(id)a0 messageChannelSuffix:(id)a1;
- (void)onSubViewCreatedViewGroupId:(id)a0 viewId:(id)a1 completion:(id /* block */)a2;
- (void)onViewStyleChangedViewId:(id)a0 x:(long long)a1 y:(long long)a2 width:(long long)a3 height:(long long)a4 completion:(id /* block */)a5;
- (void)onViewTextureReadyViewId:(id)a0 textureId:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
