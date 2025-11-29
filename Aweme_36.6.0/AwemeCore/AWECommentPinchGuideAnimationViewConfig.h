@class UIColor, NSString;

@interface AWECommentPinchGuideAnimationViewConfig : NSObject

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } layoutInset;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) double lottieViewSize;
@property (nonatomic) double lottieToHintInset;
@property (copy, nonatomic) NSString *hintLabelText;
@property (nonatomic) double hintLabelFontSize;

- (void).cxx_destruct;
- (id)init;

@end
