@class WCFinderFeedContentVM, RichTextView, WCFinderJumpInfoIconView;

@interface WCFinderWarningJumpView : WCFinderJumpInfoView

@property (retain, nonatomic) WCFinderJumpInfoIconView *iconView;
@property (retain, nonatomic) RichTextView *textView;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentVM:(id)a1;
- (void)updateWithJumpInfo:(id)a0 style:(id)a1;
- (void)updateUIInfo;
- (void)layoutViewByPosition;
- (void)setMaxWidth:(double)a0 maxTextAreaWidth:(double)a1;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
