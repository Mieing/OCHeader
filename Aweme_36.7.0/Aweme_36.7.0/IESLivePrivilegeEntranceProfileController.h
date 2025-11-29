@class IESLivePrivilegeEntranceVIPViewModel, IESLivePrivilegeEntranceProfileLiveVipViewModel, NSString, IESLivePrivilegeEntranceProfileViewModel, UIView, IESLivePrivilegeEntranceView;
@protocol IESLivePrivilegeEntranceProfileActions, IESLiveRoomProfileButtonDelegate, IESLivePrivilegeEntranceSubviewDelegate, IESLiveRoomProfileButtonContainerOuterProtocol;

@interface IESLivePrivilegeEntranceProfileController : IESLiveCubeController <IESLivePrivilegeEntranceProfileViewEventHandler, IESLivePrivilegeModulePrivilegeEntranceProfileInterface>

@property (retain, nonatomic) IESLivePrivilegeEntranceProfileViewModel *profileViewModel;
@property (retain, nonatomic) IESLivePrivilegeEntranceProfileLiveVipViewModel *liveVipViewModel;
@property (retain, nonatomic) UIView<IESLiveRoomProfileButtonDelegate> *currentProfileView;
@property (weak, nonatomic) id<IESLiveRoomProfileButtonContainerOuterProtocol> profileContainer;
@property (nonatomic) BOOL enableEnterFansClub;
@property (nonatomic) BOOL enableEcomFansclub;
@property (nonatomic) BOOL enableProfileVIPEntrance;
@property (nonatomic) BOOL enableGeneralVIP;
@property (retain, nonatomic) IESLivePrivilegeEntranceView *entranceView;
@property (retain, nonatomic) UIView<IESLivePrivilegeEntranceSubviewDelegate> *fansClubView;
@property (retain, nonatomic) UIView<IESLivePrivilegeEntranceSubviewDelegate> *generalVIPView;
@property (retain, nonatomic) UIView<IESLivePrivilegeEntranceSubviewDelegate> *liveVIPView;
@property (retain, nonatomic) IESLivePrivilegeEntranceVIPViewModel *generalVIPViewModel;
@property (nonatomic) long long entranceType;
@property (readonly, nonatomic) BOOL enableProfileDoubleEntranceConfig;
@property (nonatomic) long long fansClubType;
@property (retain, nonatomic) id<IESLivePrivilegeEntranceProfileActions> actionCreator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)controllerActived;
- (id)buildCommonParams;
- (id)profileButton;
- (void)viewDidShowOnContainer:(id)a0;
- (void)openNormalFansClubView;
- (void)createProfileView;
- (void)resetAnchorEntranceStyle;
- (void)createGeneralVIPView;
- (void)createVIPProfileView;
- (void)reloadProfileViewIfNeeded;
- (void)didTapFansclubButton;
- (void)didTapVIPButton;
- (void).cxx_destruct;

@end
