@class NSString, BDECRabbiFlyFontServiceWrapper, BDECRabbiFlyDynamicSupervisor;

@interface BDECRabbiFlySliceXDiff : NSObject

@property (copy, nonatomic) NSString *biz;
@property (weak, nonatomic) BDECRabbiFlyDynamicSupervisor *supervisor;
@property (retain, nonatomic) BDECRabbiFlyFontServiceWrapper *fontServiceWrapper;

- (id)initWithBiz:(id)a0 supervisor:(id)a1;
- (id)customFontConfigKey:(id)a0;
- (id)customFontConfigValue:(id)a0;
- (void)preloadWithSliceXInstance:(id)a0 preloadList:(id)a1;
- (void)setupFontService;
- (void).cxx_destruct;

@end
