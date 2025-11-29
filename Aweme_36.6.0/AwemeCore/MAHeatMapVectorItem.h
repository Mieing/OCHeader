@class NSArray;

@interface MAHeatMapVectorItem : NSObject

@property (nonatomic) struct MAMapPoint { double x; double y; } center;
@property (nonatomic) float intensity;
@property (retain, nonatomic) NSArray *nodeIndices;

- (void).cxx_destruct;

@end
