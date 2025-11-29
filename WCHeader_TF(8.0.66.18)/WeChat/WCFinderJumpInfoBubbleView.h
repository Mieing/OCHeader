@class UIImageView, MMWebImageView, RichTextView, UILabel;

@interface WCFinderJumpInfoBubbleView : WCFinderJumpInfoView

@property (nonatomic) unsigned long long currentUIStyle;
@property (nonatomic) double maxTextAreaWidth;
@property (nonatomic) double maxWidth;
@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) RichTextView *textView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UILabel *adLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (nonatomic) double leftMargin;

- (id)init;
- (void)updateWithJumpInfo:(id)a0 style:(id)a1;
- (void)_setupSubtitleLabel:(id)a0;
- (void)setMaxWidth:(double)a0 maxTextAreaWidth:(double)a1;
- (void)setUIStyle:(unsigned long long)a0;
- (void)updateUIInfo;
- (BOOL)isRightStyle;
- (void)addCornerRadiusIfNeeded;
- (id)getIconUrl;
- (void)addShape:(id)a0;
- (void)layoutUI;
- (void)onActionButtonDidClick;
- (void).cxx_destruct;

@end
