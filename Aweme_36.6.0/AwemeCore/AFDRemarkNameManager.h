@class NSString, NSMutableSet, AFDAfterFollowAlertContext;

@interface AFDRemarkNameManager : NSObject <AWEUserMessage, AFDRemarkNameManagerProtocol, AWEAlertProtocol>

@property (retain, nonatomic) NSMutableSet *needShowRemarkEntranceSet;
@property (retain, nonatomic) NSMutableSet *remarkEntranceImpressionSet;
@property (retain, nonatomic) AFDAfterFollowAlertContext *afterFollowContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showRemarkNamePopupWithUser:(id)a0 extraDict:(id)a1;
+ (void)showQuickEditAliasAlertViewWithMobileKey:(id)a0 currentUser:(id)a1 extraDict:(id)a2 completion:(id /* block */)a3;
+ (void)showQuickEditAliasAlertViewWithMobileKey:(id)a0 currentUser:(id)a1 completion:(id /* block */)a2;
+ (BOOL)enableShowEditAliasEntranceWithUserModel:(id)a0;
+ (void)showRemarkNamePopupWithUser:(id)a0 extraDict:(id)a1 completion:(id /* block */)a2;
+ (void)trackEditRemarksWithParams:(id)a0;
+ (BOOL)isContactFriendWithMobileKey:(id)a0;
+ (void)submitUserAlias:(id)a0 user:(id)a1 enterFrom:(id)a2 nameSourceMapping:(id)a3 completion:(id /* block */)a4;
+ (void)showRemarkNameAlertWithContext:(id)a0 completion:(id /* block */)a1;
+ (void)addOneCurrentPV:(id)a0;
+ (long long)getCurrentPV:(id)a0;
+ (id)generateRemarkNameBtnWithTarget:(id)a0 action:(SEL)a1 scaleRate:(double)a2;
+ (id)getContactNameByMobileKey:(id)a0;
+ (BOOL)canShowQuickEditAliasAlertViewWithFollowStatus:(long long)a0 mobileKey:(id)a1 userModel:(id)a2;
+ (void)new_showQuickEditAliasAlertViewWithMobileKey:(id)a0 currentUser:(id)a1 enterFrom:(id)a2 extraDict:(id)a3 completion:(id /* block */)a4;
+ (id)p_getPVStorageKey:(id)a0;
+ (void)p_showRemarkNamePopupWithContext:(id)a0 completion:(id /* block */)a1;
+ (void)requestUserRemarkTips:(id)a0 enterFrom:(id)a1 timeout:(double)a2 completion:(id /* block */)a3;
+ (void)showRemarkEntrance:(id)a0 user:(id)a1 previousPage:(id)a2 animated:(BOOL)a3;
+ (id)generateRemarkNameBtnWithTarget:(id)a0 action:(SEL)a1;
+ (void)requestMobileKeyWithUser:(id)a0 completion:(id /* block */)a1;
+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (BOOL)canShowAtEvent:(long long)a0;
- (void)showWithCloseCallback:(id /* block */)a0;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowed;
- (void)addUserToEntranceShowSetIfNeeded:(id)a0;
- (BOOL)enableShowContactRemarkEntranceInProfile:(id)a0 hasChangedStatusInProfile:(BOOL)a1;
- (id)frequencyRuleOfContactRemarkEntranceInProfile:(id)a0;
- (void)p_clearSetData;
- (id)initWithAfterFollowContext:(id)a0;
- (BOOL)checkCanShowRemarkEntracneWithUser:(id)a0 isFollowFromProfile:(BOOL)a1 showBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
