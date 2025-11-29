@interface AWEImageGearManager : NSObject

+ (id)getWebImageExceptedSizeWithType:(unsigned long long)a0;
+ (struct CGSize { double x0; double x1; })imageExceptedCGSizeWithType:(unsigned long long)a0 baseWidth:(unsigned long long)a1;
+ (struct CGSize { double x0; double x1; })getWebImageSizeWithType:(unsigned long long)a0;
+ (id)getWebImageExceptedSizeWithType:(unsigned long long)a0 baseWidth:(unsigned long long)a1;
+ (id)getWebImageExceptedSizeWithType:(unsigned long long)a0 byBizTag:(id)a1;
+ (double)getBaseWidth:(unsigned long long)a0;
+ (struct CGSize { double x0; double x1; })getWebImageSizeWithType:(unsigned long long)a0 baseWidth:(double)a1;

@end
