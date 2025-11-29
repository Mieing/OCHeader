@class NSString, BDPMapPointModel, NSNumber;

@interface BDPTranslateMarkerModel : BDPBasePluginModel

@property (copy, nonatomic) NSString *markerId;
@property (copy, nonatomic) BDPMapPointModel *destination;
@property (copy, nonatomic) NSNumber *animationCallbackId;
@property (nonatomic) double rotate;
@property (nonatomic) BOOL autoRotate;
@property (nonatomic) BOOL moveWithRotate;
@property (nonatomic) double duration;

- (id)modelCustomWillTransformFromDictionary:(id)a0;
- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
