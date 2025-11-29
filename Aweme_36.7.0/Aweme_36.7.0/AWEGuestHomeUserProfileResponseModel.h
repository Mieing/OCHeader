@class AWEUserModel;

@interface AWEGuestHomeUserProfileResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWEUserModel *userModel;

+ (id)userModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
