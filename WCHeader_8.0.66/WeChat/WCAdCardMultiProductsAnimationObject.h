@class CAMediaTimingFunction, NSValue, UIView, NSNumber;

@interface WCAdCardMultiProductsAnimationObject : MMObject

@property (weak, nonatomic) UIView *relatedView;
@property (nonatomic) double duration;
@property (nonatomic) double delay;
@property (nonatomic) struct CGPoint { double x; double y; } fromPosition;
@property (nonatomic) struct CGPoint { double x; double y; } toPosition;
@property (nonatomic) double fromOpacity;
@property (nonatomic) double toOpacity;
@property (retain, nonatomic) NSNumber *persistOpacity;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property (retain, nonatomic) NSValue *previousCenter;

- (void).cxx_destruct;

@end
