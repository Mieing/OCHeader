@class UIViewController, FlutterMethodChannel;

@interface MMEmoticonBoardNativeViewContext : NSObject

@property (weak, nonatomic) UIViewController *viewController;
@property (nonatomic) long long viewId;
@property (retain, nonatomic) FlutterMethodChannel *channel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;

- (id)description;
- (void).cxx_destruct;

@end
