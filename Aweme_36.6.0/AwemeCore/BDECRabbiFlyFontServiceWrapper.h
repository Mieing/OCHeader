@protocol BDECRabbiFlyIFontService;

@interface BDECRabbiFlyFontServiceWrapper : NSObject <SLIBizFontService>

@property (retain, nonatomic) id<BDECRabbiFlyIFontService> fontService;

- (id)fontWithFontFamily:(id)a0 fontSize:(double)a1 fontWeight:(unsigned long long)a2;
- (id)initWithFontService:(id)a0;
- (void).cxx_destruct;

@end
