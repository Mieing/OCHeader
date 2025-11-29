@class NSString, AFDBottomSnackBarView, AWEUserModel;

@interface AFDBecomeCloseFriendsNotice : NSObject <AFDBottomSnackBarViewDelegate>

@property (retain, nonatomic) AFDBottomSnackBarView *sendMsgSnackBarView;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)showCloseFriendsNoticeWithUser:(id)a0 status:(long long)a1;
- (void)showCloseFriendsNoticeWithUser:(id)a0 status:(long long)a1 isOnTabBarHomePage:(BOOL)a2;
- (void)didClickedSnackBar;
- (void)showBecomeCloseFriendsSnackBar:(id)a0;
- (void)didClickedTipsButton;
- (void).cxx_destruct;

@end
