@interface CTFrameWrap : NSObject

@property (nonatomic) struct __CTFrame { } *frameRef;
@property (nonatomic) struct CGSize { double width; double height; } frameSize;

- (id)initWithFrameRef:(struct __CTFrame { } *)a0;
- (void)dealloc;

@end
