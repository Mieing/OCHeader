@class NSMutableArray;

@interface MeasuredResult : NSObject

@property (nonatomic) double width;
@property (nonatomic) double height;
@property (retain, nonatomic) NSMutableArray *contents;

- (id)initWithWidth:(double)a0 height:(double)a1 contents:(id)a2;
- (void).cxx_destruct;

@end
