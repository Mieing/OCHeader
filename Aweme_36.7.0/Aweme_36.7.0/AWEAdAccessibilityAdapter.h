@interface AWEAdAccessibilityAdapter : NSObject <AWEAdAccessibilityAdapterProtocol>

@property (nonatomic, readonly) double currentScale;

- (double)getLongPressPanelAdaptedFontSizeWithOriginSize:(double)a0;
- (id)getAdaptedFontOfSize:(double)a0;
- (id)getAdaptedFontOfSize:(double)a0 weight:(double)a1;
- (id)init;

@end
