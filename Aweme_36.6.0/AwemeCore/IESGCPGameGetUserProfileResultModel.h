@class IESGCPGameGetUserProfileDataModel;

@interface IESGCPGameGetUserProfileResultModel : IESLiveBridgeModel

@property (retain, nonatomic) IESGCPGameGetUserProfileDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
