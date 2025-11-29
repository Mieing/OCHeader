@class AWEAntiAddictDailyAlertBubbleView;

@interface AWEAntiAddictDailyAlertSlider : UISlider

@property (retain, nonatomic) AWEAntiAddictDailyAlertBubbleView *bubbleView;
@property (nonatomic) long long bubbleGrade;

- (void)seekToGrade:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 trackRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 value:(float)a2;
- (void).cxx_destruct;

@end
