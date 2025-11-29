@class NSArray;

@interface BDSCGradientColorUIModel : NSObject

@property (copy, nonatomic) NSArray *colors;
@property (retain, nonatomic) NSArray *locations;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (nonatomic) struct CGPoint { double x; double y; } endPoint;

- (id)initWithGradientColorString:(id)a0;
- (void).cxx_destruct;

@end
