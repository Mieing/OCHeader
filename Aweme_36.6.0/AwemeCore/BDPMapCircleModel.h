@class BDPMapPointModel, UIColor;

@interface BDPMapCircleModel : BDPBasePluginModel

@property (copy, nonatomic) BDPMapPointModel *point;
@property (nonatomic) double radius;
@property (copy, nonatomic) UIColor *color;
@property (copy, nonatomic) UIColor *fillColor;
@property (nonatomic) double strokeWidth;

- (id)modelCustomWillTransformFromDictionary:(id)a0;
- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
