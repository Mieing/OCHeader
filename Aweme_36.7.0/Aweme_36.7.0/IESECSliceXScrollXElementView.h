@interface IESECSliceXScrollXElementView : IESECSliceXListElementView

@property (nonatomic) long long index;

- (void)scrollToIndex;
- (BOOL)updateWithSliceXElement:(id)a0 error:(id *)a1;
- (void)delayScrollToIndex;
- (id)initWithContext:(id)a0;
- (void)layoutSubviews;

@end
