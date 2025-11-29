@class CALayer;

@interface MMFinderLiveConcertTicketShadowView : UIView

@property (retain, nonatomic) CALayer *shadowLayer;
@property (nonatomic) struct CGColor { } *shadowColor;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) double shadowRadius;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1;
- (void).cxx_destruct;

@end
