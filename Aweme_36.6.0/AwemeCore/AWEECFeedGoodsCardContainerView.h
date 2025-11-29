@class YYLabel, UIStackView, NSMutableArray, UITapGestureRecognizer, AWEECFeedGoodsCardCommentView, AWEECFeedGoodsCardTitleView, AWEECFeedGoodsCardModel;
@protocol AWEECFeedGoodsCardContainerViewDelegate;

@interface AWEECFeedGoodsCardContainerView : UIView

@property (retain, nonatomic) AWEECFeedGoodsCardModel *model;
@property (retain, nonatomic) AWEECFeedGoodsCardTitleView *titleView;
@property (retain, nonatomic) YYLabel *title;
@property (retain, nonatomic) AWEECFeedGoodsCardCommentView *commentView;
@property (retain, nonatomic) YYLabel *commentLabel;
@property (retain, nonatomic) UIStackView *productStackView;
@property (retain, nonatomic) NSMutableArray *cells;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGesture;
@property (weak, nonatomic) id<AWEECFeedGoodsCardContainerViewDelegate> delegate;

- (void)setupUIWithModel:(id)a0;
- (void)__handleTapGesture:(id)a0;
- (void)clickProductCellWithString:(id)a0 productId:(id)a1;
- (void)updateViewWithCurrentIndex:(long long)a0 progressValue:(double)a1 totalValue:(double)a2;
- (void)updateCommentViewWithCurrentIndex:(long long)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
