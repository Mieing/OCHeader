@protocol SLIBizFontService;

@interface IESECSliceXUIFont : NSObject

@property (weak, nonatomic) id<SLIBizFontService> bizFontService;
@property (readonly, nonatomic) double fontScaleRatio;
@property (nonatomic) BOOL disableCJKAutoKerning;

+ (id)rawFontOfSize:(double)a0 weightOfInt:(unsigned long long)a1;
+ (void)initialize;

- (id)fontOfSize:(double)a0 weightOfInt:(unsigned long long)a1;
- (id)initWithFontScaleRatio:(double)a0;
- (id)fontOfSize:(double)a0 weightOfInt:(unsigned long long)a1 fontFamily:(id)a2;
- (double)scaledFontSize:(double)a0;
- (void).cxx_destruct;

@end
