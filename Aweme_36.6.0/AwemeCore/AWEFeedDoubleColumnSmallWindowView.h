@protocol AWEFeedDoubleColumnSmallWindowViewDelegate;

@interface AWEFeedDoubleColumnSmallWindowView : UIView

@property (weak, nonatomic) id<AWEFeedDoubleColumnSmallWindowViewDelegate> delegate;
@property (nonatomic) BOOL isMaskView;

- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
