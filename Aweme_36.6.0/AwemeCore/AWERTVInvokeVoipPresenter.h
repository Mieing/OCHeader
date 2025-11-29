@class AWEIMRTVListSelectBaseViewController, NSString, NSDictionary, AWEIMRTVSelectSectionModelFactory;
@protocol RxInjector, AWEIMRTVInviteFriendPresenterContext;

@interface AWERTVInvokeVoipPresenter : NSObject <AWEIMRTVListSelectBaseViewControllerDelegate, AWEIMRTVVoipFriendInviteTableViewCellDelegate, AWEIMRTVInviteFriendPresenterProtocol>

@property (retain, nonatomic) AWEIMRTVSelectSectionModelFactory *sectionModelFactory;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) long long rtvType;
@property (readonly, nonatomic) long long enterFrom;
@property (readonly, copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) id /* block */ callback;
@property (weak, nonatomic) AWEIMRTVListSelectBaseViewController *listSelectViewController;
@property (readonly, nonatomic) id<AWEIMRTVInviteFriendPresenterContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)renderWithContext:(id)a0;
- (void)selectAndInvokeVoipWithType:(long long)a0 enterFrom:(long long)a1 params:(id)a2 callback:(id /* block */)a3;
- (id)__allFriendsSelectModel;
- (id)__navBarTitle;
- (id)__inviteButtonTitle;
- (id)__inviteButtonTitleColor;
- (id)__inviteButtonBgColor;
- (void)listSelectBaseViewController:(id)a0 configCell:(id)a1 cellModel:(id)a2;
- (BOOL)listSelectBaseViewController:(id)a0 canSelectWithCellModel:(id)a1;
- (void)voipFriendInviteTableViewCell:(id)a0 didClickInviteButton:(id)a1;
- (void)p_voipWithUserId:(id)a0;
- (void).cxx_destruct;

@end
