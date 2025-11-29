@class NSString, NSSet, NSObject;
@protocol AFDFriendsRelationListDataControllerProtocol;

@interface AFDPublishVisibleManager : NSObject <AFDPublishVisibleManagerProtocol>

@property (retain, nonatomic) NSObject<AFDFriendsRelationListDataControllerProtocol> *relationListDataController;
@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSSet *dontLetOtherSeeUids;
@property (copy, nonatomic) NSSet *dontLetOtherSee24StoryUids;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)shareAwemeModel:(id)a0 toUsersOrGroups:(id)a1 completedBlock:(id /* block */)a2;
+ (void)shareAwemeModel:(id)a0 toUsersOrGroups:(id)a1 interactionScene:(unsigned long long)a2 completedBlock:(id /* block */)a3;
+ (void)commentAuthorizedWithAwemeModel:(id)a0 labelPrivate:(id)a1 isPartSeeItem:(BOOL)a2;
+ (BOOL)p_shouldSharePrivateAwemeModel:(id)a0;
+ (void)p_sharePrivateAwemeModel:(id)a0 toUsersOrGroups:(id)a1 interactionScene:(unsigned long long)a2 completedBlock:(id /* block */)a3;
+ (void)p_showCloseFriendsShareAlertIfNeededWithShareBlock:(id /* block */)a0 completedBlock:(id /* block */)a1;
+ (void)p_showPrivateShareAlertIfNeededWithShareBlock:(id /* block */)a0 completedBlock:(id /* block */)a1;
+ (void)p_updatePrivacyTypeToPublicWithAwemeModel:(id)a0 completedBlock:(id /* block */)a1;
+ (void)trackAuthorizeWithType:(unsigned long long)a0 errCode:(long long)a1 requestID:(id)a2;
+ (void)updateLocalPrivacyTypeForPartOfVisibleWithAwemeModel:(id)a0 responseModel:(id)a1;
+ (id)p_privateShareAlertKey;
+ (long long)showPrivateShareAlertMaximum;
+ (BOOL)p_shouldShowPrivateShareAlert;
+ (id)p_closeFriendsShareAlertKey;
+ (BOOL)p_shouldShowCloseFriendsShareAlert;
+ (id)searchBusinessID;
+ (id)buildPublishVisibleParamsWithUserList:(id)a0;
+ (long long)limitCount;
+ (id)searchSource;

@end
