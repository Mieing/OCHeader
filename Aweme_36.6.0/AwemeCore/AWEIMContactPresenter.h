@class AWEIMRTVListSelectBaseViewController, NSMutableDictionary, AWEIMUser, AWEIMContactPresenterContext, NSString, AWEIMRTVSelectSectionModelFactory;

@interface AWEIMContactPresenter : NSObject <AWEIMRTVListSelectBaseViewControllerDelegate, AWEIMRTVVoipFriendInviteTableViewCellDelegate>

@property (retain, nonatomic) AWEIMRTVSelectSectionModelFactory *sectionModelFactory;
@property (retain, nonatomic) NSMutableDictionary *params;
@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) AWEIMRTVListSelectBaseViewController *listSelectViewController;
@property (retain, nonatomic) AWEIMContactPresenterContext *context;
@property (retain, nonatomic) AWEIMUser *selectedUser;
@property (nonatomic) BOOL cameraInvoked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_handleVideoRecordFinishedNty:(id)a0;
- (void)renderWithContext:(id)a0;
- (id)__allFriendsSelectModel;
- (id)__navBarTitle;
- (id)__inviteButtonTitle;
- (id)__inviteButtonTitleColor;
- (id)__inviteButtonBgColor;
- (void)p_handlePhotoRecordFinishedNty:(id)a0;
- (void)p_removeRecordObserver;
- (void)listSelectBaseViewController:(id)a0 configCell:(id)a1 cellModel:(id)a2;
- (BOOL)listSelectBaseViewController:(id)a0 canSelectWithCellModel:(id)a1;
- (void)voipFriendInviteTableViewCell:(id)a0 didClickInviteButton:(id)a1;
- (void)selectAndInvokeActionWithParams:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
