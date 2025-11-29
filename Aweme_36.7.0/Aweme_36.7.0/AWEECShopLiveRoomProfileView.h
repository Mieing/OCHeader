@class UIStackView, UIView, NSString, IESECShopLiveTabInfoModel, UIImageView, UIButton, IESECShopMultipleFunctionsFollowView, IESECShopFollowBubbleView, UILabel, IESECServiceProxy;
@protocol IESECShopFollowService, IESECShopDataService, IESECShopForwardCoService, IESECShopPageContextV2;

@interface AWEECShopLiveRoomProfileView : UIView <IESECShopMultipleFunctionsFollowViewDelegate, AWEECLiveShopProfileViewProtocol, IESECShopLiveRoomProfileView> {
    id<IESECShopPageContextV2> _context;
    IESECShopLiveTabInfoModel *_model;
    BOOL _firstUpdate;
}

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIView *backgroundColorView;
@property (retain, nonatomic) UIImageView *logoImageView;
@property (retain, nonatomic) UIView *infoContainer;
@property (retain, nonatomic) UILabel *nameView;
@property (retain, nonatomic) UIStackView *reputationView;
@property (retain, nonatomic) UILabel *visitorNumberLabel;
@property (retain, nonatomic) IESECShopMultipleFunctionsFollowView *followView;
@property (retain, nonatomic) IESECShopFollowBubbleView *bubbleView;
@property (retain, nonatomic) IESECServiceProxy<IESECShopFollowService> *followService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopForwardCoService> *forwardService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopDataService> *dataService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double topMargin;

- (void)follow;
- (void)exitShop;
- (id)initWithShopContext:(id)a0;
- (long long)fansClubLevel;
- (void)unfollow;
- (void)jumpToJoinFansClubBoard;
- (void)jumpToFansClubMissionBoard;
- (id)followViewBackgroundColor:(id)a0;
- (id)followViewTextColor:(id)a0;
- (void)setupBindings;
- (void)bindAuthorTracker:(BOOL)a0;
- (void)jumpToShopDetailPage;
- (void)jumpToShopOwnerProfilePage;
- (void)experienceScoreTracker:(BOOL)a0;
- (void)p_updateLiveRoomVisitorNumbers:(id)a0;
- (void)tapLogo;
- (void)tapName;
- (void)tapReputation;
- (void)updateLiveRoomVisitorNumbers:(id)a0;
- (void)updateFollowStatus:(BOOL)a0 userID:(id)a1;
- (void)updateWithInfoModel:(id)a0;
- (void).cxx_destruct;
- (void)setupViews;

@end
