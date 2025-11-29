@class NSString, NSMutableArray;

@interface MonitorResult : NSObject

@property (nonatomic) unsigned long long monitorId;
@property (retain, nonatomic) NSString *rootBtnId;
@property (retain, nonatomic) NSMutableArray *monitorPointList;

- (id)initWithMonitorId:(unsigned long long)a0;
- (BOOL)updatePixelColorForMonitorPoints:(id)a0;
- (BOOL)isColorSimilarToMonitorResult:(id)a0 similarContrastRatio:(double)a1 similarStandardRate:(double)a2;
- (BOOL)isColorDistanceSimilarToMonitorResult:(id)a0 similarColorDistance:(double)a1 similarStandardRate:(double)a2;
- (double)getMaxColorDistanceWithMonitorResult:(id)a0;
- (void).cxx_destruct;

@end
