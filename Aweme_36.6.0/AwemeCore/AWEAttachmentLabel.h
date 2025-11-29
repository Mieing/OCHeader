@class UIColor, UIFont, NSString, NSMutableAttributedString;

@interface AWEAttachmentLabel : YYLabel

@property (retain, nonatomic) UIFont *fontForSingleLine;
@property (retain, nonatomic) UIFont *fontForMultipleLines;
@property (nonatomic) BOOL isSingleLine;
@property (nonatomic) BOOL isAttachmentInNewLine;
@property (nonatomic) BOOL isEnableMusicDetailOPT;
@property (retain, nonatomic) NSMutableAttributedString *attachment;
@property (retain, nonatomic) NSMutableAttributedString *beginAttachment;
@property (retain, nonatomic) UIColor *titleTextColor;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) double preferredMaxLayoutWidthForMultipleLines;
@property (retain, nonatomic) NSMutableAttributedString *mutableAttributedString;

- (BOOL)isMusicDetailOptEnable;
- (void)p_adjustFont;
- (void)resetAttachment;
- (void)updateLayout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRect;
- (void).cxx_destruct;
- (id)init;
- (void)p_setDefaultValues;

@end
