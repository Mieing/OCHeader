@interface MMFlutterOffsetInfo : NSObject

@property (nonatomic) BOOL inScreen;
@property (nonatomic) struct CGPoint { double x; double y; } offset;

- (id)initWithInScreen:(BOOL)a0;
- (id)initWithOffset:(struct CGPoint { double x0; double x1; })a0;

@end
