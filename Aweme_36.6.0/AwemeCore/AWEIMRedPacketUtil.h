@interface AWEIMRedPacketUtil : NSObject

+ (id)douyinNumberFontWithSize:(double)a0;
+ (id)douyinNumberFontWithSize:(double)a0 autoScale:(BOOL)a1;
+ (BOOL)isLowerDevice;
+ (id)preprocessRPTitleWithPrefix:(id)a0 suffix:(id)a1 font:(id)a2 width:(double)a3 height:(double)a4;
+ (long long)redPacketUserTypeWithMessage:(id)a0;
+ (long long)redPacketUserTypeWithInfo:(id)a0 isSendFromMe:(BOOL)a1;
+ (long long)getAmountCentFromStr:(id)a0;
+ (void)gaussianBlurImage:(id)a0 radius:(double)a1 completion:(id /* block */)a2;
+ (id)getGeckoImageNameFromCoverId:(id)a0 imageName:(id)a1;
+ (double)getTextHeightWithFont:(id)a0 color:(id)a1 width:(double)a2 textContent:(id)a3;
+ (BOOL)isDeductOpen;
+ (BOOL)isRewardOpen;
+ (BOOL)isVideoRpContainerOptimize;

@end
