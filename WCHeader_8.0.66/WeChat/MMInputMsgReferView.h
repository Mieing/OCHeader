@class UIView, NSString, UIImage, UITapGestureRecognizer, MMReferPartialInfo, UIImageView, MMMsgReferPartBlurView, MMMsgReferStateGesture, RichTextView, UIVisualEffectView, MMUIButton, UIColor;
@protocol MMInputMsgReferDelegate;

@interface MMInputMsgReferView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) UIImage *thumbImage;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *highlightView;
@property (retain, nonatomic) UIVisualEffectView *visionBgView;
@property (retain, nonatomic) UITapGestureRecognizer *iconTapGesture;
@property (retain, nonatomic) MMMsgReferStateGesture *stateGesture;
@property (retain, nonatomic) MMMsgReferPartBlurView *frontBlurView;
@property (retain, nonatomic) MMMsgReferPartBlurView *behindBlurView;
@property (weak, nonatomic) id<MMInputMsgReferDelegate> delegate;
@property (readonly, nonatomic) RichTextView *richTextView;
@property (readonly, nonatomic) MMUIButton *icon;
@property (retain, nonatomic) UIImageView *thumbImageView;
@property (nonatomic) BOOL isCleanable;
@property (nonatomic) BOOL isJumpable;
@property (nonatomic) BOOL canShowThumbImage;
@property (nonatomic) BOOL isTextSelectReply;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } containerInset;
@property (nonatomic) double maxWidth;
@property (nonatomic) double containerCornerRadius;
@property (retain, nonatomic) UIColor *containerBackgroundColor;
@property (nonatomic) BOOL forbidInteraction;
@property (nonatomic) BOOL useCustomBackgroundView;
@property (retain, nonatomic) MMReferPartialInfo *replyingPartialInfo;
@property (retain, nonatomic) UIColor *referTextBlurColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeForContent:(id)a0 maxWidth:(double)a1 parseType:(long long)a2 cleanable:(BOOL)a3 inset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a4 outArrStyles:(id *)a5 hasImage:(BOOL)a6 referPartialInfo:(id)a7;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViews;
- (void)onStateChanged:(id)a0;
- (void)onTouchEffect;
- (void)onTouchRemoveEffect;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)updateReplyingText:(id)a0;
- (void)onTapIcon:(id)a0;
- (void)doLayout;
- (void)updateWithSize:(struct CGSize { double x0; double x1; })a0 arrStyles:(id)a1;
- (void)layoutHighlightView;
- (void)updateRichTextPartReferMaskLayer;
- (void)updatePartReferBlurView;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;

@end
