@interface IESLiveDanmakuDisplayTextParser : NSObject

+ (id)parseGiftDanmukuMessage:(id)a0 roomModel:(id)a1 comboText:(id)a2 fontSizeSetting:(id)a3 diContext:(id)a4;
+ (id)shared;

- (id)parseGiftDanmukuMessage:(id)a0 roomModel:(id)a1 comboText:(id)a2 fontSizeSetting:(id)a3 diContext:(id)a4;
- (double)baselineOffsetBetweenBiggerFont:(id)a0 smallerFont:(id)a1;

@end
