@class NSString, IESLiveMultiLinkerMediaCustomItemView, HTSLivePopupNavigationController;

@interface IESLiveCommunityInteractEntranceFragment : IESLiveRoomComponent <IESLiveCommunityInteractEntranceRouter, HTSLiveMessageSubscriber>

@property (nonatomic) BOOL entranceEnable;
@property (retain, nonatomic) IESLiveMultiLinkerMediaCustomItemView *linkItemView;
@property (retain, nonatomic) HTSLivePopupNavigationController *navigationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)showEntranceNavigationControllerWith:(id)a0;
- (void)showEntranceNavigationControllerWith:(id)a0 completion:(id /* block */)a1;
- (void)dismissEntranceNavigationController;
- (id)entranceNavigationController;
- (void)renderCommunityInteractItemStatus:(unsigned long long)a0;
- (void)resetLinkEntranceItem;
- (void)loadLinkEntranceItem;
- (void)clickEntranceItem;
- (void)p_makeLinkItemViewConstraint;
- (double)entranceItemBottomOffset;
- (void)dismissModalDialogIfNeed;
- (void)loadNavigationControllerWith:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;
- (void)dismissNavigationController;
- (long long)componentPriority;

@end
