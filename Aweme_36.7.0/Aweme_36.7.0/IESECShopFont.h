@interface IESECShopFont : NSObject

@property (nonatomic) double fontScaleRatio;

+ (double)currentFontScale;
+ (id)fontOfSize:(double)a0 weight:(double)a1;
+ (id)douyinNumberABCFontOfSize:(double)a0 weight:(long long)a1;
+ (id)douyinNumberABCFontOfSize:(double)a0;
+ (double)enlargeSize:(double)a0;
+ (struct CGSize { double x0; double x1; })sizeWithSize:(struct CGSize { double x0; double x1; })a0;
+ (id)fontOfSize:(double)a0 weightOfInt:(unsigned long long)a1;
+ (id)douyinSansFontOfSize:(double)a0;
+ (double)shopCustomFontScale;
+ (BOOL)shopCustomBigFontModeOn;
+ (id)fontWithName:(id)a0 size:(double)a1;
+ (id)fontOfSize:(double)a0;

- (id)fontOfSize:(double)a0 weight:(double)a1;
- (id)douyinNumberABCFontOfSize:(double)a0;
- (double)enlargeSize:(double)a0;
- (struct CGSize { double x0; double x1; })sizeWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)fontOfSize:(double)a0 weightOfInt:(unsigned long long)a1;
- (id)douyinSansFontOfSize:(double)a0;
- (id)fontOfSize:(double)a0;

@end
