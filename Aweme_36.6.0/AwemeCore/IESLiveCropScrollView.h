@interface IESLiveCropScrollView : UIScrollView

@property (copy, nonatomic) id /* block */ touchesBegan;
@property (copy, nonatomic) id /* block */ touchesEnded;

- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
