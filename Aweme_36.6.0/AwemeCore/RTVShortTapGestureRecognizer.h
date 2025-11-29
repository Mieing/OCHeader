@interface RTVShortTapGestureRecognizer : UITapGestureRecognizer

@property (nonatomic) double maxDelay;

- (id)init;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
