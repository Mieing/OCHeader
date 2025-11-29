@class NSDictionary, NSString, NSTimer, AWEMarkView, UIView, AWEPageContext, AWEAwemeModel;
@protocol AWEAwemePlayInteractionUIDisplayDelegate, AWEShoppingCartAnchorProtocol, AWEAwemePlayInteractionUpdateDelegate, AWEAwemePlayInteractionCommerceDelegate, AWEPlayInteractionViewControllerProtocol, AWEGoodsBasicModelProtocol, AWEAwemePlayInteractionPanelDelegate, AWEAwemePlayInteractionPresenterMethodDelegate;

@interface AWEFeedAnchorShoppingCartConfig : AWEFeedAnchorBaseConfig <AWEBalanceExchangeAnchorInfoUpdateMessage, AWEECCartAnchorPitayaServiceHandler, AWEFeedAnchorShoppingCartConfigProtocol>

@property (retain, nonatomic) AWEMarkView *commerceButton;
@property (retain, nonatomic) NSTimer *goodsShowDetailTimer;
@property (retain, nonatomic) NSTimer *displaySubtagStageTwoTimer;
@property (retain, nonatomic) NSTimer *displayImageStageOneTimer;
@property (retain, nonatomic) UIView<AWEShoppingCartAnchorProtocol> *shoppingAnchorView;
@property (nonatomic) BOOL displayStageOneOnceToken;
@property (nonatomic) BOOL imageDisplayStageOneOnceToken;
@property (nonatomic) BOOL isImageAnchorSuffixShowed;
@property (nonatomic) long long cartProductCount;
@property (nonatomic) BOOL liteBalanceExchangeAnchorShow;
@property (retain, nonatomic) id liteBalanceExchangeCardInfo;
@property (nonatomic) BOOL anchorSuffixBeenShiftdown;
@property (retain, nonatomic) id<AWEGoodsBasicModelProtocol> goods;
@property (copy, nonatomic) NSString *displayedTags;
@property (nonatomic) BOOL subtagHasDisplayed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEAwemePlayInteractionPresenterMethodDelegate, AWEAwemePlayInteractionPanelDelegate, AWEAwemePlayInteractionCommerceDelegate, AWEAwemePlayInteractionUIDisplayDelegate, AWEAwemePlayInteractionUpdateDelegate, AWEPlayInteractionViewControllerProtocol> interactionViewController;
@property (weak, nonatomic) AWEPageContext *interactionContext;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (readonly, copy, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) id /* block */ anchorViewDidDisappearBlock;
@property (nonatomic) long long sceneType;

+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:(id)a0 extraInfo:(id)a1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForCommentList:(id)a0 extraInfo:(id)a1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForBulletScreen:(id)a0 extraInfo:(id)a1;
+ (Class)aAWEBalanceExchangeDOUYINLiteAdapterClass;
+ (Class)aAWEBalanceExchangeManagerDOUYINLiteAdapterClass;
+ (BOOL)canGetAnchorDataForFeed;
+ (BOOL)canGetAnchorDataForCommentList;
+ (BOOL)canHasAnchorViewData;
+ (id)anchorType;

- (void)anchorViewWillShowOnSuperview;
- (void)updateWithAwemeModel:(id)a0 needPerformOnDisplay:(BOOL)a1;
- (id)anchorViewWithModel:(id)a0;
- (id /* block */)layoutWithAwemeModel:(id)a0 commonLayoutInfo:(id)a1;
- (id)anchorPitayaServiceHandlerKey;
- (void)handleShowSecondLineWithAwemeID:(id)a0;
- (id)aAWEBalanceExchangeDOUYINLiteAdapter;
- (id)aAWEBalanceExchangeManagerDOUYINLiteAdapter;
- (void)trackAdEventWithLabelName:(id)a0;
- (void)trackAdClickEvent;
- (void)updateBalanceExchangeAnchorWithCardInfo:(id)a0;
- (void)registerPitayaServiceIfNeeded;
- (id)getProductIdList:(id)a0;
- (void)updateForBigFontModeWithButton:(id)a0;
- (void)resetInteractionVCCommentVC;
- (void)trackSearchDouPlushAnchorShoppingCartShow;
- (void)fetchShortVideoQCPXCoupon;
- (void)triggerAnchorBenefitActionIfNeeded;
- (void)recordShoppingCartClicked;
- (BOOL)enableAnchorSecondLineShowByPitaya;
- (void)showShoppingCartSuffixStageOne;
- (void)showImageShoppingCartSuffixStageOne;
- (void)imageShowShoppingCartSuffixStageOne;
- (void)displaySecondLineForHighlightStyle;
- (void)showShoppingCartSuffixStageTwo;
- (void)trackAnchorShowWithDetail;
- (void)showShoppingCartExtraTagsWithLoopTimes:(long long)a0;
- (void)showShoppingCartExtraTagsWithPlayBackTime:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)dealloc;

@end
