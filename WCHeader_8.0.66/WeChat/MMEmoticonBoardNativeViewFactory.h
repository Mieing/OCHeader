@class NSString, UIViewController, NSObject;
@protocol FlutterBinaryMessenger;

@interface MMEmoticonBoardNativeViewFactory : NSObject <FlutterPlatformViewFactory>

@property (weak, nonatomic) NSObject<FlutterBinaryMessenger> *messenger;
@property (weak, nonatomic) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)channelNameFromViewId:(long long)a0;

- (id)createWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewIdentifier:(long long)a1 arguments:(id)a2;
- (id)createArgsCodec;
- (void).cxx_destruct;

@end
