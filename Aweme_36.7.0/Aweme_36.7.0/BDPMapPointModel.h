@interface BDPMapPointModel : BDPBasePluginModel

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;

- (id)modelCustomWillTransformFromDictionary:(id)a0;
- (BOOL)isValid;
- (struct CLLocationCoordinate2D { double x0; double x1; })coordinate;
- (id)init;

@end
