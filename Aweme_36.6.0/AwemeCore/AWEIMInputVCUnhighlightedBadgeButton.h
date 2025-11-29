@class UIImageView, UIColor;

@interface AWEIMInputVCUnhighlightedBadgeButton : AWEIMInputVCBadgeButton

@property (retain, nonatomic) UIImageView *attachmentView;
@property (retain, nonatomic) UIColor *attachmentViewImageColor;

- (void)handleLongPress:(id)a0;
- (void)layoutSubviews;
- (void)showAttachmentView;
- (void)hideAttachmentView;
- (id)initWithAttachmentView:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;

@end
