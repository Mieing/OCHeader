@class NSString;

@interface AWEBubbleImageView : UIImageView <AWEBubbleAnchor>

@property (nonatomic) unsigned long long direction;
@property (nonatomic) struct CGPoint { double x; double y; } anchorAdjustment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithImage:(id)a0 direction:(unsigned long long)a1 anchorAdjustment:(struct CGPoint { double x0; double x1; })a2;
- (struct CGPoint { double x0; double x1; })anchorPositionRelatedToLeftTop;
- (void)redrawStrokeIfNeeded;
- (void)drawStrokeIfNeeded;
- (id)initWithImage:(id)a0 direction:(unsigned long long)a1;

@end
