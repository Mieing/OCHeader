@class NSMutableOrderedSet;

@interface AppMonitorDimensionSet : NSObject

@property (retain, nonatomic) NSMutableOrderedSet *dimensions;

+ (id)setWithArray:(id)a0;

- (void)addDimensionWithName:(id)a0;
- (id)dimensionForName:(id)a0;
- (void).cxx_destruct;
- (void)addDimension:(id)a0;
- (void)setConstantValue:(id)a0;
- (BOOL)valid:(id)a0;

@end
