@class UIImageView, UITextView, DUXAlertDialogTextLinkAction;

@interface DUXAlertDialogTextLinkActionView : UIView

@property (retain, nonatomic) UITextView *titleTextView;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UIImageView *prefixView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } linkHotAreaRect;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } linkTextRange;
@property (nonatomic) BOOL isArrowShow;
@property (retain, nonatomic) DUXAlertDialogTextLinkAction *model;

+ (id)actionWithModel:(id)a0;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getLinkTextRectInRange;
- (void)adaptLinkHotAreaRect;
- (id)getTitleFont;
- (void)setOverlongLineBreakMode;
- (void)setLinkedText;
- (void)updateTextLinkViewConstraints;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setup;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
