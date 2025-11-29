@interface BDReaderUtil : NSObject

+ (BOOL)isEmtpyChar:(unsigned short)a0;
+ (id)stringByReplaceEmptyReturnWithString:(id)a0;
+ (id)stringByReplaceFirstLastEmptyString:(id)a0;
+ (id)stringByRemovingEmptyImgStrWithString:(id)a0;
+ (double)safeAreaLeft;
+ (double)safeAreaRight;
+ (id)formatAbstractString:(id)a0;
+ (double)safeAreaBottom;
+ (id)getPodBundle;
+ (BOOL)hasInsets;
+ (double)adjustWidth375:(double)a0;
+ (double)adjustHeight667:(double)a0;
+ (double)safeAreaTop;

@end
