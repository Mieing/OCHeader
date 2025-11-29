@interface AWESearchBarButton : UIButton

@property (copy, nonatomic) id /* block */ btnTouchBeganBlock;
@property (copy, nonatomic) id /* block */ btnTouchCancelBlock;

- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
