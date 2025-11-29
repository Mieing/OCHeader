@class IESLiveGameInteractEntranceItem, HTSLivePopupNavigationController, NSString;

@interface IESLiveGameInteractEntranceFragment : IESLiveRoomComponent <IESLiveGameInteractEntranceRouter>

@property (retain, nonatomic) IESLiveGameInteractEntranceItem *entranceItem;
@property (retain, nonatomic) HTSLivePopupNavigationController *navigationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)mountDidFinishForLevel:(long long)a0;
- (void)showEntranceNavigationControllerWith:(id)a0;
- (void)showEntranceNavigationControllerWith:(id)a0 completion:(id /* block */)a1;
- (void)dismissEntranceNavigationController;
- (id)entranceNavigationController;
- (void)clickEntranceItem;
- (double)entranceItemBottomOffset;
- (void)loadNavigationControllerWith:(id)a0;
- (void)renderGameInteractItemStatus:(unsigned long long)a0;
- (void)setupAnchorScreencastEntrance;
- (void)p_makeItemViewConstraint;
- (void)showPKItemRedDot:(BOOL)a0;
- (void).cxx_destruct;
- (void)dismissNavigationController;

@end
