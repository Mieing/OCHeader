@class NSString;

@interface BDPFollowUserModel : BDPBasePluginModel

@property (copy, nonatomic) NSString *avatarUrl;
@property (copy, nonatomic) NSString *userDecoration;
@property (copy, nonatomic) NSString *userDescription;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *authInfo;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
