@class NSArray, NSNumber;

@interface IESECEcGalleryParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSArray *images;
@property (copy, nonatomic) NSArray *videos;
@property (copy, nonatomic) NSArray *titles;
@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSNumber *index;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
