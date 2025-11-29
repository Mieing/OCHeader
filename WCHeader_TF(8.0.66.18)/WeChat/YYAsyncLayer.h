@class YYSentinel;

@interface YYAsyncLayer : CALayer {
    YYSentinel *_sentinel;
}

@property BOOL displaysAsynchronously;

+ (id)defaultValueForKey:(id)a0;

- (id)init;
- (void)dealloc;
- (void)setNeedsDisplay;
- (BOOL)isShowingOnKeyWindow;
- (void)display;
- (void)setContents:(id)a0;
- (void)clearContents;
- (void)_displayAsync:(BOOL)a0;
- (struct CGContext { } *)_newImageContextWithOptions:(struct CGSize { double x0; double x1; })a0 opaque:(BOOL)a1 scale:(double)a2;
- (void)_endImageContext:(struct CGContext { } *)a0;
- (void)_fillBackgroundColor:(struct CGColor { } *)a0 size:(struct CGSize { double x0; double x1; })a1 inContext:(struct CGContext { } *)a2;
- (void)_cancelAsyncDisplay;
- (void)_setLayerContents:(id)a0;
- (void).cxx_destruct;

@end
