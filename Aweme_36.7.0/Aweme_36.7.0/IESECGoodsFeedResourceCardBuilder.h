@class UIStackView, UIView, IESECGoodsFeedResourceCard, IESECFeedResourceCardModel, IESECGoodsFeedResourceCardHeaderView, IESECGoodsFeedResourceCardPanelsView, IESECGoodsFeedResourceCardButtonView, IESECGoodsFeedResourceCardWindowView, NSMutableArray, IESECGoodsFeedResourceCardStoreView, IESECGoodsFeedResourceCardCouponView;
@protocol IESECGoodsFeedResourceCardDelegate;

@interface IESECGoodsFeedResourceCardBuilder : NSObject

@property (retain, nonatomic) IESECFeedResourceCardModel *model;
@property (retain, nonatomic) UIStackView *nodeContainer;
@property (nonatomic) double containerWidth;
@property (retain, nonatomic) NSMutableArray *productCardList;
@property (retain, nonatomic) IESECGoodsFeedResourceCardHeaderView *headerView;
@property (retain, nonatomic) IESECGoodsFeedResourceCardWindowView *windowView;
@property (retain, nonatomic) IESECGoodsFeedResourceCardPanelsView *panelsView;
@property (retain, nonatomic) IESECGoodsFeedResourceCardButtonView *buttonView;
@property (retain, nonatomic) IESECGoodsFeedResourceCardStoreView *storeView;
@property (retain, nonatomic) IESECGoodsFeedResourceCardCouponView *couponView;
@property (weak, nonatomic) IESECGoodsFeedResourceCard *card;
@property (retain, nonatomic) UIView *cardView;
@property (weak, nonatomic) id<IESECGoodsFeedResourceCardDelegate> delegate;

+ (double)heightOfResourceCard:(id)a0 withContentWidth:(double)a1;
+ (struct pair<std::vector<CGRect>, double> { struct vector<CGRect, std::allocator<CGRect>> { struct CGRect *x0; struct CGRect *x1; struct CGRect *x2; } x0; double x1; })productCardFrameListWithContainerWidth:(double)a0 panelLayout:(unsigned long long)a1;

- (void)updateCardViewWithCardModel:(id)a0 containerWidth:(double)a1;
- (void)updateCardViewWithCardModel:(id)a0;
- (void)addArrangedNodeViewWith:(id)a0;
- (void)moreProductDidClick:(id)a0;
- (BOOL)shouldshowCrossedMarketPrice;
- (void)productCardDidClick:(id)a0;
- (void)setupWindowViewWithModel:(id)a0;
- (void)storeEntranceDidClick:(id)a0;
- (void)buttonNodeDidClick:(id)a0;
- (void)windowCardDidClick:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setupUI;

@end
