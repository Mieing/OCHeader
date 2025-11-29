@class NSString, NSDictionary, FinderNewUserPrepareResponse, WCFinderPostSessionModel;
@protocol WCFinderCreateCoordinatorDelegate;

@interface WCFinderCreateCoordinator : NSObject <WCFinderUserPrepareCgiDelegate, WCFinderCreateUserViewControllerDelegate, WCFinderTipsViewControllerDelegate>

@property (retain, nonatomic) NSDictionary *params;
@property (retain, nonatomic) id context;
@property (nonatomic) int scene;
@property (nonatomic) unsigned long long createScene;
@property (nonatomic) int fromCommentScene;
@property (retain, nonatomic) FinderNewUserPrepareResponse *userPrepare;
@property (retain, nonatomic) WCFinderPostSessionModel *postSession;
@property (retain, nonatomic) NSString *customCreateUserTitleText;
@property (retain, nonatomic) NSString *customCreateUserConfirmButtonText;
@property (weak, nonatomic) id<WCFinderCreateCoordinatorDelegate> delegate;
@property (copy, nonatomic) id /* block */ customHandleUserPrapareBlock;
@property (retain, nonatomic) id userInfo;
@property (nonatomic) BOOL isAutoLifeCycle;
@property (nonatomic) BOOL skipTips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldStartCreateUserWithPostContact:(id)a0;
+ (BOOL)shouldStartCreateUserByMasterContact;

- (void)startCreateUser;
- (void)startCreateUserWithParams:(id)a0;
- (void)createUserFuncComplete;
- (void)startRealName;
- (id)init;
- (void)dealloc;
- (void)showCreateAccountTipsWithCustomWording:(id)a0;
- (void)showCreateAccountTips;
- (void)bindReportActionByTipsVC:(id)a0;
- (id)geTopViewController;
- (void)OnRealnameVerfitySuccessNotification:(id)a0;
- (void)createUserConfirmed;
- (void)createUserFinished:(id)a0;
- (void)cancelCreateUser;
- (void)createUserFailed;
- (void)showCreateUserView;
- (void)tipsVCClickConfirmButton:(id)a0;
- (void)tipsVCClickCancelButton:(id)a0;
- (void)userPrepareCgi:(id)a0 didGetResponse:(id)a1;
- (void)userPrepareCgi:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;

@end
