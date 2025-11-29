@interface NLECurveTransUtil : NSObject

+ (id)generateCurveSpeedSource:(struct shared_ptr<cut::model::NLETrackSlot> { struct NLETrackSlot *x0; struct __shared_weak_count *x1; })a0;
+ (id)generateSpeedSource:(struct shared_ptr<cut::model::NLETrackSlot> { struct NLETrackSlot *x0; struct __shared_weak_count *x1; })a0;
+ (id)transferVideoPointXtoPlayerPoint:(void *)a0;
+ (id)xCoordinateOfPoints:(void *)a0;
+ (id)yCoordinateOfPoints:(void *)a0;
+ (double)culculateAverageCurveSpeedRatioWithPointX:(id)a0 PointY:(id)a1;
+ (id)generatePoints:(void *)a0;

@end
