@class NSNumber;

@interface AWEGetCurrentGCJLocationDataModel : IESLiveBridgeModel

@property (copy, nonatomic) NSNumber *latitude;
@property (copy, nonatomic) NSNumber *longitude;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
