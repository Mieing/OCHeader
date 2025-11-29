@class NSArray;

@interface AWERateSlider : UIControl

@property (retain, nonatomic) NSArray *stars;
@property (nonatomic) long long value;

- (void)updateValueForTouch:(id)a0;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)init;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)setupUI;

@end
