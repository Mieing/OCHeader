@interface AWEAdSimilarRecommendMaskBackView : UIView

@property (copy, nonatomic) id /* block */ tapCallback;
@property (nonatomic) BOOL hasTrack;
@property (nonatomic) BOOL imageLoadFinished;

- (void)viewTap:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
