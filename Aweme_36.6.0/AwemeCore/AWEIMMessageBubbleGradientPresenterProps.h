@class UIImage, NSDictionary;

@interface AWEIMMessageBubbleGradientPresenterProps : AWEIMUIViewPresenterProps

@property (nonatomic) BOOL isGradientBG;
@property (retain, nonatomic) UIImage *contents;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentRect;
@property (nonatomic) BOOL needResetImage;
@property (nonatomic) BOOL needSwitchImage;
@property (nonatomic) BOOL checkViewDiff;
@property (nonatomic) BOOL canShowNewBubble;
@property (retain, nonatomic) UIImage *bubbleImage;
@property (copy, nonatomic) NSDictionary *flexDict;

- (void).cxx_destruct;
- (id)init;

@end
