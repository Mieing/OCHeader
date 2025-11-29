@class AWENearbyPOIContentContainer, UIView, DUXPopover, UITapGestureRecognizer, UIImageView, UIButton, AWENearbyPOIAddressView, AWENearbyPOIInfoFavoriteButton, YYLabel, AWENearbyPOITagsView, AWEBizUIBubble;
@protocol AWENearbyPOISpuViewProtocol, AWENearbyPOIInfoCardModel, AWENearbyPOIInfoCardMessage;

@interface AWENearbyPOIInfoCardView : AWEPOITouchThroughView

@property (retain, nonatomic) id<AWENearbyPOIInfoCardModel> model;
@property (retain, nonatomic) UIView *centerContainerLayout;
@property (retain, nonatomic) AWENearbyPOIContentContainer *poiContentContainer;
@property (retain, nonatomic) YYLabel *poiTitleLabel;
@property (retain, nonatomic) AWENearbyPOIAddressView *addressView;
@property (retain, nonatomic) AWENearbyPOITagsView *poiTagsView;
@property (retain, nonatomic) UIView<AWENearbyPOISpuViewProtocol> *spuView;
@property (retain, nonatomic) UIView *bottomButtonsView;
@property (retain, nonatomic) AWENearbyPOIInfoFavoriteButton *favoriteButton;
@property (retain, nonatomic) UIButton *detailButton;
@property (retain, nonatomic) AWEBizUIBubble *favoriteBubble;
@property (retain, nonatomic) DUXPopover *favoritePopover;
@property (nonatomic) BOOL isReqeustingFavorite;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) YYLabel *tipsLabel;
@property (nonatomic) double kHorizSpan;
@property (retain, nonatomic) UITapGestureRecognizer *centerContainerLayoutGesture;
@property (retain, nonatomic) UITapGestureRecognizer *spuViewGesture;
@property (retain, nonatomic) UITapGestureRecognizer *titleGesture;
@property (retain, nonatomic) UITapGestureRecognizer *addressGesture;
@property (retain, nonatomic) UITapGestureRecognizer *poiTagsGesture;
@property (retain, nonatomic) UIView *headerAccessibilityBgView;
@property (nonatomic) long long spuTopAnchorType;
@property (weak, nonatomic) id<AWENearbyPOIInfoCardMessage> routeDelegate;

+ (id)cardViewWithModel:(id)a0;

- (void)configViews;
- (void)configViewWithModel:(id)a0;
- (void)showDetailWithMethod:(id)a0 bulletType:(id)a1;
- (void)setupAccessibilityLabel;
- (void)updateFavoriteButton:(id)a0 isSelected:(BOOL)a1 animated:(BOOL)a2;
- (void)didReceivePOICollectionStatusChanged:(id)a0;
- (void)showFavoriteBubble:(id)a0;
- (id)getTipTextWithIconDark:(BOOL)a0 TextColor:(id)a1;
- (void)onTapFavorite:(id)a0;
- (void)onTapDetail:(id)a0;
- (BOOL)isBottomOffsetSmall;
- (void)startCardViewAnimation;
- (void).cxx_destruct;

@end
