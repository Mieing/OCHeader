@class BDPMapPointModel;

@interface BDPMapGroundOverlayBoundsModel : BDPBasePluginModel

@property (copy, nonatomic) BDPMapPointModel *southwest;
@property (copy, nonatomic) BDPMapPointModel *northeast;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValid;

@end
