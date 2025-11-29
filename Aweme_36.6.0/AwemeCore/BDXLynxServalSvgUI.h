@class SrSVG;

@interface BDXLynxServalSvgUI : BDXLynxBaseSvgUI

@property (nonatomic) BOOL enableServalSvg;
@property (retain, nonatomic) SrSVG *srSvg;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__451;

- (id)processSvgData:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (void)setEnableServalSvg:(BOOL)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)createView;

@end
