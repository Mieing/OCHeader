@interface AWERecommendEntryControlView : UIControl

@property (copy, nonatomic) id /* block */ clickBlock;
@property (nonatomic) BOOL allowClick;
@property (nonatomic) BOOL isNotFirstEnter;

- (void)handleClick;
- (void).cxx_destruct;
- (id)init;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
