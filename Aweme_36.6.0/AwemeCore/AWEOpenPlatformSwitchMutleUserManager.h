@class NSArray;

@interface AWEOpenPlatformSwitchMutleUserManager : NSObject

@property (retain, nonatomic) NSArray *userList;

+ (id)shareManager;

- (BOOL)shouldShowEntranceLabel;
- (BOOL)shouldShowHalfSwitchVC;
- (void)loginNewUser:(id /* block */)a0;
- (void)trackAuthSwitchNotify;
- (void)trackAuthSwitchClick:(id)a0;
- (void)switchToUser:(id)a0 withCompletionBlk:(id /* block */)a1;
- (void)getCurrentUserListWithBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
