@interface IESLivePublicScreenDisplayTextParser : NSObject

+ (id)parseDisplayText:(id)a0 config:(id)a1 commonParser:(id)a2;
+ (double)fontSizeWithPiece:(id)a0 defaultFormat:(id)a1 config:(id)a2;
+ (id)colorWithPiece:(id)a0 defaultFormat:(id)a1 config:(id)a2;
+ (id)fontWithPiece:(id)a0 defaultFormat:(id)a1 config:(id)a2;
+ (void)appendStringPieceTo:(id)a0 piece:(id)a1 config:(id)a2;
+ (void)appendUserPieceTo:(id)a0 piece:(id)a1 config:(id)a2;
+ (void)appendGiftPieceTo:(id)a0 piece:(id)a1 config:(id)a2;
+ (void)appendImagePieceTo:(id)a0 piece:(id)a1 config:(id)a2;
+ (void)appendPatternRefPieceTo:(id)a0 piece:(id)a1 config:(id)a2;

@end
