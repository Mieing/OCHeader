@class NSString;

@interface IESIMChatDetailPluginImpl : NSObject <IESIMChatDetailPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)createChatDetailTabVCWithAssociatedType:(unsigned long long)a0 conversation:(id)a1;
- (id)createLifeServiceChatMenuViewModel;
- (BOOL)canShowGroupCardInProfile;
- (id)createSearchBarInGroupMemberVC;
- (id)textFieldOfSearchBar:(id)a0;
- (id)contentViewOfSearchBar:(id)a0;
- (id)showInviteFriendsAndFollowerBubbleInContainerView:(id)a0 forView:(id)a1;
- (id)tableViewIndexControllerWithConfig:(id)a0 tableView:(id)a1;
- (id)createNewChatDetailSlidingViewController;
- (id)createSlidingTabbarViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataArray:(id)a1 selectedDataArray:(id)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
