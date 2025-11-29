@interface AWEIMSwipeTrigger : NSObject

@property (nonatomic) long long triggerType;
@property (nonatomic) double value;

- (BOOL)isTriggeredWithView:(id)a0 gesture:(id)a1 inSuperview:(id)a2 referenceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;

@end
