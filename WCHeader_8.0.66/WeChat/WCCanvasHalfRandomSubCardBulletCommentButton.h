@class NSString, RichTextView, UIView;

@interface WCCanvasHalfRandomSubCardBulletCommentButton : WCHighLightButton

@property (retain, nonatomic) NSString *bulletComment;
@property (retain, nonatomic) RichTextView *bulletCommentView;
@property (retain, nonatomic) UIView *disabledCover;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 bulletComment:(id)a1;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)a0;
- (void).cxx_destruct;

@end
