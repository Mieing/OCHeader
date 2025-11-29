@class NSArray, UIColor;

@interface BDPMapPolygonModel : BDPBasePluginModel

@property (copy, nonatomic) NSArray *points;
@property (nonatomic) double strokeWidth;
@property (copy, nonatomic) UIColor *strokeColor;
@property (copy, nonatomic) UIColor *fillColor;
@property (nonatomic) long long zIndex;

+ (id)modelContainerPropertyGenericClass;

- (id)modelCustomWillTransformFromDictionary:(id)a0;
- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
