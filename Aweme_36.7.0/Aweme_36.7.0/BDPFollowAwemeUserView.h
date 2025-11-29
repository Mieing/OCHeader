@class BDPUserItem, BDPUniqueID, AWEUserModel;

@interface BDPFollowAwemeUserView : UIView

@property (retain, nonatomic) BDPUniqueID *appID;
@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) BDPUserItem *userItem;
@property (nonatomic) BOOL ifUseNewUser;
@property (copy, nonatomic) id /* block */ complete;

- (void).cxx_destruct;
- (id)iconURL;

@end
