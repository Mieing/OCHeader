@class NSArray;

@interface OMJDashLineStyle : NSObject

@property (readonly, nonatomic) NSArray *intervals;
@property (readonly, nonatomic) double phase;

- (id)initWithIntervals:(id)a0 phase:(double)a1;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
