@class AWEFeedNearbyShopCardStyle2ContentTitleView, AWEFeedNearbyShopCardContentGroupBuyingView, UILabel, AWEFeedNearbyShopCardUIConfig, AWEFeedNearbyPOIShopCardModel, AWEFeedNearbyShopCardStyle2ContentDishesView, AWEFeedNearbyShopCardStyle2ContentGroupBuyingView, AWEFeedNearbyShopCardContentPoiView, UIView, AWEFeedNearbyShopCardContentDishesView, AWEFeedNearbyShopCardContentTitleView, AWEGradientView, AWEFeedNearbyShopCardStyle2ContentPoiView, UIImageView;

@interface AWEFeedNearbyShopCardContentView : UIView

@property (copy, nonatomic) id /* block */ tapHandle;
@property (retain, nonatomic) AWEFeedNearbyShopCardContentTitleView *titleView;
@property (retain, nonatomic) AWEFeedNearbyShopCardContentDishesView *dishesView;
@property (retain, nonatomic) AWEFeedNearbyShopCardContentGroupBuyingView *groupBuyingView;
@property (retain, nonatomic) AWEFeedNearbyShopCardContentPoiView *firstPoiView;
@property (retain, nonatomic) AWEFeedNearbyShopCardContentPoiView *secondPoiView;
@property (retain, nonatomic) UILabel *shopDetailLabel;
@property (retain, nonatomic) UILabel *moreShopLabel;
@property (retain, nonatomic) UILabel *cutLineLabel;
@property (retain, nonatomic) UIView *contentBackgroundView;
@property (retain, nonatomic) UIImageView *contentBackgroundImageView;
@property (retain, nonatomic) AWEFeedNearbyPOIShopCardModel *cardModel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) AWEGradientView *leftGradientView;
@property (retain, nonatomic) AWEGradientView *rightGradientView;
@property (retain, nonatomic) UIView *shopDetailView;
@property (retain, nonatomic) AWEFeedNearbyShopCardStyle2ContentTitleView *style2TitleView;
@property (retain, nonatomic) AWEFeedNearbyShopCardStyle2ContentDishesView *style2DishesView;
@property (retain, nonatomic) AWEFeedNearbyShopCardStyle2ContentGroupBuyingView *firstGroupBuyingView;
@property (retain, nonatomic) AWEFeedNearbyShopCardStyle2ContentGroupBuyingView *secondGroupBuyingView;
@property (retain, nonatomic) AWEFeedNearbyShopCardStyle2ContentPoiView *poiView;
@property (retain, nonatomic) UILabel *groupBuyingLabel;
@property (retain, nonatomic) UIView *groupBuyingLabelView;
@property (retain, nonatomic) UIImageView *contentTipsIcon;
@property (retain, nonatomic) UIImageView *contentTipsTextImageView;
@property (retain, nonatomic) UIView *hotDetailView;
@property (retain, nonatomic) AWEFeedNearbyShopCardUIConfig *UIConfig;
@property (nonatomic) BOOL isStructModel;
@property (nonatomic) long long spuInfoListCount;

- (id)resizableLocalImage;
- (void)loadImageURL:(id)a0 completion:(id /* block */)a1;
- (void)updateWithPOIShopCardModel:(id)a0;
- (void)setupUI2;
- (void)trackShopEvent:(id)a0 params:(id)a1;
- (void)jumpToPoi:(id)a0 andEnterMethod:(id)a1;
- (void)labelJumpToPoi;
- (void)jumpToGoods:(id)a0;
- (void)jumpToPoiList;
- (id)mainBG;
- (void)loadGeckoAndCDNResource:(id)a0;
- (id)contentBG;
- (void)loadContentBGCDNResource:(id)a0;
- (void)layoutUI2;
- (double)groupBuyingOffset;
- (double)shopDetailViewOffset;
- (double)groupBuyingOffsetNoneX;
- (double)shopDetailViewOffsetNoneX;
- (id)lifeExtraInfo;
- (id)getDishName:(id)a0;
- (void)setBGMainEndState;
- (void)setHeadherEndState;
- (void)setSPUEndState;
- (void)setButtonEndState;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setInitialState;
- (void)layoutUI;

@end
