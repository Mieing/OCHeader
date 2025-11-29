@class UIColor, NSString, NSDictionary, AWESearchCardParagraphTextModel, YYTextLayout, NSMutableAttributedString, NSMutableArray;

@interface AWESearchCardParagraphComponentModel : NSObject

@property (retain, nonatomic) NSMutableAttributedString *displayDescription;
@property (nonatomic) double contentFontSize;
@property (nonatomic) double hashtagFontSize;
@property (nonatomic) double nicknameFontSize;
@property (nonatomic) double imageFontSize;
@property (nonatomic) double searchwordFontSize;
@property (nonatomic) double FontSize;
@property (nonatomic) double paragraphSpace;
@property (nonatomic) double lineSpace;
@property (nonatomic) double lineHeight;
@property (retain, nonatomic) NSMutableArray *underLineHighlightRangeArray;
@property (retain, nonatomic) AWESearchCardParagraphTextModel *paragraphText;
@property (nonatomic) long long lineCount;
@property (nonatomic) long long prefixLineCount;
@property (retain, nonatomic) NSString *position;
@property (nonatomic) BOOL shouldShowSearchWord;
@property (nonatomic) BOOL shouldShowUnderLineHighlight;
@property (retain, nonatomic) NSDictionary *logData;
@property (nonatomic) long long awemeType;
@property (retain, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSString *userID;
@property (retain, nonatomic) NSString *wordsSource;
@property (retain, nonatomic) NSString *referString;
@property (nonatomic) BOOL isTruncateTitleArea;
@property (nonatomic) BOOL isFormattingTitleArea;
@property (nonatomic) BOOL isReplaceBlankSpaceOrTruncationTrigger;
@property (retain, nonatomic) UIColor *nicknameHighlightColor;
@property (copy, nonatomic) id /* block */ tapParagraphBlock;
@property (copy, nonatomic) id /* block */ tapNickNameBlock;
@property (copy, nonatomic) id /* block */ tapHashtagBlock;
@property (copy, nonatomic) id /* block */ tapSearchWordBlock;
@property (copy, nonatomic) id /* block */ tapParagraphSuffix;
@property (copy, nonatomic) id /* block */ tapParagraphPrefix;
@property (retain, nonatomic) YYTextLayout *descriptionLayout;
@property (readonly, nonatomic) UIColor *contentColor;
@property (readonly, nonatomic) UIColor *highlightColor;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })transferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (BOOL)showPoint;
- (BOOL)isAttributedStringTruncated;
- (void)addUnderLine;
- (void)configAttributedStringWithWidth:(double)a0;
- (id)paragraphComponentStyle;
- (BOOL)enableGeneralSearchTextInfoGovern;
- (id)getTextLayoutWith:(id)a0 textFontSize:(double)a1 width:(double)a2 maxLines:(long long)a3;
- (void)udpateAbstractRangeArrayPrefixLength:(long long)a0 maxLength:(long long)a1 text:(id)a2;
- (void)addEmotionIconForAttrCommentContent:(id)a0;
- (void)drawSuffixForSearchTextContent:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 extra:(id)a2;
- (void)configAttributedStringWithWidth:(double)a0 leftMargin:(double)a1 rightMargin:(double)a2;
- (id)getAttributedString:(id)a0 containerWidth:(double)a1 leftMargin:(double)a2 rightMargin:(double)a3 paragraphStyle:(id)a4;
- (void)nickNameWithParagraphModel:(id)a0 textExtra:(id)a1 transferredRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 paragraphAttributedString:(id)a3 mapperArray:(id)a4;
- (void)hashtagWithParagraphModel:(id)a0 textExtra:(id)a1 transferredRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 paragraphAttributedString:(id)a3 mapperArray:(id)a4;
- (void)searchWordWithParagraphModel:(id)a0 textExtra:(id)a1 transferredRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 paragraphAttributedString:(id)a3 mapperArray:(id)a4;
- (id)tagLabelViewWithType:(long long)a0;
- (void)prefixClickWith:(id)a0;
- (id)prefixLayoutWith:(id)a0 attributes:(id)a1 width:(double)a2;
- (id)generateVideoSectionAbatrctText:(id)a0 Attributes:(id)a1 authorName:(id)a2 width:(double)a3;
- (unsigned long long)qualifiedLineNumberFromTextLayout:(id)a0;
- (id)contentUnderLineTextIfNeed:(id)a0 textExtra:(id)a1 extraLength:(long long)a2 attributes:(id)a3;
- (void).cxx_destruct;
- (id)init;

@end
