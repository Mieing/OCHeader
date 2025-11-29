@class NSArray;

@interface IESECPDPTransformAnimationView : IESECSliceXViewElementView

@property (retain, nonatomic) NSArray *config;

- (void)setupConfig:(id)a0;
- (BOOL)updateWithSliceXElement:(id)a0 error:(id *)a1;
- (void)animateIndex:(unsigned long long)a0;
- (void)animate;
- (void).cxx_destruct;

@end
