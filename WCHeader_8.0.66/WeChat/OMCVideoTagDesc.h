@class NSString;

@interface OMCVideoTagDesc : NSObject

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } position;
@property (readonly, nonatomic) BOOL isPositionNormalized;

- (id)initWithText:(id)a0 position:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithText:(id)a0 normalizedPosition:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithText:(id)a0 position:(struct CGPoint { double x0; double x1; })a1 isPositionNormalized:(BOOL)a2;
- (id)description;
- (void).cxx_destruct;

@end
