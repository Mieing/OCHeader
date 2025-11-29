@class NSString;

@interface WAEJTouchData : NSObject

@property (readonly, nonatomic) struct CGPoint { double x; double y; } pos;
@property (readonly, nonatomic) NSString *identifier;

- (id)initPos:(struct CGPoint { double x0; double x1; })a0 withIdentifier:(id)a1;

@end
