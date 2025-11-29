@class NSObject;
@protocol FlutterBinaryMessenger;

@interface WxaLiteAppWidgetFlutterPluginApi : NSObject

@property (retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger;

- (id)initWithBinaryMessenger:(id)a0;
- (void)navigateBackMessage:(id)a0 completion:(id /* block */)a1;
- (void)updatePopGestureEnableMessage:(id)a0 completion:(id /* block */)a1;
- (void)setForbidRightGestureEnableMessage:(id)a0 completion:(id /* block */)a1;
- (void)tapEventMessage:(id)a0 completion:(id /* block */)a1;
- (void)closeWindowMessage:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
