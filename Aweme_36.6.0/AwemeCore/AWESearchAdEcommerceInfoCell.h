@class UIView, NSString, AWEDoubleColumnSearchMerchandiseModel, UIImageView, UIButton, NSDictionary, YYLabel, UILabel, AWEDoubleColumnSearchMerchandiseUserInfoModel;
@protocol AWESearchECardTracker, AWEFeedLiveMarkViewProtocol;

@interface AWESearchAdEcommerceInfoCell : UICollectionViewCell <AWESearchCachalotCardViewProtocol, AWESearchMerchandiseDoubleColumnCell>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *avatarContentView;
@property (retain, nonatomic) UIView<AWEFeedLiveMarkViewProtocol> *liveMarkView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *liveTitleImageView;
@property (retain, nonatomic) UIView *userInfoContentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) YYLabel *subtitleLabel;
@property (retain, nonatomic) UIButton *enterButton;
@property (retain, nonatomic) UILabel *adTagLabel;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseModel *model;
@property (readonly, nonatomic) AWEDoubleColumnSearchMerchandiseUserInfoModel *user;
@property (copy, nonatomic) NSDictionary *searchParams;
@property (retain, nonatomic) id<AWESearchECardTracker> searchTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForModel:(id)a0 containerWidth:(double)a1;
+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;
+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)enterLiveRoom;
- (void)configAvatar;
- (void)configSearchTracker:(id)a0;
- (void)setSearchInfoDict:(id)a0;
- (void)trackAdOtherShow;
- (void)recordDidEndDisplaying;
- (id)trackEcommerceCommonParamsWithNeedLogExtra:(BOOL)a0;
- (void)trackEcommerceUserEvent:(id)a0 refer:(id)a1;
- (void)trackADEventWithLabel:(id)a0;
- (void)trackEcommerceUserEvent:(id)a0;
- (id)trackEcommerceCommonParams;
- (void)trackADEventWithLabel:(id)a0 refer:(id)a1;
- (void)configAdTagLabel;
- (BOOL)canEnterRoom;
- (id)buildScoreImageListWithScore:(double)a0;
- (void)trackShopEvent:(id)a0;
- (void)openECommerceSchemaWithRefer:(id)a0;
- (void)configEcommerceInfo;
- (void)configEnterButton;
- (void)avatarContentViewTapGR:(id)a0;
- (void)userInfoContentViewTapGR:(id)a0;
- (void)enterButtonTouchUpInside;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)componentView;
- (void)setupSubviews;
- (void)updateWithViewModel:(id)a0;

@end
