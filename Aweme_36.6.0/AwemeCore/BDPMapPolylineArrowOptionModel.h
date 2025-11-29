@class UIColor;

@interface BDPMapPolylineArrowOptionModel : BDPBasePluginModel

@property (nonatomic) BOOL show;
@property (copy, nonatomic) UIColor *color;
@property (nonatomic) double width;
@property (nonatomic) double spaceWidth;

- (id)modelCustomWillTransformFromDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
