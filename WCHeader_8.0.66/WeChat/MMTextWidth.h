@interface MMTextWidth : NSObject

+ (void)setEnableFastPingFang:(BOOL)a0;
+ (BOOL)isEnableFastPingFang;
+ (void)setEnable:(BOOL)a0;
+ (void)setTextMeasureCallback:(void /* function */ *)a0;
+ (BOOL)isEnable;
+ (BOOL)isReady;
+ (BOOL)isAvailable;
+ (void)update;
+ (void)setup;
+ (void)willEnterForeground:(id)a0;
+ (void)didEnterBackground:(id)a0;
+ (void)localeDidChanged:(id)a0;
+ (void)fontDidChanged:(id)a0;
+ (void)reset;
+ (void)clear;
+ (void)setEnableEmojiGroupCandidate:(BOOL)a0;
+ (void)setChecksumCallback:(void /* function */ *)a0;
+ (long long)stringHashLimit;
+ (unsigned short *)tlsBuffer;
+ (struct CGSize { double x0; double x1; })boundingRectWithSize:(struct CGSize { double x0; double x1; })a0 attributes:(id)a1 string:(id)a2;
+ (struct CGSize { double x0; double x1; })sizeWithAttributes:(id)a0 string:(id)a1;
+ (BOOL)isFontValid:(struct __CTFont { } *)a0;

@end
