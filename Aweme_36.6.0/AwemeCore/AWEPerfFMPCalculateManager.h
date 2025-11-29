@class NSMutableArray;

@interface AWEPerfFMPCalculateManager : NSObject

@property (retain, nonatomic) NSMutableArray *calculators;
@property (nonatomic) double deviceScore;
@property (nonatomic) double timeThreshold;

+ (void)swizzleFMPMethods;
+ (void)initialize;
+ (id)sharedInstance;

- (void)calculateFMPForView:(id)a0 startTime:(double)a1 respondToGesture:(BOOL)a2 completion:(id /* block */)a3;
- (double)defaultTimeThreshold;
- (void)calculateFMPForView:(id)a0 startTime:(double)a1 config:(id)a2 respondToGesture:(BOOL)a3 delegate:(id)a4 completion:(id /* block */)a5;
- (void)calculateFMPForView:(id)a0 startTime:(double)a1 completion:(id /* block */)a2;
- (void)userInteractionHappened;
- (void)calculateFMPForView:(id)a0 startTime:(double)a1 timeThreshold:(double)a2 completion:(id /* block */)a3;
- (void)calculateFMPForPage:(id)a0 view:(id)a1 startTime:(double)a2 completion:(id /* block */)a3;
- (void)calculateFMPForPage:(id)a0 view:(id)a1 startTime:(double)a2 config:(id)a3 completion:(id /* block */)a4;
- (void)updateRecordForView:(id)a0 fromContentChange:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end
