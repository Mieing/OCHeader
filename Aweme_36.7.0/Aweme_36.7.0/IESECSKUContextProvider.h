@interface IESECSKUContextProvider : NSObject

+ (id)ultimateBuyInputParamsFromShowRequest:(id)a0;
+ (BOOL)isYataSKUContext:(id)a0;
+ (id)skuContextFromShowRequest:(id)a0;
+ (BOOL)isBuyNowSKUContext:(id)a0;
+ (void)assembleParamsFromRequest:(id)a0 toContext:(id)a1;
+ (void)optHeightPercentWithContext:(id)a0;

@end
