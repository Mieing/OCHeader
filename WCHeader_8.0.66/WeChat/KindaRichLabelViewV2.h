@class NSMutableArray, NSString, NSMutableAttributedString, MMVoidCallback, KindaUILabel, RichTextView, MMDynamicColor;
@protocol MMKText;

@interface KindaRichLabelViewV2 : KindaView <KindaUILabelDelegate, MMKRichLabelView, ILinkEventExt>

@property (retain, nonatomic) NSString *m_text;
@property (retain, nonatomic) id<MMKText> m_richText;
@property (retain, nonatomic) NSString *m_textFontName;
@property (retain, nonatomic) RichTextView *m_richTextView;
@property (retain, nonatomic) KindaUILabel *m_textView;
@property (nonatomic) int m_lines;
@property (nonatomic) float m_textSize;
@property (nonatomic) float m_lineSpacingFactor;
@property (retain, nonatomic) MMDynamicColor *m_textColor;
@property (nonatomic) long long m_ellipsize;
@property (nonatomic) long long m_textAlign;
@property (nonatomic) long long m_textViewAlign;
@property (nonatomic) unsigned int m_maxLength;
@property (nonatomic) long long fontStyle;
@property (retain, nonatomic) NSMutableArray *m_textFragmentArray;
@property (retain, nonatomic) NSString *m_finalText;
@property (retain, nonatomic) NSMutableAttributedString *m_attrStr;
@property (retain, nonatomic) MMVoidCallback *lastLinkCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)getView;
- (void)setAccessibilityString:(id)a0;
- (id)getFinalAttrString;
- (void)setLines:(int)a0;
- (int)getLines;
- (void)setLineSpacingFactor:(float)a0;
- (float)getLineSpacingFactor;
- (void)setText:(id)a0;
- (id)getText;
- (void)setRichText:(id)a0;
- (id)insertWordJoinerInContent:(id)a0;
- (void)insideReloadTextView;
- (id)getRichText;
- (void)setTextSize:(float)a0;
- (float)getTextSize;
- (void)setTextColor:(id)a0;
- (id)getTextColor;
- (void)setTextFont:(id)a0;
- (id)getTextFont;
- (void)setEllipsize:(long long)a0;
- (long long)getEllipsize;
- (long long)lineBreakMode;
- (void)setTextAlign:(long long)a0;
- (long long)getTextAlign;
- (void)setMaxLength:(int)a0;
- (int)getMaxLength;
- (void)setAdjustsFontSizeToFitWidth:(BOOL)a0;
- (BOOL)getAdjustsFontSizeToFitWidth;
- (void)setBaselineAdjustment:(long long)a0;
- (long long)getBaselineAdjustment;
- (long long)getFontStyle;
- (void)reloadFontStyle;
- (void)didclickCharacterInLocation:(long long)a0;
- (id)linkRanges;
- (id)linkBkgItems;
- (id)fontWithStyle:(long long)a0 size:(double)a1;
- (void).cxx_destruct;

@end
