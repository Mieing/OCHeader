@class UIColor, UIFont, NSValue, NSMutableAttributedString;

@interface SLITextElementViewTailManager : NSObject

@property (retain, nonatomic) NSMutableAttributedString *textAttrString;
@property (retain, nonatomic) NSMutableAttributedString *tailAttrString;
@property (nonatomic) struct { unsigned long long maxLine; double lineHeight; long long alignment; UIFont *font; UIColor *textColor; BOOL isItalic; NSValue *italicTransformValue; } defaultStyle;
@property (nonatomic) BOOL isInfoChanged;
@property (retain, nonatomic) NSMutableAttributedString *initialTextAttrString;
@property (nonatomic) struct SLITextElementViewTailRangeInfo { BOOL isShowTail; long long ellipsisStartIndex; long long tailStartIndex; } initialTextRangeInfo;
@property (nonatomic) unsigned long long previousHeightFactor;
@property (nonatomic) struct CGSize { double width; double height; } previousFitSize;
@property (nonatomic) struct CGSize { double width; double height; } previousResultSize;
@property (nonatomic) unsigned long long previousResultLine;
@property (retain, nonatomic) NSMutableAttributedString *previousResultAttrString;
@property (nonatomic) struct SLITextElementViewTailRangeInfo { BOOL isShowTail; long long ellipsisStartIndex; long long tailStartIndex; } previousResultRangeInfo;
@property (nonatomic) unsigned long long tailMode;

+ (unsigned long long)tailModeEnumWithString:(id)a0;

- (id)updateTextString:(id)a0 tailString:(id)a1 rangeInfo:(struct SLITextElementViewTailRangeInfo { BOOL x0; long long x1; long long x2; } *)a2;
- (id)createTruncatedStringWithSize:(struct CGSize { double x0; double x1; })a0 rangeInfo:(struct SLITextElementViewTailRangeInfo { BOOL x0; long long x1; long long x2; } *)a1;
- (id)createInitialTextWithRangeInfo:(struct SLITextElementViewTailRangeInfo { BOOL x0; long long x1; long long x2; } *)a0;
- (id)totalTextAttributes;
- (id)ellipsisTextAttributes;
- (void)updateDefaultStyle:(struct { unsigned long long x0; double x1; long long x2; id x3; id x4; BOOL x5; id x6; })a0;
- (void).cxx_destruct;
- (id)init;

@end
