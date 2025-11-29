@class UIButton, NSAttributedString;

@interface AWETeenFoldingLabel : YYLabel

@property (copy, nonatomic) NSAttributedString *originString;
@property (retain, nonatomic) UIButton *unfoldButton;
@property (retain, nonatomic) UIButton *foldButton;
@property (nonatomic) struct CGSize { double width; double height; } layoutSize;
@property (nonatomic) double lineHeight;
@property (nonatomic) unsigned long long maxFoldLines;
@property (nonatomic) BOOL foldButtonWrap;
@property (copy, nonatomic) id /* block */ didClickTail;

- (void)p_formatAttributedString:(id)a0;
- (struct CGSize { double x0; double x1; })p_lastLineSizeForAttributeString:(id)a0 constraintSize:(struct CGSize { double x0; double x1; })a1;
- (void)p_unfoldIfNeeded;
- (void)p_foldIfNeeded;
- (void)clickUnfoldButton;
- (void)clickFoldButton;
- (void).cxx_destruct;
- (void)setPreferredMaxLayoutWidth:(double)a0;
- (void)setText:(id)a0;
- (id)init;
- (id)text;
- (void)setAttributedText:(id)a0;
- (void)setNumberOfLines:(unsigned long long)a0;
- (id)attributedText;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
