@class UIColor, NSMutableDictionary, NSAttributedString, NSString, BDXLynxTextLayoutModel, NSMutableArray, NSMutableAttributedString;
@protocol BDXRichTextFormater;

@interface BDXLynxRichTextStyle : MTLModel

@property (retain, nonatomic) NSMutableArray *attributeTexts;
@property (retain, nonatomic) NSMutableAttributedString *ultimateAttributedString;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) NSMutableDictionary *defaultAttributes;
@property (nonatomic) unsigned long long numberOfLines;
@property (nonatomic) long long truncatingMode;
@property (retain, nonatomic) id<BDXRichTextFormater> richTextFormater;
@property (retain, nonatomic) NSAttributedString *truncationAttributeString;
@property (nonatomic) double fontSize;
@property (nonatomic) double fontWeight;
@property (nonatomic) unsigned long long fontStyle;
@property (retain, nonatomic) NSString *fontFamily;
@property (nonatomic) BOOL enableTextLanguageAlignment;
@property (nonatomic) double textStrokeWidth;
@property (retain, nonatomic) UIColor *textStrokeColor;
@property (retain, nonatomic) BDXLynxTextLayoutModel *textModel;

- (void)updateTextStyle:(id)a0;
- (void)setNoTrim:(BOOL)a0;
- (void)clearAttributeText;
- (void)appendAttributeText:(id)a0;
- (BOOL)noTrim;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)setFont:(id)a0;
- (id)backgroundColor;
- (id)init;
- (void)setTextColor:(id)a0;
- (id)font;
- (id)paragraphStyle;
- (id)textColor;
- (void)setParagraphStyle:(id)a0;
- (id)textShadow;
- (double)letterSpacing;
- (void)setLetterSpacing:(double)a0;
- (unsigned long long)textDecoration;
- (void)setTextDecoration:(unsigned long long)a0;
- (void)setTextShadow:(id)a0;

@end
