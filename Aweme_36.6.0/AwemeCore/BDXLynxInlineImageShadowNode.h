@class NSURL;

@interface BDXLynxInlineImageShadowNode : BDXLynxAbstractTextShadowNode

@property (nonatomic) BOOL isLoadingResource;
@property (retain, nonatomic) NSURL *src;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__321;

- (void)src:(id)a0 requestReset:(BOOL)a1;
- (BOOL)needsEventSet;
- (id)inlineAttributeString;
- (void)setMarginOnText:(id)a0 margin:(double)a1 index:(unsigned long long)a2;
- (void).cxx_destruct;
- (BOOL)isVirtual;

@end
