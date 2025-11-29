@class AWENearbyLifeBarModel, AWENearbyCapsuleModel;

@interface AWENearbyLifeServiceModel : AWEBaseApiModel

@property (retain, nonatomic) AWENearbyCapsuleModel *capsuleModel;
@property (retain, nonatomic) AWENearbyLifeBarModel *barModel;

+ (id)barModelJSONTransformer;
+ (id)capsuleModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
