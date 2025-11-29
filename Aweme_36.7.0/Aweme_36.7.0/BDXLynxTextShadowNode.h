@class YYTextLayout, NSString;

@interface BDXLynxTextShadowNode : BDXLynxVarietyTextShadowNode <LynxMeasureDelegate>

@property (retain) YYTextLayout *layout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__892;
+ (id)__lynx_prop_config__963;

- (void)adoptNativeLayoutNode:(long long)a0;
- (void)layoutDidStart;
- (struct CGSize { double x0; double x1; })measureNode:(id)a0 withWidth:(double)a1 widthMode:(long long)a2 height:(double)a3 heightMode:(long long)a4;
- (id)getExtraBundle;
- (BOOL)needsEventSet;
- (void)layoutDidUpdate;
- (void)dispatchLayoutEventWithLayout:(id)a0 withTruncatedString:(id)a1;
- (void)richTextType:(id)a0 requestReset:(BOOL)a1;
- (void)textIndent:(id)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)hasCustomLayout;

@end
