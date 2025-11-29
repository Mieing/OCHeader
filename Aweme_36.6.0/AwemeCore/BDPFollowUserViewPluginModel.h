@class BDPFollowUserModel;

@interface BDPFollowUserViewPluginModel : BDPBasePluginModel

@property (retain, nonatomic) BDPFollowUserModel *userInfo;
@property (nonatomic) BOOL hasFollowed;

- (void).cxx_destruct;

@end
