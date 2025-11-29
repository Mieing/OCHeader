@interface MATracePointsReducer : NSObject

+ (double)calculateDistanceFromPoint:(struct MAMapPoint { double x0; double x1; })a0 toLine:(struct MAMapPoint { double x0; double x1; })a1 and:(struct MAMapPoint { double x0; double x1; })a2;
+ (id)reducer_RDP:(id)a0 threshHold:(float)a1;
+ (id)reducer_verticalThreshold:(id)a0 threshHold:(float)a1;

@end
