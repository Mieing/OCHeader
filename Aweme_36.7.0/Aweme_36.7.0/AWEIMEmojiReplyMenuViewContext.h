@class UILongPressGestureRecognizer, NSArray, UIView;

@interface AWEIMEmojiReplyMenuViewContext : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bubbleViewFrame;
@property (nonatomic) struct CGPoint { double x; double y; } targetLocation;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (copy, nonatomic) NSArray *menuItemList;
@property (copy, nonatomic) NSArray *msgEmoticonList;
@property (retain, nonatomic) UIView *topView;
@property (nonatomic) BOOL isNormal;
@property (nonatomic) BOOL moreEmoticon;
@property (nonatomic) struct CGPoint { double x; double y; } highLocation;
@property (nonatomic) struct CGPoint { double x; double y; } lowLocation;
@property (nonatomic) BOOL tryHighLocationFirst;
@property (nonatomic) double maxContentHeight;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } bubbleSafeInsets;
@property (nonatomic) double baseViewFrameOriginY;
@property (nonatomic) BOOL isMenuAboveLocation;
@property (nonatomic) BOOL isInputBarUp;
@property (nonatomic) unsigned long long menuPanelOptions;
@property (nonatomic) BOOL hideEmoji;
@property (nonatomic) double multiEmojiSelectionWidth;
@property (nonatomic) double multiEmojiSelectionHeight;
@property (nonatomic) double menuItemsFrameSizeWidth;
@property (nonatomic) double menuItemsFrameSizeHeight;
@property (nonatomic) BOOL dontHaveEmojiReply;

- (void).cxx_destruct;

@end
