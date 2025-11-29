@class NSArray;

@interface GXLayout : NSObject

@property (nonatomic) const float *pointer;
@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (retain, nonatomic) NSArray *children;

+ (id)fromFloats:(const float *)a0;

- (id)initWithX:(double)a0 y:(double)a1 width:(double)a2 height:(double)a3 children:(id)a4 pointer:(const float *)a5;
- (void).cxx_destruct;

@end
