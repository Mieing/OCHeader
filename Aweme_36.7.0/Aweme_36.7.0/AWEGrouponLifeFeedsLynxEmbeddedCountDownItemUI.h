@class NSString, LynxTextRenderer;

@interface AWEGrouponLifeFeedsLynxEmbeddedCountDownItemUI : LynxUI

@property (retain, nonatomic) LynxTextRenderer *textRenderer;
@property (copy, nonatomic) NSString *countDownDisplay;

+ (id)__lynx_prop_config__460;

- (void)onReceiveUIOperation:(id)a0;
- (void)onNodeReady;
- (void)setCountDownDisplay:(id)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (void)setText:(id)a0;
- (id)createView;

@end
