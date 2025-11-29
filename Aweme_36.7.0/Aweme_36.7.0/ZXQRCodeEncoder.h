@interface ZXQRCodeEncoder : NSObject

+ (id)chooseMode:(id)a0 encoding:(unsigned long long)a1;
+ (void)appendECI:(id)a0 bits:(id)a1;
+ (void)appendModeInfo:(id)a0 bits:(id)a1;
+ (BOOL)appendBytes:(id)a0 mode:(id)a1 bits:(id)a2 encoding:(unsigned long long)a3 error:(id *)a4;
+ (int)calculateBitsNeededForMode:(id)a0 headerBits:(id)a1 dataBits:(id)a2 version:(id)a3;
+ (BOOL)willFitIn:(int)a0 version:(id)a1 ecLevel:(id)a2;
+ (id)recommendVersionFor:(id)a0 mode:(id)a1 headerBits:(id)a2 dataBits:(id)a3 error:(id *)a4;
+ (BOOL)appendLengthInfo:(int)a0 version:(id)a1 mode:(id)a2 bits:(id)a3 error:(id *)a4;
+ (BOOL)terminateBits:(int)a0 bits:(id)a1 error:(id *)a2;
+ (id)interleaveWithECBytes:(id)a0 numTotalBytes:(int)a1 numDataBytes:(int)a2 numRSBlocks:(int)a3 error:(id *)a4;
+ (int)chooseMaskPattern:(id)a0 ecLevel:(id)a1 version:(id)a2 matrix:(id)a3 error:(id *)a4;
+ (id)chooseVersion:(int)a0 ecLevel:(id)a1 error:(id *)a2;
+ (BOOL)isOnlyDoubleByteKanji:(id)a0;
+ (int)alphanumericCode:(int)a0;
+ (int)calculateMaskPenalty:(id)a0;
+ (BOOL)numDataBytesAndNumECBytesForBlockID:(int)a0 numDataBytes:(int)a1 numRSBlocks:(int)a2 blockID:(int)a3 numDataBytesInBlock:(int *)a4 numECBytesInBlock:(int *)a5 error:(id *)a6;
+ (id)generateECBytes:(id)a0 numEcBytesInBlock:(int)a1;
+ (void)appendNumericBytes:(id)a0 bits:(id)a1;
+ (BOOL)appendAlphanumericBytes:(id)a0 bits:(id)a1 error:(id *)a2;
+ (void)append8BitBytes:(id)a0 bits:(id)a1 encoding:(unsigned long long)a2;
+ (BOOL)appendKanjiBytes:(id)a0 bits:(id)a1 error:(id *)a2;
+ (id)encode:(id)a0 ecLevel:(id)a1 error:(id *)a2;
+ (id)chooseMode:(id)a0;
+ (int)totalInputBytes:(int)a0 version:(id)a1 mode:(id)a2;
+ (id)encode:(id)a0 ecLevel:(id)a1 hints:(id)a2 error:(id *)a3;

@end
