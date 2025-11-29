@class NSString, NSMutableArray;
@protocol CJPayScrollLabelDelegate;

@interface CJPayScrollLabel : UIView

@property (copy, nonatomic) NSString *lastAmountText;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) NSMutableArray *allSingleScrollViews;
@property (nonatomic) BOOL isAscending;
@property (weak, nonatomic) id<CJPayScrollLabelDelegate> delegate;

- (id)initWithFontSize:(double)a0;
- (void)updateContentFontSize:(double)a0;
- (void)p_layoutSingleScrollLabelWithIndex:(long long)a0 allSingleScrollViewCount:(long long)a1 scrollLabel:(id)a2 preScrollLabel:(id)a3;
- (id)p_getFormattingAmountStringWithOriginalString:(id)a0;
- (id)p_getCharArrayWithNumberString:(id)a0;
- (void)p_updateSingleScrollLabelContent:(id)a0;
- (void)p_scrollAnimationToNumberStrings:(id)a0 animated:(BOOL)a1;
- (BOOL)p_isSymbolWithCurrentString:(id)a0;
- (BOOL)p_isApplyAmountPerformance;
- (long long)p_getFirstScrollIndex:(id)a0;
- (id)p_getAmountNumberWithNumberString:(id)a0;
- (id)p_getAmountStringWithNumberString:(id)a0;
- (void)updateAmountTextWith:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;

@end
