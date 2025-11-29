@interface RelaxFramework.TouchEventDetailTouches : NSObject

@property (nonatomic) int identifier;
@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double clientX;
@property (nonatomic) double clientY;
@property (nonatomic) double pageX;
@property (nonatomic) double pageY;

- (id)initWithIdentifier:(int)a0 x:(double)a1 y:(double)a2 clientX:(double)a3 clientY:(double)a4 pageX:(double)a5 pageY:(double)a6;
- (id)init;

@end
