@class NSDictionary;

@interface IESGCPGameGetUserProfileDataModel : IESLiveBridgeModel

@property (copy, nonatomic) NSDictionary *userProfile;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
