@interface ACCRecordTapGestureRecognizer : UITapGestureRecognizer

@property (nonatomic) long long tapCounter;
@property (nonatomic) double intervalBetweenTaps;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)reset;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
