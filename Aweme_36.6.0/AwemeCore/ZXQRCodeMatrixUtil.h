@interface ZXQRCodeMatrixUtil : NSObject

+ (void)clearMatrix:(id)a0;
+ (BOOL)embedBasicPatterns:(id)a0 matrix:(id)a1 error:(id *)a2;
+ (BOOL)embedTypeInfo:(id)a0 maskPattern:(int)a1 matrix:(id)a2 error:(id *)a3;
+ (BOOL)maybeEmbedVersionInfo:(id)a0 matrix:(id)a1 error:(id *)a2;
+ (BOOL)embedDataBits:(id)a0 maskPattern:(int)a1 matrix:(id)a2 error:(id *)a3;
+ (BOOL)embedPositionDetectionPatternsAndSeparators:(id)a0;
+ (BOOL)embedDarkDotAtLeftBottomCorner:(id)a0;
+ (void)maybeEmbedPositionAdjustmentPatterns:(id)a0 matrix:(id)a1;
+ (void)embedTimingPatterns:(id)a0;
+ (BOOL)makeTypeInfoBits:(id)a0 maskPattern:(int)a1 bits:(id)a2 error:(id *)a3;
+ (BOOL)makeVersionInfoBits:(id)a0 bits:(id)a1 error:(id *)a2;
+ (int)findMSBSet:(int)a0;
+ (int)calculateBCHCode:(int)a0 poly:(int)a1;
+ (void)embedPositionDetectionPattern:(int)a0 yStart:(int)a1 matrix:(id)a2;
+ (BOOL)embedHorizontalSeparationPattern:(int)a0 yStart:(int)a1 matrix:(id)a2;
+ (BOOL)embedVerticalSeparationPattern:(int)a0 yStart:(int)a1 matrix:(id)a2;
+ (void)embedPositionAdjustmentPattern:(int)a0 yStart:(int)a1 matrix:(id)a2;
+ (BOOL)buildMatrix:(id)a0 ecLevel:(id)a1 version:(id)a2 maskPattern:(int)a3 matrix:(id)a4 error:(id *)a5;
+ (BOOL)isEmpty:(int)a0;

@end
