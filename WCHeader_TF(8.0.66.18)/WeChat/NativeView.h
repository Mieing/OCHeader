@class NSString, FlutterMethodChannel, UIView;

@interface NativeView : NSObject <FlutterPlatformView> {
    UIView *_view;
    FlutterMethodChannel *_channel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
