@class NSString, NSArray, NSNumber;

@interface BDPMoveAlongModel : BDPBasePluginModel

@property (copy, nonatomic) NSString *markerId;
@property (copy, nonatomic) NSArray *path;
@property (copy, nonatomic) NSNumber *animationCallbackId;
@property (nonatomic) BOOL autoRotate;
@property (nonatomic) double duration;

+ (id)modelContainerPropertyGenericClass;

- (id)modelCustomWillTransformFromDictionary:(id)a0;
- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
