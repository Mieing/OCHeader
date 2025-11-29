@class NSString, UIView;

@interface AWEUserLoginPreFillPhoneBubbleModel : NSObject

@property (copy, nonatomic) NSString *bubbleText;
@property (nonatomic) long long countDown;
@property (retain, nonatomic) UIView *targetView;
@property (nonatomic) unsigned long long bubbleStyle;
@property (nonatomic) struct CGPoint { double x; double y; } targetPoint;

- (id)initWithBubbleText:(id)a0 countDown:(long long)a1 targetView:(id)a2 bubbleStyle:(unsigned long long)a3 targetPoint:(struct CGPoint { double x0; double x1; })a4;
- (void).cxx_destruct;

@end
