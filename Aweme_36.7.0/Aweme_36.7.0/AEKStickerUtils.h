@interface AEKStickerUtils : NSObject

+ (id)geometryModelWithData:(id)a0;
+ (id)defaultGeoModel;
+ (id)defaultTimeRangeModel;
+ (id)timeRangeModelWithData:(id)a0;
+ (id)timeRangeModelWithStart:(double)a0 end:(double)a1;
+ (id)locationModelWithData:(id)a0;
+ (id)dataWithLocationModel:(id)a0;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })validEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 size:(struct CGSize { double x0; double x1; })a1 minScale:(double)a2 containerScale:(double)a3;

@end
