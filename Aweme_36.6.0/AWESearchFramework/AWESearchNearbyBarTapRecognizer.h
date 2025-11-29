@class UIButton;

@interface AWESearchNearbyBarTapRecognizer : UITapGestureRecognizer

@property (weak, nonatomic) UIButton *searchButton;
@property (copy, nonatomic) id /* block */ touchesBeganBlock;
@property (copy, nonatomic) id /* block */ touchesEndBlock;
@property (copy, nonatomic) id /* block */ touchesMoveBlock;
@property (copy, nonatomic) id /* block */ touchesCancelBlock;

- (unsigned long long)getTouchArea:(id)a0;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
