@class NSString;

@interface AWERelationModuleService : HTSService <AWERelationModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadBizUIAdapterClass;

- (id)createFamiliarSearchFriendHolderViewControllerWithEnterFrom:(id)a0 enterType:(id)a1;
- (id)friendsListDataControllerWithCount:(long long)a0;
- (id)friendsRelationListDataController;
- (id)familiarSearchDataController;
- (id)contactCardView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1 needGradient:(BOOL)a2 isConstColor:(BOOL)a3;
- (id)contactCardViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isConstColor:(BOOL)a1 shareCellsBottom:(double)a2 maxNumOfShareChannels:(long long)a3;
- (Class)diggFriendProfileHelper;
- (Class)relationDescriptionHelper;
- (long long)localFriendsListNumber;
- (long long)newFriendsListNumber;
- (void)openProfileAvatarPreviewControllerWithUser:(id)a0 placeholderImage:(id)a1 avatarImage:(id)a2 fromContext:(id)a3 isPureMode:(BOOL)a4 trackPramras:(id)a5;
- (id)aAWEPadBizUIAdapter;

@end
