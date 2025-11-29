@interface FlutterRect : NSObject

@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double width;
@property (nonatomic) double height;

+ (id)makeWithX:(double)a0 y:(double)a1 width:(double)a2 height:(double)a3;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;

@end
