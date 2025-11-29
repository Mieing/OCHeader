@class UIImageView, RichTextView;

@interface WCFinderJumpInfoLabel : WCFinderJumpInfoView

@property (nonatomic) double maxTextAreaWidth;
@property (nonatomic) double maxWidth;
@property (retain, nonatomic) RichTextView *textView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetFrame;

- (id)init;
- (void)updateWithJumpInfo:(id)a0 style:(id)a1;
- (void)changeToShow:(BOOL)a0;
- (void)setMaxWidth:(double)a0 maxTextAreaWidth:(double)a1;
- (void)prepareForAppearAnimationFromView:(id)a0;
- (void)changeToAppear:(BOOL)a0 duration:(double)a1;
- (void)completionForAppearAnimation;
- (void)updateUIInfo;
- (BOOL)isRightStyle;
- (void)addCornerRadiusIfNeeded;
- (void)layoutUI;
- (void)onActionButtonDidClick;
- (void).cxx_destruct;

@end
