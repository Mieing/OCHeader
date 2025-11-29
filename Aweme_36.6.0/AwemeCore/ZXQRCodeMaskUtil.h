@interface ZXQRCodeMaskUtil : NSObject

+ (int)applyMaskPenaltyRule1Internal:(id)a0 isHorizontal:(BOOL)a1;
+ (BOOL)isWhiteHorizontal:(char *)a0 length:(int)a1 from:(int)a2 to:(int)a3;
+ (BOOL)isWhiteVertical:(char **)a0 length:(int)a1 col:(int)a2 from:(int)a3 to:(int)a4;
+ (int)applyMaskPenaltyRule1:(id)a0;
+ (int)applyMaskPenaltyRule2:(id)a0;
+ (int)applyMaskPenaltyRule3:(id)a0;
+ (int)applyMaskPenaltyRule4:(id)a0;
+ (BOOL)dataMaskBit:(int)a0 x:(int)a1 y:(int)a2;

@end
