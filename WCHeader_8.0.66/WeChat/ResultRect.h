@interface ResultRect : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } leftTop;
@property (nonatomic) struct CGPoint { double x; double y; } rightTop;
@property (nonatomic) struct CGPoint { double x; double y; } rightBottom;
@property (nonatomic) struct CGPoint { double x; double y; } leftBottom;

- (BOOL)standardRectangle;
- (BOOL)standardPassport;

@end
