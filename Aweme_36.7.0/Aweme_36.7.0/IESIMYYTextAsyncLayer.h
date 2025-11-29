@class _IESIMYYTextSentinel;

@interface IESIMYYTextAsyncLayer : CALayer {
    _IESIMYYTextSentinel *_sentinel;
}

@property BOOL displaysAsynchronously;

+ (id)defaultValueForKey:(id)a0;

- (void)_cancelAsyncDisplay;
- (void)_displayAsync:(BOOL)a0;
- (void).cxx_destruct;
- (void)display;
- (void)setNeedsDisplay;
- (id)init;
- (void)dealloc;

@end
