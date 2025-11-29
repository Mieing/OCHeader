@class PuzzleContext;

@interface PuzzleHybridKitBuilder : NSObject

@property (retain, nonatomic) PuzzleContext *context;

- (id)lynxViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 URL:(id)a1 context:(id)a2;
- (id)puzzleWebViewWithURL:(id)a0 context:(id)a1 enableReuse:(BOOL)a2;
- (void)prepareEnvironment;
- (void)initializeForUse:(id)a0;
- (void)prepareForReUse:(id)a0;
- (id)puzzleWebViewWithURL:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
