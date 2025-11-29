@interface CJPayBubbleView : NSObject

@property (nonatomic) struct CGSize { double width; double height; } size;
@property double cornerRadius;
@property double arrowRadius;
@property double arrowSideRadius;
@property double arrowHeight;
@property double arrowWidth;
@property int arrowDirection;
@property double arrowPosition;

- (id)keyPoints;
- (struct CGPath { } *)bubblePath;
- (void)setDefaultProperty;
- (void)updateWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)layer;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;

@end
