@class NSString, BDPMapGroundOverlayBoundsModel;

@interface BDPMapGroundOverlayModel : BDPBasePluginModel

@property (copy, nonatomic) NSString *id;
@property (copy, nonatomic) NSString *src;
@property (copy, nonatomic) BDPMapGroundOverlayBoundsModel *bounds;
@property (nonatomic) BOOL visible;
@property (nonatomic) long long zIndex;
@property (nonatomic) double opacity;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
