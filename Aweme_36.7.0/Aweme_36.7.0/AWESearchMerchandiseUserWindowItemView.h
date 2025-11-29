@class NSIndexPath, UIImageView, NSDictionary, UIViewController, AWESearchMerchandiseUserWindowCommonInfoView, UIButton, UIView, CAGradientLayer, AWESearchGoodsAnchorView, AWEDoubleColumnSearchMerchandiseUserInfoModel, AWESearchCachalotResultContext, NSString, AWESearchEcommerceInfoAnchorModel, AWESearchUserWindowInfoViewModel;
@protocol AWESearchLiveViewProtocol;

@interface AWESearchMerchandiseUserWindowItemView : UIView <AWESearchLiveViewPlayerDelegate>

@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseUserInfoModel *model;
@property (retain, nonatomic) AWESearchEcommerceInfoAnchorModel *anchorModel;
@property (retain, nonatomic) UIView *goodsImageContentView;
@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) UIImageView *liveTagView;
@property (retain, nonatomic) UIView *liveMaskView;
@property (retain, nonatomic) CAGradientLayer *liveGradientLayer;
@property (retain, nonatomic) AWESearchGoodsAnchorView *goodsAnchorView;
@property (retain, nonatomic) AWESearchMerchandiseUserWindowCommonInfoView *commonInfoView;
@property (retain, nonatomic) UIView<AWESearchLiveViewProtocol> *liveView;
@property (retain, nonatomic) UIButton *muteButton;
@property (retain, nonatomic) NSDictionary *searchInfoDict;
@property (retain, nonatomic) AWESearchUserWindowInfoViewModel *viewModel;
@property (nonatomic) BOOL isInitMuteStatus;
@property (nonatomic) BOOL isAd;
@property (nonatomic) BOOL isFromECommerce;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (weak, nonatomic) UIViewController *parentViewController;
@property (retain, nonatomic) AWESearchCachalotResultContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForModel:(id)a0 containerWidth:(double)a1;
+ (id)getSearchEcommerceInfoAnchorModelWithAweme:(id)a0;
+ (id)getEcommerceAnchorModelsWithAweme:(id)a0;

- (void)didPlayError:(id)a0;
- (void)didStartStall;
- (void)enterLiveRoom;
- (id)douyinNumberABCFontOfSize:(double)a0;
- (void)trackStoreEntranceShow;
- (id)getSearchResultId;
- (void)updateTagViewWithModel:(id)a0;
- (void)clickMuteBtn:(id)a0;
- (id)appendPriceSuffixForModel:(id)a0 toPrice:(id)a1;
- (void)transferToShopWithUrl:(id)a0 goodsModel:(id)a1;
- (void)trackClickWithButtonType:(id)a0 goodsModel:(id)a1;
- (void)bindBSTWithButton:(id)a0 goodsModel:(id)a1;
- (void)updateLiveInfoLogExtra:(id)a0;
- (void)configGoodsWindowWithArray:(id)a0;
- (void)updateLiveViewWithModel:(id)a0 andInfoHeight:(double)a1;
- (void)bindBSTWithView:(id)a0 model:(id)a1 index:(long long)a2;
- (void)trackLiveShowWhenProductCardShow;
- (void)trackLiveContainerShow;
- (void)trackGoodsAnchorsShow:(id)a0;
- (void)enterLiveRoomWithProductID:(id)a0 productRank:(long long)a1;
- (void)adTrackEnterLiveRoomWithProductID:(id)a0;
- (void)trackGoodsAnchorClick:(id)a0 index:(long long)a1;
- (void)updateMuteBtnImage;
- (void)trackClickMuteBtn;
- (void)trackClickLiveCardWithButtonType:(id)a0 productRank:(long long)a1;
- (void)trackGoodsAnchorShow:(id)a0 index:(long long)a1;
- (id)getGoodsAnchorTrackParams:(id)a0 index:(long long)a1;
- (void)trackShowMuteBtn;
- (void)trackADPlay;
- (void)trackADBreak;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)didEnd;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didStart;
- (void)updateWithModel:(id)a0;
- (void)didStop;

@end
