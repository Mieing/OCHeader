@class NSString, AWEDoubleColumnSearchMerchandiseModel, AWEGeneralSearchModel, AWESearchUser, NSDictionary, AWESearchAllManager, UILabel, AWEGeneralTopUserView;

@interface AWEGeneralTopUserAdCell : AWESearchCachalotECommerceBaseCell <AWEUserMessage, AWESearchTopUserDelegate>

@property (retain, nonatomic) AWEGeneralTopUserView *topUserView;
@property (retain, nonatomic) UILabel *topUserTitleLabel;
@property (retain, nonatomic) UILabel *topUserSubtitleLabel;
@property (retain, nonatomic) AWEGeneralSearchModel *searchModel;
@property (retain, nonatomic) AWESearchUser *searchUserModel;
@property (nonatomic) BOOL isLiveBlocked;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (retain, nonatomic) AWESearchAllManager *manager;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseModel *searchMerchandiseModel;
@property (nonatomic) BOOL isFromECommerce;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForModel:(id)a0 containerWidth:(double)a1;
+ (id)identifier;

- (long long)currentThemeStyle;
- (void)configWithModel:(id)a0;
- (void)configUI;
- (void)enterLiveRoom;
- (void)unfollowUser:(id)a0;
- (void)trackAdOtherShow;
- (void)recordDidEndDisplaying;
- (void)addCornerRadiusWithView:(id)a0 corners:(unsigned long long)a1 cornerRadii:(struct CGSize { double x0; double x1; })a2;
- (void)trackAdEndorseUserCard:(id)a0 refer:(id)a1;
- (void)followUser:(id)a0;
- (void)followButtonTapped;
- (void)liveBlockAudienceNotication:(id)a0;
- (void)p_configUIInfoModel:(id)a0;
- (void)userViewTapped;
- (void)brandRankLabelTapped;
- (void)avatarImageTapped;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addObserver;
- (id)componentView;

@end
