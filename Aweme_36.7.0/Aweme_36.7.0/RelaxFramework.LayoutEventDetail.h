@interface RelaxFramework.LayoutEventDetail : NSObject

@property (nonatomic) double top;
@property (nonatomic) double bottom;
@property (nonatomic) double left;
@property (nonatomic) double right;
@property (nonatomic) double width;
@property (nonatomic) double height;

- (id)initWithTop:(double)a0 bottom:(double)a1 left:(double)a2 right:(double)a3 width:(double)a4 height:(double)a5;
- (id)init;

@end
