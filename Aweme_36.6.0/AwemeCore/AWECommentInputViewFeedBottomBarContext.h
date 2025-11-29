@class NSString;

@interface AWECommentInputViewFeedBottomBarContext : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialFrame;
@property (copy, nonatomic) id /* block */ rightOuterContentWidthInDetailBar;
@property (nonatomic) BOOL hasVideoActionViewInDetailBar;
@property (nonatomic) BOOL hideSendButtonWhenFoldInDetailBar;
@property (nonatomic) BOOL shouldNotBlockGesture;
@property (copy, nonatomic) NSString *cityInfoString;

- (void).cxx_destruct;

@end
