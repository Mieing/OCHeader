@interface BDASLayer : CALayer {
    _Atomic unsigned int _displaySentinel;
}

@property (nonatomic) BOOL displaysAsynchronously;

+ (id)defaultValueForKey:(id)a0;

- (void)cancelAsyncDisplay;
- (unsigned int)displaySentinel;
- (void)setNeedsDisplay;

@end
