@class NSString, UIImageView, UIImage, UILabel, HTSLiveToolbarItem;

@interface IESLiveIMEntranceFragment : IESLiveRoomComponent <IESLiveIMCustomServiceProtocol, IESLiveMessageInteractionModuleIMEntranceInterface, HTSLiveAudienceActions, IESLiveToolbarComponentHandler>

@property (copy, nonatomic) id /* block */ serverCtrlEntranceShowBlock;
@property (retain, nonatomic) UILabel *badgeLabel;
@property (retain, nonatomic) UIImageView *customImageView;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *themeImage;
@property (retain, nonatomic) HTSLiveToolbarItem *entranceItem;
@property (retain, nonatomic) HTSLiveToolbarItem *entranceItemInGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentMount;
- (void)remoteRoomDataReady:(id)a0;
- (void)toolbarReceiveComponent:(id)a0 completion:(id /* block */)a1;
- (void)toolbarComponentRemovedReason:(unsigned long long)a0 extra:(id)a1;
- (void)toolbarComponentThemeRefresh:(id)a0;
- (void)liveWillFinished;
- (void)onUnReadCoundChangedFor:(id)a0 totalCount:(long long)a1;
- (id)currentTrackContext;
- (void)loadToolbarItemWithIcon:(id)a0;
- (void)updateBadgeWithUnreadCount:(long long)a0;
- (void)trackIMEntranceClicked:(BOOL)a0;
- (void).cxx_destruct;
- (id)currentRoom;

@end
