@class NSArray;

@interface DVESlice : NSObject

@property (nonatomic) double x;
@property (nonatomic) double width;
@property (retain, nonatomic) NSArray *audioPoints;

- (id)initWithX:(double)a0 width:(double)a1 audioPoints:(id)a2;
- (void).cxx_destruct;

@end
