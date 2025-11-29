@interface RelaxFramework.TouchEventDetailTouches : NSObject

@property (nonatomic) int identifier;
@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double clientX;
@property (nonatomic) double clientY;
@property (nonatomic) double pageX;
@property (nonatomic) double pageY;

- (id)init;

@end
