@class NSMutableArray;

@interface MMLinearRegression : NSObject

@property (retain, nonatomic) NSMutableArray *workingArray;
@property (nonatomic) double slope;
@property (nonatomic) double intercept;
@property (nonatomic) double correlation;
@property (nonatomic) double sumY;
@property (nonatomic) double sumX;
@property (nonatomic) double sumXY;
@property (nonatomic) double sumX2;
@property (nonatomic) double sumY2;

+ (id)sharedInstance;

- (void)addDataObject:(id)a0;
- (void)clear;
- (id)getArray;
- (id)calculate;
- (id)calculateRegression:(id)a0;
- (void).cxx_destruct;

@end
