@class FlutterMethodChannel, NSString, NSObject, MMLiteAppView;
@protocol FlutterBinaryMessenger;

@interface MMLiteAppPlatformView : NSObject <FlutterPlatformView>

@property (retain, nonatomic) FlutterMethodChannel *channel;
@property (weak, nonatomic) NSObject<FlutterBinaryMessenger> *messenger;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) long long viewId;
@property (retain, nonatomic) id args;
@property (retain, nonatomic) MMLiteAppView *liteAppView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewIdentifier:(long long)a1 argument:(id)a2 messenger:(id)a3;
- (void)initLiteAppView;
- (id)view;
- (void)sendEvent:(id)a0 data:(id)a1;
- (void).cxx_destruct;

@end
