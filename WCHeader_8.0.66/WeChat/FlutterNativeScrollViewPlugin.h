@class FlutterNativeScrollView, NSString, UIView, FlutterMethodChannel;

@interface FlutterNativeScrollViewPlugin : NSObject <MMFlutterPlugin>

@property (retain, nonatomic) FlutterMethodChannel *channel;
@property (retain, nonatomic) FlutterNativeScrollView *nativeScrollView;
@property (retain, nonatomic) UIView *flutterView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAttachedToEngine:(id)a0;
- (id)getScrollView;
- (void)onAttachedToViewController:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (void)onDetachedToViewController;
- (void)attachNativeScrollView:(id)a0;
- (void)didScroll:(id)a0;
- (void).cxx_destruct;

@end
