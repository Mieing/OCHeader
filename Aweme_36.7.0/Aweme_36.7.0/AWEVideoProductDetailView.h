@class AWEVideoProductTipsTagView, AWEEntertainmentMultipleEventsView, UIVisualEffectView, AWEVideoProductDetailHeaderView, UIView, AWEVideoProductLimitedFreeReserveView, UIButton;
@protocol AWEVideoProductDetailViewDelegate;

@interface AWEVideoProductDetailView : UIView

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) AWEVideoProductDetailHeaderView *headerView;
@property (retain, nonatomic) AWEEntertainmentMultipleEventsView *multipleEventsView;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIButton *buyButton;
@property (retain, nonatomic) AWEVideoProductLimitedFreeReserveView *reserveView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) AWEVideoProductTipsTagView *tipsTagView;
@property (weak, nonatomic) id<AWEVideoProductDetailViewDelegate> delegate;
@property (nonatomic) BOOL enableBackgroundClick;

- (void)setCoverImage:(id)a0;
- (void)setSubTitleText:(id)a0;
- (void)setBuyButtonText:(id)a0;
- (void)setRankText:(id)a0;
- (void)didClickCloseButton:(id)a0;
- (void)setButtonEventStyle:(unsigned long long)a0 animated:(BOOL)a1;
- (void)setButtonEventText:(id)a0 forIndex:(long long)a1;
- (void)setSubTitleArray:(id)a0;
- (long long)getEventButtonStateForIndex:(long long)a0;
- (void)setCoverWithURLArray:(id)a0 defaultImage:(id)a1;
- (void)setCoverImageCornerRadius:(double)a0;
- (void)setCoverImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)setTitleTopOffset:(double)a0;
- (void)setSubTitleBottomOffset:(double)a0;
- (void)didClickBuyButton:(id)a0;
- (unsigned long long)getMultipleEventStyle;
- (void)setTitleImageWithURLArray:(id)a0;
- (void)removeTitleImageView;
- (void)addDecorationView:(id)a0 masConstraint:(id /* block */)a1;
- (void)addReserveView;
- (void)setReserveViewText:(id)a0;
- (void)setReserveViewWithURLArray:(id)a0;
- (void)removeCloseButton;
- (void)updateToFreeStyle;
- (void)setMarkingTags:(id)a0;
- (void)setPlayletDescription:(id)a0;
- (void)setButtonEventText:(id)a0 richText:(id)a1 forIndex:(long long)a2;
- (void)setButtonTextSideImage:(id)a0 forIndex:(long long)a1;
- (void)setTipsTagInfo:(id)a0 forIndex:(long long)a1;
- (void)setTipsTagInfo:(id)a0;
- (void)setCurrencyText:(id)a0;
- (void)updateRepurchaseTagWithTag:(id)a0;
- (void)didClickBackground;
- (void)didClickRightEventButton:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setTitleText:(id)a0;
- (void)setupSubviews;
- (void)setTitleImage:(id)a0;
- (void)setButtonSpacing:(double)a0;
- (void)setPriceText:(id)a0;

@end
