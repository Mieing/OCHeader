@class _YYTextSentinel;

@interface YYTextAsyncLayer : CALayer {
    _YYTextSentinel *_sentinel;
}

@property BOOL displaysAsynchronously;

+ (id)defaultValueForKey:(id)a0;

- (id)init;
- (void)dealloc;
- (void)setNeedsDisplay;
- (void)display;
- (void)_displayAsync:(BOOL)a0;
- (void)_cancelAsyncDisplay;
- (void).cxx_destruct;

@end
