@class NSArray, NSMutableArray;

@interface AWEDiscoverBezierCurve2DCaculator : NSObject

@property (copy, nonatomic) NSArray *controlPointers;
@property (nonatomic) long long samplingCount;
@property (retain, nonatomic) NSMutableArray *pascalTriangleArray;

- (double)caculateValueWithX:(double)a0 minX:(double)a1 maxX:(double)a2 repeatCheckCount:(long long)a3;
- (id)initWithControlPointer:(id)a0 samplingCount:(long long)a1;
- (id)calculateValueWithSampleIndex:(long long)a0;
- (void)caculatePascalTriangle:(long long)a0 newDegree:(long long)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
