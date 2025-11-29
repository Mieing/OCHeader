@class NSObject, NSString, MMEmoticonBoardNativeViewFactory, UIViewController;
@protocol FlutterPluginRegistrar;

@interface MMEmoticonBoardPlugin : NSObject <MMFlutterPlugin>

@property (weak, nonatomic) UIViewController *attachedViewController;
@property (weak, nonatomic) NSObject<FlutterPluginRegistrar> *registrar;
@property (retain, nonatomic) MMEmoticonBoardNativeViewFactory *viewFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)plugin;

- (void)onAttachedToViewController:(id)a0;
- (void)onDetachedToViewController;
- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (void).cxx_destruct;

@end
