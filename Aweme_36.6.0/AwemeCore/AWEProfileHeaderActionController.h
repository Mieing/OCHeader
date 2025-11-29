@class NSDictionary, AWEUserModel, NSString;

@interface AWEProfileHeaderActionController : NSObject <AWEProfileHeaderActionControllerProtocol>

@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) BOOL isCurrentUser;
@property (nonatomic) BOOL fromHomepage;
@property (retain, nonatomic) NSDictionary *trackerParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowHideMyPostCellForUser:(id)a0;
+ (void)showDoubleCheckForPrivateUser:(id)a0 params:(id)a1 unfollowConfirmationBlock:(id /* block */)a2;
+ (void)didTapHideMyPostFromUser:(id)a0 enterFrom:(id)a1 otherTrackParams:(id)a2;
+ (id)createAlertView:(id)a0 description:(id)a1;
+ (id)settingActionWithUser:(id)a0;
+ (void)showDoubleCheckForBlockActionSheet:(id)a0 enterFrom:(id)a1 fromItemID:(id)a2;
+ (void)showDoubleCheckForBlockActionSheet:(id)a0 enterFrom:(id)a1 fromItemID:(id)a2 previousPage:(id)a3;
+ (void)showDoubleCheckForBlockActionSheet:(id)a0 enterFrom:(id)a1 fromItemID:(id)a2 isFromHot:(BOOL)a3 groupID:(id)a4 previousPage:(id)a5;
+ (void)showLikeAlertViewWithUser:(id)a0;
+ (BOOL)canShowHideHerPostCellForUser:(id)a0;
+ (void)showDoubleCheckForUnFollowActionSheet:(id)a0 params:(id)a1 needAlert:(BOOL)a2 unfollowConfirmationBlock:(id /* block */)a3;
+ (void)showDoubleCheckForBlockActionSheet:(id)a0 enterFrom:(id)a1;
+ (void)didTapHideHerPostWithUser:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2 otherTrackParams:(id)a3;
+ (id)idStrWithUser:(id)a0;

- (id)getUserAge;
- (BOOL)shouldShowGender;
- (BOOL)shouldShowAge;
- (BOOL)shouldShowSchool;
- (BOOL)shouldShowLocation;
- (void).cxx_destruct;
- (id)locationString;

@end
