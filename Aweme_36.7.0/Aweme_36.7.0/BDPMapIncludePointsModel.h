@class NSArray;

@interface BDPMapIncludePointsModel : BDPBasePluginModel

@property (copy, nonatomic) NSArray *points;
@property (nonatomic) double topPadding;
@property (nonatomic) double rightPadding;
@property (nonatomic) double bottomPadding;
@property (nonatomic) double leftPadding;

+ (id)modelContainerPropertyGenericClass;

- (id)modelCustomWillTransformFromDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
