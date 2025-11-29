@class NSString, IESECServiceProxy, IESECShopFollowConfigModel;
@protocol IESECShopLayoutService, IESECShopStateService, IESECShopDataService, IESECShopForwardCoService;

@interface IESECShopFollowService : IESECShopService <IESECShopFollowService> {
    unsigned long long _lastMode;
}

@property (nonatomic) unsigned long long followViewMode;
@property (retain, nonatomic) NSString *followButtonState;
@property (nonatomic) BOOL showFollowButton;
@property (retain, nonatomic) IESECServiceProxy<IESECShopDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopStateService> *stateService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopForwardCoService> *forwardCoService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopLayoutService> *layoutService;
@property (readonly, nonatomic) unsigned long long bubbleMode;
@property (readonly, nonatomic) IESECShopFollowConfigModel *followCoupon;
@property (readonly, nonatomic) IESECShopFollowConfigModel *fansClubCoupon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)p_showLynxFloatContainerWithModuleData:(id)a0;

- (void)follow;
- (id)shopContext;
- (void)updateFollowStatus:(BOOL)a0;
- (long long)fansClubLevel;
- (void)unfollow;
- (void)jumpToJoinFansClubBoard;
- (void)jumpToFansClubMissionBoard;
- (void)setupBindings;
- (void)subscribeEvents;
- (void)p_updateFollowViewMode;
- (void)p_tapFollowStoreButtonWithToast:(BOOL)a0;
- (void)p_updateFollowStateFromRemote;
- (void)p_sendFollowChangeEventWithCoupon:(id)a0;
- (void)p_handleFollowRes:(id)a0 showToast:(BOOL)a1;
- (void)followAdTracker:(BOOL)a0;
- (void)p_followStoreAccountWithGiftId:(id)a0 giftType:(long long)a1 completion:(id /* block */)a2;
- (void)p_unfollowStoreAccountWithCompletion:(id /* block */)a0;
- (void)p_requestFollowStateFromRemote:(id /* block */)a0;
- (void)trackFollowButton:(BOOL)a0;
- (id)accountInfo;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)pageContext;

@end
