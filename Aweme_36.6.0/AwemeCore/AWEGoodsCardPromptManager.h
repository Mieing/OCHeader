@class NSArray, NSString, AWEAwemeModel, AWEFeedGoodsSlideCardView, NSDictionary, MASViewAttribute;

@interface AWEGoodsCardPromptManager : NSObject <AWEGoodsSlideCardViewDelegate, AWEGoodsCardPromptManagerInterface>

@property (nonatomic) BOOL isCardTapped;
@property (nonatomic) BOOL isCardShowing;
@property (nonatomic) BOOL isTabBarControl;
@property (nonatomic) BOOL hideAnimation;
@property (retain, nonatomic) NSArray *goodsDataArray;
@property (copy, nonatomic) NSString *targetPromotionID;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEFeedGoodsSlideCardView *goodsCardView;
@property (copy, nonatomic) id /* block */ promptViewAppearingBlock;
@property (copy, nonatomic) id /* block */ promptViewDisappearingBlock;
@property (copy, nonatomic) id /* block */ displayingBlock;
@property (copy, nonatomic) id /* block */ tappedBlock;
@property (copy, nonatomic) id /* block */ hideInteractionViewsBlock;
@property (copy, nonatomic) id /* block */ enableRootVCVerticalPanGestureBlock;
@property (copy, nonatomic) NSDictionary *extraData;
@property (nonatomic) double cardBottomY;
@property (retain, nonatomic) MASViewAttribute *bottomViewAttribute;
@property (copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)onSaleGoodsList:(id)a0;

- (BOOL)isCardInUse;
- (void)willDisplayGoods:(id)a0 index:(long long)a1;
- (void)closeCurrentGoodsCard;
- (void)enterGoodsFullScreenVCInfoWithTargetGoods:(id)a0;
- (id)p_preLoadGoodsCompleteInfo:(id)a0;
- (double)goodsCardWidth;
- (double)goodsCardHeight;
- (void)trackShowEventWithIndex:(long long)a0;
- (void)trackProductTagShowWithIndex:(long long)a0;
- (void)promptGoods;
- (long long)indexForPromotionID:(id)a0;
- (id)goodsAtIndex:(long long)a0;
- (BOOL)expectEnterInternalFeedAtIndex:(long long)a0;
- (long long)internalFeedRecommendTypeAtIndex:(long long)a0;
- (long long)internalFeedListStyleAtIndex:(long long)a0;
- (void).cxx_destruct;
- (id)contentView;
- (void)clear;
- (void)resumeAnimation;
- (void)reset;
- (void)showInView:(id)a0;
- (void)dismiss:(BOOL)a0;
- (void)cancelAnimation;

@end
